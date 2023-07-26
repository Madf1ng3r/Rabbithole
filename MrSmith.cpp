#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <map>
#include "Mainframe.h"
#include <string>
using namespace std;
const int WIDTH = 235;
const int HEIGHT = 55;
struct Player {
    double x;
    double y;
    int health;
    int weaponDamage;
    int ammo;
    int medkits;
    int ammunition;
    int direction; // Blickrichtung des Spielers (0 - oben, 1 - rechts, 2 - unten, 3 - links)
    int bulletDamage; // Schaden der abgefeuerten Kugeln
};

struct Enemy {
    double x;
    double y;
    int health;
    int damage;
    int weaponDamage;
    bool alive; // Zustand des Gegners (lebendig oder tot)
};

struct Item { 
    double x;
    double y;
    char symbol;
    string name;
    bool isAmmo; // Gibt an, ob das Item Munition ist
};

void setConsoleMaximized() {
    HWND console = GetConsoleWindow();
    ShowWindow(console, SW_MAXIMIZE);
}

void waitForEnter() {
    cout << "Drücke die Enter-Taste, um das Spiel zu starten...";
    cin.ignore();
    cin.get();
}

void setCursorPosition(int x, int y) { // Zeichne Cursor
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hideCursor() { // verstecke Cursor
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 100;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void drawBoard(const Player& player, const vector<Enemy>& enemies, const vector<Item>& items, const vector<pair<int, int>>& projectiles, const vector<vector<char>>& obstacles) {
    setCursorPosition(0, 0);
    // Zeichne Spielfeldrand
    cout << "##################################################################################################################################################################################################################" << endl;
    for (int i = 0; i < HEIGHT; i++) {
        setCursorPosition(0, i + 1);
        cout << "#";
        for (int j = 0; j < WIDTH; j++) {
            if (i == static_cast<int>(player.y) && j == static_cast<int>(player.x)) {
                cout << "\033[32m";
                cout << "P";
                cout << "\033[0m";
            }
            else {
                bool enemyFound = false;
                for (const Enemy& enemy : enemies) {
                    if (static_cast<int>(enemy.x) == j && static_cast<int>(enemy.y) == i && enemy.alive) {
                        cout << "E";
                        enemyFound = true;
                        break;
                    }
                }
                if (!enemyFound) {
                    bool itemFound = false;
                    for (const Item& item : items) {
                        if (static_cast<int>(item.x) == j && static_cast<int>(item.y) == i) {
                            cout << item.symbol << " ";
                            itemFound = true;
                            break;
                        }
                    }
                    if (!itemFound) {
                        bool projectileFound = false;
                        for (const auto& projectile : projectiles) {
                            if (projectile.first == j && projectile.second == i) {
                                cout << "\033[31m";
                                if (enemyFound && !enemies[0].alive) {
                                    cout << "X";
                                }
                                else {
                                    cout << "*";
                                }
                                cout << "\033[0m";
                                projectileFound = true;
                                break;
                            }
                        }
                        if (!projectileFound) {
                            if (obstacles[i][j] != ' ') {
                                cout << obstacles[i][j] << " ";
                            }
                            else {
                                cout << " ";
                            }
                        }
                    }
                }
            }
        }
        cout << "#";
    }
    // Zeichne Spielfeldrand
    setCursorPosition(0, HEIGHT + 1);
    cout << "###############################################################################################################################################################################################################################################" << endl;
    // Grafische Darstellung der Lebensanzeige des Spielers
    setCursorPosition(0, HEIGHT + 2);
    cout << "Leben: ";
    for (int i = 0; i < player.health / 10; i++) {
        cout << char(219);
    }
    cout << endl;
    cout << " | ";
    cout << "Magazin: " << player.ammo << "   ";
    cout << " | ";
    cout << "Medkits: " << player.medkits << "   ";
    cout << " | ";
    cout << "Munition: " << player.ammunition << endl;
}

void movePlayer(Player& player, char direction, const vector<vector<char>>& obstacles) {
    double moveSpeed = 1.6; // Geschwindigkeit der Spielerbewegung
    double nextX = player.x;
    double nextY = player.y;
    switch (direction) {
    case 'w':
        nextY -= moveSpeed;
        break;
    case 's':
        nextY += moveSpeed;
        break;
    case 'a':
        nextX -= moveSpeed;
        break;
    case 'd':
        nextX += moveSpeed;
        break;
    case ' ':
        nextX += 2 * moveSpeed;
        break;
    }
    if (nextX >= 0 && nextX < WIDTH && nextY >= 0 && nextY < HEIGHT && obstacles[static_cast<int>(nextY)][static_cast<int>(nextX)] == ' ') {
        player.x = nextX;
        player.y = nextY;
    }
}

bool checkCollision(const Player& player, const Enemy& enemy) {
    return static_cast<int>(player.x) == static_cast<int>(enemy.x) && static_cast<int>(player.y) == static_cast<int>(enemy.y) && enemy.alive;
}

bool checkCollision(const Player& player, const Item& item) {
    return static_cast<int>(player.x) == static_cast<int>(item.x) && static_cast<int>(player.y) == static_cast<int>(item.y);
}

bool checkCollision(const pair<int, int>& projectile, const Enemy& enemy) {
    return projectile.first == static_cast<int>(enemy.x) && projectile.second == static_cast<int>(enemy.y) && enemy.alive;
}

void moveEnemyTowardsPlayer(Enemy& enemy, const Player& player, const vector<vector<char>>& obstacles) {
    double dx = player.x - enemy.x;
    double dy = player.y - enemy.y;
    double nextX = enemy.x;
    double nextY = enemy.y;
    if (dx != 0) {
        double directionX = dx / abs(dx);
        nextX += directionX * 0.3; // Geschwindigkeit der Gegnerbewegung
    }
    if (dy != 0) {
        double directionY = dy / abs(dy);
        nextY += directionY * 0.3; // Geschwindigkeit der Gegnerbewegung
    }

    if (nextX >= 0 && nextX < WIDTH && nextY >= 0 && nextY < HEIGHT && obstacles[static_cast<int>(nextY)][static_cast<int>(nextX)] == ' ') {
        enemy.x = nextX;
        enemy.y = nextY;
    }
}

void shootPlayerWeapon(Player& player, vector<pair<int, int>>& projectiles, vector<Enemy>& enemies) {
    if (player.ammo > 0) {
        player.ammo--;
        double projectileX = player.x;
        double projectileY = player.y;
        switch (player.direction) {
        case 0: // Blickrichtung nach oben
            projectileY -= 1;
            break;
        case 1: // Blickrichtung nach rechts
            projectileX += 1;
            break;
        case 2: // Blickrichtung nach unten
            projectileY += 1;
            break;
        case 3: // Blickrichtung nach links
            projectileX -= 1;
            break;
        }
        projectiles.push_back(make_pair(static_cast<int>(projectileX), static_cast<int>(projectileY)));
        // Überprüfe, ob die Kugel einen Gegner trifft
        for (auto it = enemies.begin(); it != enemies.end(); ) {
            Enemy& enemy = *it;
            if (checkCollision(projectiles.back(), enemy)) {
                enemy.health -= player.bulletDamage;
                if (enemy.health <= 0) {
                    enemy.alive = false;
                    cout << "Gegner besiegt!" << endl;
                }
                projectiles.pop_back();
                break;
            }
            ++it;
        }
    }
    else {
        cout << "Waffe ist leer!" << endl;
    }
}

void collectItem(Player& player, Item& item) {
    if (item.name == "Medikit") {
        player.medkits++;
        player.health = 100;
        cout << "Medikit eingesammelt! Leben vollständig wiederhergestellt." << endl;
    }
    else if (item.name == "Munition") {
        player.ammunition += 2;
        cout << "Munition eingesammelt! Munitionsgrenze erhöht." << endl;
    }
}

void drawExplosion(int x, int y) {
    setCursorPosition(x, y);
    cout << "   ";
    setCursorPosition(x - 1, y + 1);
    cout << " ";
    setCursorPosition(x + 1, y + 1);
    cout << " ";
}

void spawnItems(vector<Item>& items, int level) {
    items.clear();
    if (level >= 2 && level <= 7) {
        int numItems = level;
        for (int i = 0; i < numItems; i++) {
            Item item;
            item.x = rand() % WIDTH;
            item.y = rand() % HEIGHT;

            if (i < numItems / 2) {
                item.symbol = '+';
                item.name = "Medikit";
            }
            else {
                item.symbol = 'M';
                item.name = "Munition";
                item.isAmmo = true;
            }

            items.push_back(item);
        }
    }
}
bool playLevel(Player& player, int level) {
    int numEnemies = level;
    vector<Enemy> enemies(numEnemies);
    vector<Item> items;
    vector<pair<int, int>> projectiles;
    vector<vector<char>> obstacles(HEIGHT, vector<char>(WIDTH, ' '));
    spawnItems(items, level);
    for (int i = 0; i < numEnemies; i++) {
        enemies[i].x = rand() % WIDTH;
        enemies[i].y = rand() % HEIGHT;
        enemies[i].health = 90;
        enemies[i].damage = 20;
        enemies[i].weaponDamage = 10;
        enemies[i].alive = true;
    }
    // Setze Hindernisse
    for (int i = 0; i < 10; i++) {
        int obstacleX = rand() % (WIDTH - 4) + 2;
        int obstacleY = rand() % (HEIGHT - 4) + 2;
        obstacles[obstacleY][obstacleX] = '_';
        obstacles[obstacleY - 1][obstacleX] = '|';
        obstacles[obstacleY + 1][obstacleX] = '|';
        obstacles[obstacleY][obstacleX - 1] = '_';
        obstacles[obstacleY][obstacleX + 1] = '_';
        obstacles[obstacleY - 1][obstacleX - 1] = '/';
        obstacles[obstacleY + 1][obstacleX + 1] = '/';
        obstacles[obstacleY - 1][obstacleX + 1] = '\\';
        obstacles[obstacleY + 1][obstacleX - 1] = '\\';
    }
    drawBoard(player, enemies, items, projectiles, obstacles);
    while (player.health > 0 && enemies.size() > 0 && enemies[0].health > 0) {
        if (GetAsyncKeyState('W') & 0x8000) {
            movePlayer(player, 'w', obstacles);
        }
        else if (GetAsyncKeyState('S') & 0x8000) {
            movePlayer(player, 's', obstacles);
        }
        else if (GetAsyncKeyState('A') & 0x8000) {
            movePlayer(player, 'a', obstacles);
        }
        else if (GetAsyncKeyState('D') & 0x8000) {
            movePlayer(player, 'd', obstacles);
        }
        else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            movePlayer(player, ' ', obstacles);
        }
        bool playerEnemyCollision = false;
        for (Enemy& enemy : enemies) {
            if (checkCollision(player, enemy)) {
                player.health = 0;
                playerEnemyCollision = true;
                break;
            }
        }
        if (!playerEnemyCollision) {
            for (int i = 0; i < items.size(); i++) {
                if (checkCollision(player, items[i])) {
                    collectItem(player, items[i]);
                    items.erase(items.begin() + i);
                    break;
                }
            }
        }
        drawBoard(player, enemies, items, projectiles, obstacles);
        if (player.health > 0) {
            moveEnemyTowardsPlayer(enemies[0], player, obstacles);
        }
        if (GetAsyncKeyState('Q') & 0x8000) {
            shootPlayerWeapon(player, projectiles, enemies);
            drawBoard(player, enemies, items, projectiles, obstacles);
        }
        // Bewege Projektile
        for (int i = 0; i < projectiles.size(); i++) {
            projectiles[i].second -= 1;
            if (projectiles[i].second <= 0) {
                projectiles.erase(projectiles.begin() + i);
                i--;
            }
        }
        // Überprüfe, ob Projektil Gegner trifft
        for (auto it = projectiles.begin(); it != projectiles.end(); ) {
            pair<int, int>& projectile = *it;
            bool hitEnemy = false;
            for (auto enemyIt = enemies.begin(); enemyIt != enemies.end(); ) {
                Enemy& enemy = *enemyIt;
                if (checkCollision(projectile, enemy)) {
                    enemy.health -= player.bulletDamage;
                    if (enemy.health <= 0) {
                        enemy.alive = false;
                        cout << "Gegner besiegt!" << endl;
                    }
                    it = projectiles.erase(it);
                    hitEnemy = true;
                    break;
                }
                else {
                    ++enemyIt;
                }
            }
            if (!hitEnemy) {
                ++it;
            }
        }
        Sleep(10);
    }
    // Überprüfe, ob der Spieler gewonnen hat
    if (player.health > 0 && enemies[0].health <= 0) {
        cout << "Level " << level << " erfolgreich abgeschlossen!" << endl;
        return true;
    }
    else {
        cout << "Du hast das Spiel verloren!" << endl;
        return false;
    }
}
int smmain() {
    setConsoleMaximized();
    hideCursor();
    srand(static_cast<unsigned int>(time(0)));
 //   cout << "Willkommen in der Matrix!";
    cout << R"(
 ___________________
 | _______________ |
 | |XXXXXXXXXXXXX| |
 | |XXXXHelloXXXX| |
 | |XXXXXMrXXXXXX| |
 | |XXXAndersonXX| |
 | |XXXXXXXXXXXXX| |
 |_________________|
     _[_______]_
 ___[___________]___
|         [_____] []|__
|         [_____] []|  \__
L___________________J     \ 
 ___________________      /\
/###################\    (__)






 



)";
    cout << "                                                                                  =============================== " << endl;
    cout << "                                                                                 =========== Steuerung ============" << endl;
    cout << "                                                                                 ||                              ||" << endl;
    cout << "                                                                                 ||  W - Nach oben bewegen       ||" << endl;
    cout << "                                                                                 ||                              ||" << endl;
    cout << "                                                                                 ||  S - Nach unten bewegen      ||" << endl;
    cout << "                                                                                 ||                              ||" << endl;
    cout << "                                                                                 ||  A - Nach links bewegen      ||" << endl;
    cout << "                                                                                 ||                              ||" << endl;
    cout << "                                                                                 ||  D - Nach rechts bewegen     ||" << endl;
    cout << "                                                                                 ||                              ||" << endl;
    cout << "                                                                                 ||  Pfeiltaste - Sprung         ||" << endl;
    cout << "                                                                                 ||                              ||" << endl;
    cout << "                                                                                 ||  Q - Schießen                ||" << endl;
    cout << "                                                                                 ==================================" << endl;

    waitForEnter();
    Player player;
    player.x = WIDTH / 2;
    player.y = HEIGHT / 2;
    player.health = 100;
    player.weaponDamage = 30;
    player.ammo = 10;
    player.medkits = 3;
    player.ammunition = 5;
    player.direction = 0;
    player.bulletDamage = 30;
    int level = 1;
    bool isGameWon = false;
    while (player.health > 0 && !isGameWon) {
        isGameWon = playLevel(player, level);
        level++;
        if (level == 8) {
            cout << "Herzlichen Glückwunsch! Du hast das Spiel gewonnen!" << endl;
            break;
        }
        else if (player.health > 0) {
            char choice;
            cout << "Möchtest du das nächste Level spielen? (j/n): ";
            cin >> choice;
            if (choice != 'j') {
                break;
            }
        }
    }
    resetConsoleWindowSize();
    return 0;
}