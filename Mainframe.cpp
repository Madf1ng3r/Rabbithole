#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>     // Eingabe/Ausgabe-Stream-Funktionalit�t
#include <string>       // String-Funktionalit�t
#include <fstream>      // Datei-Ein-/Ausgabe-Funktionalit�t
#include <thread>       // Multithreading-Funktionalit�t
#include <chrono>       // Zeitmessungsfunktionalit�t
#include <cstdlib>      // Funktionen f�r allgemeine Aufgaben (z.B. system())
#ifdef _WIN32
#include <windows.h>    // Windows-spezifische Funktionen (z.B. GetSystemMetrics())
#endif
#include <lmcons.h>
#include "Taschenrechner.h"     // Header-Datei f�r den Taschenrechner
#include "sinndeslebens.h"      // Header-Datei f�r das Programm "Sinn des Lebens"
#include "binary.h"             // Header-Datei f�r die Bin�rkonvertierung
#include "Snake.h"              // Header-Datei f�r das Snake-Spiel
#include "Links.h"              // Header-Datei f�r das Link-Programm
#include "readme.h"             // Header-Datei f�r das Readme-Programm
#include "Geschichte.h"         // Header-Datei f�r das Geschichte-Programm
#include "pong.h"               // Header-Datei f�r das Pong-Spiel
#include "Witzbold.h"           // Header-Datei f�r den Witzbold
#include "Gaestebuch.h"         // Header-Datei f�r das G�stebuch
#include <vector>               // Vektor-Klasse f�r dynamische Arrays
#include "Art.h"                // Header-Datei f�r die Kunst-Funktionalit�t
#include "Helpdesk.h"

#ifdef _WIN32
void clearScreen()
{
    std::system("cls"); // Bildschirm l�schen (nur f�r Windows)
}
#elif __APPLE__ || __linux__
void clearScreen()
{
    std::system("clear"); // Bildschirm l�schen (f�r macOS und Linux)
}
#endif

#ifdef _WIN32
void resetConsoleWindowSize()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    // Die urspr�ngliche Fenstergr��e abrufen
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(consoleHandle, &csbi);
    COORD originalWindowSize = csbi.dwSize;

    // Die aktuelle Fenstergr��e abrufen
    CONSOLE_SCREEN_BUFFER_INFO currentCsbi;
    GetConsoleScreenBufferInfo(consoleHandle, &currentCsbi);
    COORD currentWindowSize = currentCsbi.dwSize;

    // Wenn die aktuelle Fenstergr��e von der urspr�nglichen Fenstergr��e abweicht, das Fenstergr��e zur�cksetzen
    if (currentWindowSize.X != originalWindowSize.X || currentWindowSize.Y != originalWindowSize.Y)
    {
        SMALL_RECT windowRect;
        windowRect.Left = 0;
        windowRect.Top = 0;
        windowRect.Right = originalWindowSize.X - 1;
        windowRect.Bottom = originalWindowSize.Y - 1;

        SetConsoleWindowInfo(consoleHandle, TRUE, &windowRect);
        SetConsoleScreenBufferSize(consoleHandle, originalWindowSize);
    }
}
#elif __APPLE__ || __linux__
void resetConsoleWindowSize()
{
    // Unter macOS und Linux ist keine Anpassung der Fenstergr��e erforderlich
}
#endif


//std::string getCurrentUsername() {
//    char username[UNLEN + 1];
//    DWORD usernameLen = UNLEN + 1;
//
//    if (GetUserNameA(username, &usernameLen)) {
//        return std::string(username);
//    }
//    else {
//        return "Fehler beim Abrufen des Benutzernamens.";
//    }
//}

void showMenu()
{
//std::cout << "Hallo" << getCurrentUsername();
    // ASCII-Kunst anzeigen
    std::cout << "\033[32m"; // Farbcode f�r gr�nen Text
    std::cout << R"(

     _________
    / ======= \
   / __________\
  | ___________ |
  | | -       | |
  | |         | |
  | |_________| |________________________
  \=____________/    Enter The Matrix    )
  / """"""""""" \                       /
 / ::::::::::::: \                  =D-'
(_________________)

 )";
    std::cout << "\033[0m"; // Farbcode f�r Standardtext zur�cksetzen

    // Men�optionen anzeigen
    std::cout << "-----------------------" << std::endl;
    std::cout << "Hauptmenue" << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "1.  Art" << std::endl;
    std::cout << "2.  OpenAI alpha " << std::endl;
    std::cout << "3.  Taschenrechner" << std::endl;
    std::cout << "4.  Sinn des Lebens" << std::endl;
    std::cout << "5.  Readme" << std::endl;
    std::cout << "6.  G�stebuch" << std::endl;
    std::cout << "7.  Links" << std::endl;
    std::cout << "8.  Pong" << std::endl;
    std::cout << "9.  Snake" << std::endl;
    std::cout << "10. Matrix " << std::endl;
    std::cout << "11. der Erz�hler" << std::endl;
    std::cout << "12. C++ Code" << std::endl;
    std::cout << "0. Beenden" << std::endl;
    std::cout << "-----------------------" << std::endl;
}

void centerConsoleWindow()
{
#ifdef _WIN32
    HWND consoleWindow = GetConsoleWindow(); // Fensterhandle der Konsole abrufen
    RECT screenRect;
    GetWindowRect(consoleWindow, &screenRect); // Bildschirmabmessungen abrufen

    int screenWidth = GetSystemMetrics(SM_CXSCREEN); // Breite des Bildschirms abrufen
    int screenHeight = GetSystemMetrics(SM_CYSCREEN); // H�he des Bildschirms abrufen

    int consoleWidth = screenRect.right - screenRect.left; // Breite des Konsolenfensters berechnen
    int consoleHeight = screenRect.bottom - screenRect.top; // H�he des Konsolenfensters berechnen

    int consolePosX = (screenWidth - consoleWidth) / 2; // X-Position des Konsolenfensters berechnen
    int consolePosY = (screenHeight - consoleHeight) / 2; // Y-Position des Konsolenfensters berechnen

    SetWindowPos(consoleWindow, NULL, consolePosX, consolePosY, consoleWidth, consoleHeight, SWP_SHOWWINDOW); // Konsolenfenster positionieren
#elif __APPLE__
    // Code zum Zentrieren des Konsolenfensters unter macOS hier
#elif __linux__
    // Code zum Zentrieren des Konsolenfensters unter Linux hier
#endif
}

void executeFile(const std::string& filename)
{
    std::string command;

#ifdef _WIN32
    command = "start " + filename; // Kommando zum �ffnen der Datei (Windows)
#elif __APPLE__
    command = "open " + filename; // Kommando zum �ffnen der Datei (macOS)
#elif __linux__
    command = "xdg-open " + filename; // Kommando zum �ffnen der Datei (Linux)
#else
    std::cout << "Die Ausf�hrung von Dateien wird auf diesem Betriebssystem nicht unterst�tzt." << std::endl; // Fehlermeldung f�r nicht unterst�tzte Betriebssysteme
    return;
#endif

    int exitCode = std::system(command.c_str()); // Kommando ausf�hren, um Datei zu �ffnen
    if (exitCode != 0)
    {
        std::cout << "Fehler beim �ffnen der Datei." << std::endl; // Fehlermeldung bei Fehlercode ungleich 0
    }
}

void animateTransition()
{
    clearScreen(); // Bildschirm l�schen

    std::cout << "Lade..." << std::endl;

    std::string animationFrames = "|/-\\"; // Animationssymbole
    int frameIndex = 0; // Aktueller Index des Animationssymbols

    for (int i = 0; i < 10; ++i)
    {
        std::cout << animationFrames[frameIndex] << std::flush; // Aktuelles Animationssymbol anzeigen

        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Kurze Verz�gerung f�r die Animation

        std::cout << "\b \b" << std::flush; // Animationssymbol l�schen (zur�cksetzen)

        frameIndex = (frameIndex + 1) % animationFrames.length(); // Index f�r das n�chste Animationssymbol aktualisieren
    }
}

void printDigitalClock()
{
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);
    std::string timeString = std::to_string(localTime->tm_hour) + ":" +
        std::to_string(localTime->tm_min);
#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
#else
    int consoleWidth = 80; // Standardbreite f�r nicht-Windows-Systeme
#endif
    int timePadding = consoleWidth - timeString.length() - 2; // 2 f�r Leerzeichen
    std::cout << std::string(timePadding, ' ') << timeString << std::endl;
}

int main()   // Hauptfunktion von Rabbithole
{
    centerConsoleWindow();

    bool running = true;
    int choice;
    bool taschenrechnerRunning = false;

    while (running)
    {
        clearScreen();
        resetConsoleWindowSize();
        showMenu();

        std::thread clockThread([]() {
            while (true) {
                clearScreen();
                showMenu();
                printDigitalClock();
                std::this_thread::sleep_for(std::chrono::minutes(1)); // Alle 1 Minute aktualisieren
            }
            });

        std::cout << "W�hlen Sie eine Option: ";
        if (!(std::cin >> choice))
        {
            std::cin.clear();
            std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
            std::cout << "Ung�ltige Eingabe. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            continue;
        }

        clockThread.detach();

        switch (choice)
        {
        case 1:
            animateTransition();
            clearScreen();
            generateAsciiArt(); // Eine Funktion aufrufen, um ASCII-Kunst zu generieren
            break;
        case 2:
            animateTransition();
            clearScreen();
            executeFile("Witzbold.cpp"); // Eine Datei ausf�hren
            break;
        case 3:
            animateTransition();
            clearScreen();
            taschenrechnerRunning = true;
            break;
        case 4:
            animateTransition();
            clearScreen();
            ftmain(); // Eine Funktion aus sinndeslebens.cpp aufrufen
            returnToMainMenu(); // Eine Funktion aufrufen, um zum Hauptmen� zur�ckzukehren
            break;
        case 5:
            animateTransition();
            clearScreen();
            rmmain();  // �ffnet readme.cpp
            break;
        case 6:
            animateTransition();
            clearScreen();
            guimain(); // Startet das G�stebuch
            break;
        case 7:
            animateTransition();
            clearScreen();
            linkmain(); // Eine Funktion aus Links.cpp aufrufen
            break;
        case 8:
            animateTransition();
            clearScreen();
            pongmain(); // Eine Funktion aus pong.cpp aufrufen
            break;
        case 9:
            animateTransition();
            clearScreen();
            snakemain(); // Eine Funktion aus Snake.cpp aufrufen
            break;
        case 10:
            animateTransition();
            clearScreen();
            bimain(); // Eine Funktion aus binary.cpp aufrufen
            break;
        case 11:
            animateTransition();
            clearScreen();
            geschmain(); // Eine Funktion aus Geschichte.cpp aufrufen
            break;
        case 12:
            animateTransition();
            clearScreen();
            helpmain();
            break;
        case 0:
            running = false;
            break;
        default:
            std::cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // 2 Sekunden warten
            break;
        }

        if (taschenrechnerRunning)
        {
            calcmain(); // Eine Funktion aus Taschenrechner.cpp aufrufen
            taschenrechnerRunning = false;
        }

        if (running)
        {
            std::cout << "Dr�cken Sie Enter, um fortzufahren.";
            std::cin.ignore();
            std::cin.get();
        }
    }

    return 0;
}
