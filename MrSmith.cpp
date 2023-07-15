#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

const int WIDTH = 40;
const int HEIGHT = 25;

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

void setCursorPosition(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hideCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 100;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void drawBoard(const Player& player, const vector<Enemy>& enemies, const vector<Item>& items, const vector<pair<int, int>>& projectiles) {
    setCursorPosition(0, 0);

    // Zeichne Spielfeldrand
    cout << "###################################################" << endl;

    for (int i = 0; i < HEIGHT; i++) {
        setCursorPosition(0, i + 1);
        cout << "#";

        for (int j = 0; j < WIDTH; j++) {
            if (i == static_cast<int>(player.y) && j == static_cast<int>(player.x)) {
                cout << "\033[32m";
                cout << "P ";
                cout << "\033[0m";
            }
            else {
                bool enemyFound = false;
                for (const Enemy& enemy : enemies) {
                    if (static_cast<int>(enemy.x) == j && static_cast<int>(enemy.y) == i && enemy.alive) {
                        cout << "E ";
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
                                    cout << "X ";
                                }
                                else {
                                    cout << "* ";
                                }
                                cout << "\033[0m";
                                projectileFound = true;
                                break;
                            }
                        }
                        if (!projectileFound) {
                            cout << ". ";
                        }
                    }
                }
            }
        }

        cout << "#";
    }

    // Zeichne Spielfeldrand
    setCursorPosition(0, HEIGHT + 1);
    cout << "###################################################" << endl;

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

void movePlayer(Player& player, char direction) {
    double moveSpeed = 0.95; // Geschwindigkeit der Spielerbewegung

    switch (direction) {
    case 'w':
        if (player.y > moveSpeed) {
            player.y -= moveSpeed;
            player.direction = 0; // Blickrichtung nach oben
        }
        break;
    case 's':
        if (player.y < HEIGHT - moveSpeed - 1) {
            player.y += moveSpeed;
            player.direction = 2; // Blickrichtung nach unten
        }
        break;
    case 'a':
        if (player.x > moveSpeed) {
            player.x -= moveSpeed;
            player.direction = 3; // Blickrichtung nach links
        }
        break;
    case 'd':
        if (player.x < WIDTH - moveSpeed - 1) {
            player.x += moveSpeed;
            player.direction = 1; // Blickrichtung nach rechts
        }
        break;
    case ' ':
        if (player.x < WIDTH - 2) {
            player.x += 2 * moveSpeed;
        }
        break;
    }
}

bool checkCollision(const Player& player, const Enemy& enemy) {
    return static_cast<int>(player.x) == static_cast<int>(enemy.x) && static_cast<int>(player.y) == static_cast<int>(enemy.y) && enemy.alive;
}

bool checkCollision(const Player& player, const Item& item) {
    return static_cast<int>(player.x) == static_cast<int>(item.x) && static_cast<int>(player.y) == static_cast<int>(item.y);
}

void moveEnemyTowardsPlayer(Enemy& enemy, const Player& player) {
    double dx = player.x - enemy.x;
    double dy = player.y - enemy.y;

    if (dx != 0) {
        double directionX = dx / abs(dx);
        enemy.x += directionX * 0.1; // Geschwindigkeit der Gegnerbewegung
    }
    if (dy != 0) {
        double directionY = dy / abs(dy);
        enemy.y += directionY * 0.1; // Geschwindigkeit der Gegnerbewegung
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
            if (static_cast<int>(enemy.x) == static_cast<int>(projectileX) && static_cast<int>(enemy.y) == static_cast<int>(projectileY) && enemy.alive) {
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
                item.symbol = 'A';
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

    spawnItems(items, level);

    for (int i = 0; i < numEnemies; i++) {
        enemies[i].x = rand() % WIDTH;
        enemies[i].y = rand() % HEIGHT;
        enemies[i].health = 50;
        enemies[i].damage = 20;
        enemies[i].weaponDamage = 10;
        enemies[i].alive = true;
    }

    drawBoard(player, enemies, items, projectiles);

    while (player.health > 0 && enemies.size() > 0 && enemies[0].health > 0) {
        if (GetAsyncKeyState('W') & 0x8000) {
            movePlayer(player, 'w');
        }
        else if (GetAsyncKeyState('S') & 0x8000) {
            movePlayer(player, 's');
        }
        else if (GetAsyncKeyState('A') & 0x8000) {
            movePlayer(player, 'a');
        }
        else if (GetAsyncKeyState('D') & 0x8000) {
            movePlayer(player, 'd');
        }
        else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            movePlayer(player, ' ');
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

        drawBoard(player, enemies, items, projectiles);

        if (player.health > 0) {
            moveEnemyTowardsPlayer(enemies[0], player);
        }

        if (GetAsyncKeyState('Q') & 0x8000) {
            shootPlayerWeapon(player, projectiles, enemies);
            drawBoard(player, enemies, items, projectiles);
        }
        else if (GetAsyncKeyState(VK_UP) & 0x8000) {
            player.direction = 0; // Blickrichtung nach oben
        }
        else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            player.direction = 1; // Blickrichtung nach rechts
        }
        else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            player.direction = 2; // Blickrichtung nach unten
        }
        else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            player.direction = 3; // Blickrichtung nach links
        }

        // Automatische Nachladefunktion
        if (player.ammo == 0 && player.ammunition > 0) {
            player.ammo = 10;
            player.ammunition -= 10;
            cout << "Waffe nachgeladen!" << endl;
        }

        Sleep(50); // Kurze Verzögerung, um die Bewegung flüssiger zu machen
    }

    return player.health > 0;
}

int smmain() {
    srand(time(0));
    setConsoleMaximized();
    hideCursor();

    Player player;
    player.x = WIDTH / 2.0;
    player.y = HEIGHT / 2.0;
    player.health = 300;
    player.weaponDamage = 90;
    player.ammo = 10;
    player.medkits = 0;
    player.ammunition = 20;
    player.direction = 0; // Start-Blickrichtung nach oben
    player.bulletDamage = 90;

    cout << "=========== Steuerung ============" << endl;
    cout << "||                             ||" << endl;
    cout << "|| W - Nach oben bewegen       ||" << endl;
    cout << "||                             ||" << endl;
    cout << "||  S - Nach unten bewegen     ||" << endl;
    cout << "||                             ||" << endl;
    cout << "||  A - Nach links bewegen     ||" << endl;
    cout << "||                             ||" << endl;
    cout << "||  D - Nach rechts bewegen     ||" << endl;
    cout << "||                              ||" << endl;
    cout << "||  Leertaste - Sprung          ||" << endl;
    cout << "||                              ||" << endl;
    cout << "||  Q - Gegner angreifen        ||" << endl;
    cout << "||                              ||" << endl;
    cout << "||  Pfeiltasten - Blickrichtung ||" << endl;
    cout << "||                              ||" << endl;
    cout << "==================================" << endl;
    waitForEnter();

    int level = 1;
    bool continuePlaying = true;

    while (level <= 7 && player.health > 0 && continuePlaying) {
        cout << "Level " << level << " gestartet!" << endl;
        continuePlaying = playLevel(player, level);
        if (continuePlaying) {
            level++;
            player.health = 300;
            player.ammo = 10;
            player.medkits = 0;
            player.ammunition = 20;
        }
    }

    if (player.health <= 0) {
        cout << "Spiel vorbei! Du bist gestorben." << endl;
    }
    else {
        cout << "Herzlichen Glückwunsch! Du hast alle Level abgeschlossen!" << endl;
    }

    return 0;
}
