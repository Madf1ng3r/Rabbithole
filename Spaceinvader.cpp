#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
const int width = 40;
const int height = 20;
int playerX, playerY;
int enemyX, enemyY;
int bulletX, bulletY;
bool isBulletActive;
int enemySpeed; // Geschwindigkeit des Feindes
int shootDelay; // Schussverzögerung des Spielers

void spacesetup()
{
    playerX = width / 2;
    playerY = height - 1;
    enemyX = width / 2;
    enemyY = 0;
    isBulletActive = false;
    enemySpeed = 1; // Leicht: 1, Mittel: 2, Schwer: 3
    shootDelay = 5; // Leicht: 5, Mittel: 3, Schwer: 1
}

void spacedraw()
{
    system("cls"); // Clear console screen
    // Draw player
    cout << "\033[1;32m"; // Set color to green (Escape sequence for colored output)
    for (int i = 0; i < playerX; i++)
        cout << " ";
    cout << "P";
    cout << "\033[0m"; // Reset color to default
    // Draw enemy
    cout << "\033[1;31m"; // Set color to red
    for (int i = 0; i < enemyX; i++)
        cout << " ";
    cout << "E";
    cout << "\033[0m"; // Reset color to default

    // Draw bullet
    if (isBulletActive)
    {
        cout << "\033[1;33m"; // Set color to yellow
        for (int i = 0; i < bulletX; i++)
            cout << " ";
        cout << "B";
        cout << "\033[0m"; // Reset color to default
    }
    // Draw bottom border
    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;
}

void spaceinput()
{
    // Check if a key is pressed
    if (_kbhit())
    {
        char key = _getch();
        if (key == 27) // 27 is the ASCII code for the Escape key
            exit(0); // Exit the program when Escape is pressed
        if (key == 'a' && playerX > 0)
            playerX--;
        if (key == 'd' && playerX < width - 1)
            playerX++;
        if (key == ' ' && !isBulletActive)
        {
            // Shoot bullet
            bulletX = playerX;
            bulletY = playerY - 1;
            isBulletActive = true;
        }
    }
}

void spaceupdate()
{
    // Move the enemy down
    enemyY += enemySpeed;
    // Move the bullet up
    if (isBulletActive)
    {
        bulletY--;
        if (bulletY <= 0)
            isBulletActive = false;
    }
    // Check for collision
    if (enemyX == bulletX && enemyY == bulletY)
    {
        isBulletActive = false;
        enemyX = rand() % width;
        enemyY = 0;
    }
}

int spacemain()
{
    spacesetup();
    while (true)
    {
        spacedraw();
        spaceinput();
        spaceupdate();
        Sleep(50); // Adjust the sleep time to control game speed
        // Adjust enemy speed based on difficulty
        if (enemySpeed == 1) // Leicht
            Sleep(50);
        else if (enemySpeed == 2) // Mittel
            Sleep(30);
        else if (enemySpeed == 3) // Schwer
            Sleep(10);
    }
    return 0;
}
