#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <conio.h>
#include <cmath>

using namespace std;

const int WIDTH = 40;
const int HEIGHT = 25;

struct Player {
    int x;
    int y;
    int health;
    int weaponDamage;
    int ammo;
    int medkits;
    int ammunition;
};

struct Enemy {
    int x;
    int y;
    int health;
    int damage;
    int weaponDamage;
};

struct Item {
    int x;
    int y;
    char symbol;
    string name;
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

void drawBoard(const Player& player, const vector<Enemy>& enemies, const vector<Item>& items) {
    setCursorPosition(0, 0);

    cout << char(201);
    for (int i = 0; i < WIDTH; i++) {
        cout << char(205);
    }
    cout << char(187) << endl;

    for (int i = 0; i < HEIGHT; i++) {
        setCursorPosition(0, i + 1);
        cout << char(186);

        for (int j = 0; j < WIDTH; j++) {
            if (i == player.y && j == player.x) {
                cout << "\033[32m";
                cout << "P ";
                cout << "\033[0m";
            }
            else if (i == enemies[0].y && j == enemies[0].x) {
                cout << "E ";
            }
            else {
                bool itemFound = false;
                for (const Item& item : items) {
                    if (item.x == j && item.y == i) {
                        cout << item.symbol << " ";
                        itemFound = true;
                        break;
                    }
                }
                if (!itemFound) {
                    cout << ". ";
                }
            }
        }
    }

    setCursorPosition(0, HEIGHT + 1);

    cout << char(200);
    for (int i = 0; i < WIDTH; i++) {
        cout << char(205);
    }
    cout << char(188) << endl;

    // Grafische Darstellung der Lebensanzeige des Spielers
    setCursorPosition(0, HEIGHT + 2);
    cout << "Leben: ";
    for (int i = 0; i < player.health / 10; i++) {
        cout << char(219);
    }
    cout << endl;

    cout << "Magazin: " << player.ammo << "   ";
    cout << "Medkits: " << player.medkits << "   ";
    cout << "Munition: " << player.ammunition << endl;
}

void movePlayer(Player& player, char direction) {
    switch (direction) {
    case 'w':
        if (player.y > 0) {
            player.y--;
        }
        break;
    case 's':
        if (player.y < HEIGHT - 1) {
            player.y++;
        }
        break;
    case 'a':
        if (player.x > 0) {
            player.x--;
        }
        break;
    case 'd':
        if (player.x < WIDTH - 1) {
            player.x++;
        }
        break;
    case ' ':
        if (player.x < WIDTH - 2) {
            player.x += 2;
        }
        break;
    }
}

bool checkCollision(const Player& player, const Enemy& enemy) {
    return player.x == enemy.x && player.y == enemy.y;
}

bool checkCollision(const Player& player, const Item& item) {
    return player.x == item.x && player.y == item.y;
}

void moveEnemyTowardsPlayer(Enemy& enemy, const Player& player) {
    int dx = player.x - enemy.x;
    int dy = player.y - enemy.y;

    if (dx != 0) {
        int directionX = dx / abs(dx);
        enemy.x += directionX;
    }
    if (dy != 0) {
        int directionY = dy / abs(dy);
        enemy.y += directionY;
    }
}

void shootPlayerWeapon(Player& player, Enemy& enemy) {
    if (player.ammo > 0) {
        player.ammo--;
        enemy.health -= player.weaponDamage;
        if (enemy.health <= 0) {
            cout << "Gegner besiegt!" << endl;
        }
    }
    else {
        cout << "Waffe ist leer! Lade nach." << endl;
    }
}

void reloadPlayerWeapon(Player& player) {
    player.ammo = 10;
    cout << "Waffe nachgeladen. Verbleibende Schüsse: " << player.ammo << endl;
}

void shootEnemyWeapon(Player& player, Enemy& enemy) {
    if (enemy.weaponDamage > 0) {
        Sleep(1500);

        if (player.health > 0) {
            int dx = player.x - enemy.x;
            int dy = player.y - enemy.y;

            int directionX = 0;
            int directionY = 0;

            if (dx != 0) {
                directionX = dx / abs(dx);
            }
            if (dy != 0) {
                directionY = dy / abs(dy);
            }

            int projectileX = enemy.x + directionX;
            int projectileY = enemy.y + directionY;

            while (projectileX >= 0 && projectileX < WIDTH && projectileY >= 0 && projectileY < HEIGHT) {
                setCursorPosition(projectileX * 2, projectileY + 1);
                cout << "\033[31m";
                cout << "* ";
                cout << "\033[0m";

                Sleep(100);

                setCursorPosition(projectileX * 2, projectileY + 1);
                cout << "  ";

                projectileX += directionX;
                projectileY += directionY;
            }

            player.health -= enemy.weaponDamage;
            cout << "Du wurdest vom Gegner getroffen! Deine Gesundheit: " << player.health << endl;
        }
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
            }

            items.push_back(item);
        }
    }
}

bool playLevel(Player& player, int level) {
    int numEnemies = level;
    vector<Enemy> enemies(numEnemies);
    vector<Item> items;

    spawnItems(items, level);

    for (int i = 0; i < numEnemies; i++) {
        enemies[i].x = rand() % WIDTH;
        enemies[i].y = rand() % HEIGHT;
        enemies[i].health = 50;
        enemies[i].damage = 20;
        enemies[i].weaponDamage = 10;
    }

    drawBoard(player, enemies, items);

    while (player.health > 0 && enemies.size() > 0 && enemies[0].health > 0) {
        if (_kbhit()) {
            char input = _getch();
            movePlayer(player, input);
            if (checkCollision(player, enemies[0])) {
                player.health -= enemies[0].damage;
                cout << "Kollision mit dem Gegner! Deine Gesundheit: " << player.health << endl;
            }
            else {
                for (int i = 0; i < items.size(); i++) {
                    if (checkCollision(player, items[i])) {
                        collectItem(player, items[i]);
                        items.erase(items.begin() + i);
                        break;
                    }
                }
            }
            drawBoard(player, enemies, items);
        }

        if (player.health > 0) {
            moveEnemyTowardsPlayer(enemies[0], player);
            shootEnemyWeapon(player, enemies[0]);
        }

        if (_kbhit()) {
            char input = _getch();
            if (input == 'q') {
                shootPlayerWeapon(player, enemies[0]);
                drawBoard(player, enemies, items);
            }
            else if (input == 'r') {
                reloadPlayerWeapon(player);
                drawBoard(player, enemies, items);
            }
        }
    }

    return player.health > 0;
}

int smmain() {
    srand(time(0));
    setConsoleMaximized();

    Player player;
    player.x = WIDTH / 2;
    player.y = HEIGHT / 2;
    player.health = 500;
    player.weaponDamage = 10;
    player.ammo = 10;
    player.medkits = 0;
    player.ammunition = 20;

    cout << "=== Steuerung ===" << endl;
    cout << "W - Nach oben bewegen" << endl;
    cout << "S - Nach unten bewegen" << endl;
    cout << "A - Nach links bewegen" << endl;
    cout << "D - Nach rechts bewegen" << endl;
    cout << "Leertaste - Schnell nach rechts bewegen" << endl;
    cout << "Q - Gegner angreifen" << endl;
    cout << "R - Waffe nachladen" << endl;
    waitForEnter();

    int level = 1;

    while (level <= 7 && player.health > 0) {
        cout << "Level " << level << " gestartet!" << endl;
        bool levelCompleted = playLevel(player, level);
        if (levelCompleted) {
            cout << "Level " << level << " erfolgreich abgeschlossen!" << endl;
            cout << "Möchtest du mit dem nächsten Level fortfahren? (j/n)" << endl;
            char choice;
            cin >> choice;
            if (choice == 'j' || choice == 'J') {
                level++;
                player.health = 500;
                player.ammo = 10;
                player.medkits = 0;
                player.ammunition = 20;
            }
            else {
                break;
            }
        }
        else {
            cout << "Spiel vorbei! Du bist gestorben." << endl;
            break;
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
