#include <windows.h>
#include <ctime>
#include "Mainframe.h"
#include <cstdlib>
#include <conio.h>
using namespace std;
bool gameover;
const int width = 30;
const int height = 30;
int x, y, fruitX, fruitY, score;
int* tailX, * tailY;
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
HANDLE consoleHandle;
CHAR_INFO consoleBuffer[width * height];

void snakeSetup()
{
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    nTail = 0;
    gameover = false;
    tailX = new int[width * height];
    tailY = new int[width * height];
}

void snakeDraw()
{
    for (int i = 0; i < width + 2; i++)
    {
        consoleBuffer[i].Char.AsciiChar = '#';
        consoleBuffer[i].Attributes = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
    }
    for (int i = 1; i <= height; i++)
    {
        consoleBuffer[i * (width + 2)].Char.AsciiChar = '#';
        consoleBuffer[i * (width + 2)].Attributes = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
        consoleBuffer[i * (width + 2) + width + 1].Char.AsciiChar = '#';
        consoleBuffer[i * (width + 2) + width + 1].Attributes = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == y && j == x)
            {
                consoleBuffer[(i + 1) * (width + 2) + (j + 1)].Char.AsciiChar = 'O';
                consoleBuffer[(i + 1) * (width + 2) + (j + 1)].Attributes = FOREGROUND_GREEN;
            }
            else if (i == fruitY && j == fruitX)
            {
                consoleBuffer[(i + 1) * (width + 2) + (j + 1)].Char.AsciiChar = 'F';
                consoleBuffer[(i + 1) * (width + 2) + (j + 1)].Attributes = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
            }
            else
            {
                bool printTail = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        consoleBuffer[(i + 1) * (width + 2) + (j + 1)].Char.AsciiChar = 'o';
                        consoleBuffer[(i + 1) * (width + 2) + (j + 1)].Attributes = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
                        printTail = true;
                        break;
                    }
                }
                if (!printTail)
                {
                    consoleBuffer[(i + 1) * (width + 2) + (j + 1)].Char.AsciiChar = ' ';
                    consoleBuffer[(i + 1) * (width + 2) + (j + 1)].Attributes = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
                }
            }
        }
    }
    consoleBuffer[(y + 1) * (width + 2) + (x + 1)].Attributes |= FOREGROUND_INTENSITY;
    COORD bufferSize = { width + 2, height + 2 };
    COORD bufferCoord = { 0, 0 };
    SMALL_RECT writeRegion = { 0, 0, width + 1, height + 1 };
    WriteConsoleOutput(consoleHandle, consoleBuffer, bufferSize, bufferCoord, &writeRegion);
}

void snakeInput()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameover = true;
            break;
        case 27:
            gameover = true;
            break;
        }
    }
}

void snakeLogic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
    if (x >= width)
        x = 0;
    else if (x < 0)
        x = width - 1;
    if (y >= height)
        y = 0;
    else if (y < 0)
        y = height - 1;
    for (int i = 0; i < nTail; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
            gameover = true;
    }
    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}
void DisplayScore()
{
    system("cls");
    cout << "Score: " << score << endl;
}
 
void SaveHighScore(int score)
{
    ofstream file("highscores.txt", ios::app); // Open the file in append mode
    if (file.is_open())
    {
        file << score << endl;
        file.close();
    }
    else
    {
        cout << "Unable to save high score to file." << endl;
    }
}

void ShowHighScores()
{
    ifstream file("highscores.txt");
    if (file.is_open())
    {
        int score;
        cout << "High Scores:" << endl;
        while (file.read(reinterpret_cast<char*>(&score), sizeof(int)))
        {
            cout << score << endl;
        }
        file.close();
    }
    else
    {
        cout << "No high scores found." << endl;
    }
}

bool PlayAgainPrompt()
{
 
	cout << "dein Score: " << score << endl;
    ShowHighScores();
    cout << "Drücke J wenn du noch eine Runde spielen nöchtest. ";
    char choice;
    cin >> choice;

    return (choice == 'j' || choice == 'J');
}
void ShowCursor(bool showFlag)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}
int snakemain()
{
    consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    ShowCursor(false);
    bool playAgain = true;
    do {
        snakeSetup();
        while (!gameover)
        {
            snakeDraw();
            snakeInput();
            snakeLogic();
            Sleep(100);
        }
        DisplayScore();
        SaveHighScore(score);
        delete[] tailX;
        delete[] tailY;
        if (PlayAgainPrompt()) {
            playAgain = true;
        }
        else {
            playAgain = false;
        }
    } while (playAgain);
    ShowCursor(true);
    return 0;
}