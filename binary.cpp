#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h> // Hinzugefügte Header-Datei für Tasteneingabe
#include "binary.h"
#include "MSmith.h"

void sleep(unsigned int milliseconds) {
    Sleep(milliseconds);
}

void setConsoleSize(int width, int height) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT rect = { 0, 0, static_cast<SHORT>(width - 1), static_cast<SHORT>(height - 1) };
    COORD size = { static_cast<SHORT>(width), static_cast<SHORT>(height) };
    SetConsoleWindowInfo(consoleHandle, TRUE, &rect);
    SetConsoleScreenBufferSize(consoleHandle, size);
}

void setConsoleColor(WORD color) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(consoleHandle, color);
}

void functionToExecute() {
    smmain();
    // Fügen Sie hier den Code für die auszuführende Funktion ein
    std::cout << "Enter-Taste wurde gedrückt! Eine andere Funktion wird ausgeführt." << std::endl;
}

int bimain() {
    const int consoleWidth = 80;
     const int consoleHeight = 45;
    const int frameDelay = 100;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

  setConsoleSize(consoleWidth, consoleHeight);

    bool running = true; // Neue Variable, um den Zustand des Programms zu verfolgen

    while (running) {
      CHAR_INFO consoleBuffer[consoleWidth * consoleHeight];
        COORD bufferSize = { static_cast<SHORT>(consoleWidth), static_cast<SHORT>(consoleHeight) };
        COORD bufferCoord = { 0, 0 };
        SMALL_RECT writeRegion = { 0, 0, static_cast<SHORT>(consoleWidth - 1), static_cast<SHORT>(consoleHeight - 1) };

        for (int y = 0; y < consoleHeight; ++y) {
            for (int x = 0; x < consoleWidth; ++x) {
                CHAR_INFO& consoleCell = consoleBuffer[y * consoleWidth + x];
                consoleCell.Char.UnicodeChar = std::rand() % 2 == 0 ? '0' : '1';
                consoleCell.Attributes = FOREGROUND_GREEN;
            }
        }

        HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        WriteConsoleOutput(consoleHandle, consoleBuffer, bufferSize, bufferCoord, &writeRegion);

        sleep(frameDelay);

        if (_kbhit()) { // Überprüft, ob eine Taste gedrückt wurde
            char key = _getch(); // Liest die gedrückte Taste ein
            if (key == 27) {
                running = false; // Beendet die Schleife, wenn die Escape-Taste (ESC) gedrückt wurde
            }
            else if (key == 13) {
                functionToExecute(); // Führt die andere Funktion aus, wenn die Enter-Taste gedrückt wurde
            }
        }

    }



    return 0;
}