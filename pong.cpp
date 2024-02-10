#include <cstdlib>
#include "Mainframe.h"
#include <windows.h>
#include "pong.h"
#include "User.h"
using namespace std;
const int WIDTH = 40;
const int HEIGHT = 20;
const int WIN_SCORE = 10;
const int BALL_SPEED = 100; // Millisekunden Verzögerung zwischen Ballbewegungen
int ballX, ballY; // Ballposition
int paddle1Y, paddle2Y; 
int ballDirectionX, ballDirectionY; 
bool gameOver; 
int score1, score2; // Punkte
bool roundOver; // true wenn Pong gewonnen hat
int gameMode;
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
    score1 = 0;
    score2 = 0;
}
void Draw()
{
  //  system("cls");
    COORD cursorPos;
    cursorPos.X = 0;
    cursorPos.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPos);
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
        // Spieler steuert Paddle 1 (AI1 - Schicksal)
        if (gameMode == 1)
        {
            if (key == 'w')
                paddle1Y--;
            else if (key == 's')
                paddle1Y++;
        }
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
void SelectGameMode()
{
    cout << "Wähle den Spielmodus:" << endl;
    cout << "1. " << g_name << " vs.KI" << endl;
    cout << "2. KI vs. KI" << endl;
    cin >> gameMode;
    switch (gameMode)
    {
    case 1:
        cout << "Du spielst gegen KI1." << endl;
        break;
    case 2:
        cout << "KIs spielen gegeneinander." << endl;
        break;
    default:
        cout << "Ungültige Eingabe. Standardmäßig wird der Spieler gegen KI1 spielen." << endl;
        break;
    }
}
int pongmain()         // Hauptfunktion des Pong Spiels
{
    Setup();
    SelectGameMode();
    while (!gameOver)
    {
        Draw();
        Input();
        if (score1 < WIN_SCORE && score2 < WIN_SCORE)
        {
            if (roundOver)
            {
                roundOver = false;
                ballDirectionX = -ballDirectionX;
                ballX = WIDTH / 2;
                ballY = HEIGHT / 2;
                ballDirectionY = (rand() % 3) - 1;
            }
            if (gameMode == 1)
            {
                // Spieler steuert Paddle 2
                int targetY = ballY;
                if (targetY < paddle2Y + 2)
                    paddle2Y--;
                else if (targetY > paddle2Y + 2)
                    paddle2Y++;
            }
            else if (gameMode == 2)
            {
                // KI-Logik für Paddle 2 mit dynamischer Bewegung
                int targetY = ballY;
                if (targetY < paddle2Y + 2)
                    paddle2Y--;
                else if (targetY > paddle2Y + 2)
                    paddle2Y++;
            }
        }
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