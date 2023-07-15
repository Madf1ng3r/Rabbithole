#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include "pong.h"

using namespace std;

const int WIDTH = 40;
const int HEIGHT = 20;
const int WIN_SCORE = 10;
const int BALL_SPEED = 100; // Millisekunden Verzögerung zwischen Ballbewegungen

int ballX, ballY;
int paddle1Y, paddle2Y;
int ballDirectionX, ballDirectionY;
bool gameOver;
int score1, score2;
bool roundOver;

void Setup()
{
    gameOver = false;
    roundOver = false;
    ballX = WIDTH / 2;
    ballY = HEIGHT / 2;
    paddle1Y = HEIGHT / 2 - 2;
    paddle2Y = HEIGHT / 2 - 2;
    ballDirectionX = -1;
    ballDirectionY = 0;
}

void Draw()
{
    system("cls");

    // Gameboy-Rahmen

    cout << "########################################" << endl;

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (j == 0 || j == WIDTH - 1)
                cout << "#";
            else if (i == ballY && j == ballX)
                cout << "O";
            else if (i >= paddle1Y && i < paddle1Y + 4 && j == 1)
                cout << "#";
            else if (i >= paddle2Y && i < paddle2Y + 4 && j == WIDTH - 2)
                cout << "#";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << "########################################" << endl;
    cout << endl;

    // Punkteanzeige
    cout << "  ####################" << endl;
    cout << "  #    Schicksal: " << score1 << "  #" << endl;
    cout << "  #  Freier_Wille: " << score2 << " #" << endl;
    cout << "  ####################" << endl;

    cout << endl;
}

void Input()
{
    if (_kbhit())
    {
        char key = _getch();

        if (key == 'q')
            gameOver = true;
        else if (key == 27) // Escape-Taste
            gameOver = true;
    }
}

void AI1()
{
    // KI-Logik für Paddle 1 mit dynamischer Bewegung
    int targetY = ballY - 1; // Ballverfolgung
    if (targetY < paddle1Y + 2)
        paddle1Y--;
    else if (targetY > paddle1Y + 2)
        paddle1Y++;
}

void AI2()
{
    // KI-Logik für Paddle 2 mit dynamischer Bewegung
    int targetY = ballY; // Ballverfolgung
    if (targetY < paddle2Y + 2)
        paddle2Y--;
    else if (targetY > paddle2Y + 2)
        paddle2Y++;
}

void Logic()
{
    AI1();
    AI2();

    ballX += ballDirectionX;
    ballY += ballDirectionY;

    if (ballY <= 0 || ballY >= HEIGHT - 1)
        ballDirectionY = -ballDirectionY;

    if (ballX == 1)
    {
        if (ballY >= paddle1Y && ballY < paddle1Y + 4)
        {
            ballDirectionX = 1;
            ballDirectionY = (rand() % 3) - 1;
        }
        else
        {
            roundOver = true;
            score2++;
        }
    }

    if (ballX == WIDTH - 2)
    {
        if (ballY >= paddle2Y && ballY < paddle2Y + 4)
        {
            ballDirectionX = -1;
            ballDirectionY = (rand() % 3) - 1;
        }
        else
        {
            roundOver = true;
            score1++;
        }
    }

    if (score1 == WIN_SCORE || score2 == WIN_SCORE)
        gameOver = true;

    if (roundOver)
        Setup();
}

int pongmain()         // Hauptfunktion des Pong Spiels
{
    Setup();

    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(BALL_SPEED);
    }

    // Schriftfarbe auf Weiß zurücksetzen
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7); // Weiß

    if (score1 == WIN_SCORE && score2 == WIN_SCORE)
        cout << "Unentschieden!" << endl;
    else if (score1 == WIN_SCORE)
        cout << "Schicksal hat gewonnen!" << endl;
    else if (score2 == WIN_SCORE)
        cout << "Freier_Wille hat gewonnen!" << endl;

    return 0;
}