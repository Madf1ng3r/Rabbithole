#include <Windows.h>
#include "Mainframe.h"
#include <ctime>
using namespace std;
const int width = 40;
const int height = 20;
int playerX, playerY;
vector<int> enemyX, enemyY;
int bulletX, bulletY;
bool isBulletActive;
int sscore;

void spaceSetup() {
    playerX = width / 2;
    playerY = height - 1;
    enemyX.clear();
    enemyY.clear();
    enemyX.push_back(rand() % width);
    enemyY.push_back(0);
    isBulletActive = false;
    sscore = 0;
}

void spaceDraw() {
    system("cls");
    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;
    for (int i = 0; i < height - 2; i++) {
        for (int j = 0; j < width; j++) {
            bool isPlayer = (j == playerX && i == playerY);
            bool isEnemy = false;

            for (size_t k = 0; k < enemyX.size(); k++) {
                if (j == enemyX[k] && i == enemyY[k]) {
                    isEnemy = true;
                    break;
                }
            }

            if (isPlayer)
                cout << "P";
            else if (isEnemy)
                cout << "E";
            else if (j == bulletX && i == bulletY)
                cout << "B";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;
    cout << "Score: " << sscore << endl;
}

void spaceInput() {
    if (_kbhit()) {
        char key = _getch();
        if (key == 27)
            exit(0);
        if (key == 'a' && playerX > 0)
            playerX--;
        if (key == 'd' && playerX < width - 1)
            playerX++;
        if (key == ' ' && !isBulletActive) {
            isBulletActive = true;
            bulletX = playerX;
            bulletY = playerY - 1;
        }
    }
}

void spaceUpdate() {
    for (size_t i = 0; i < enemyX.size(); i++) {
        enemyY[i]++;
        if (enemyY[i] >= height - 1) {
            enemyX[i] = rand() % width;
            enemyY[i] = 0;
        }
    }

    if (isBulletActive) {
        bulletY--;
        if (bulletY < 0) {
            isBulletActive = false;
        }
        else {
            for (size_t i = 0; i < enemyX.size(); i++) {
                if (bulletX == enemyX[i] && bulletY == enemyY[i]) {
                    isBulletActive = false;
                    enemyX[i] = rand() % width;
                    enemyY[i] = 0;
                    sscore++;
                }
            }
        }
    }
    // Spawn new enemies
    if (rand() % 10 == 0) {
        enemyX.push_back(rand() % width);
        enemyY.push_back(0);
    }
}

int spacemain() {
    srand(static_cast<unsigned>(time(0)));
    spaceSetup();
    while (true) {
        spaceDraw();
        spaceInput();
        spaceUpdate();
        Sleep(100);  // Adjust the speed as needed
    }
    return 0;
}
