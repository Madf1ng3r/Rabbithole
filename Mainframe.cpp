#include <iostream>     // Eingabe/Ausgabe-Stream-Funktionalität
#include <string>       // String-Funktionalität
#include <fstream>      // Datei-Ein-/Ausgabe-Funktionalität
#include <thread>       // Multithreading-Funktionalität
#include <chrono>       // Zeitmessungsfunktionalität
#include <cstdlib>      // Funktionen für allgemeine Aufgaben (z.B. system())
#ifdef _WIN32
#include <windows.h>    // Windows-spezifische Funktionen (z.B. GetSystemMetrics())
#endif
#include "Taschenrechner.h"     // Header-Datei für den Taschenrechner
#include "sinndeslebens.h"      // Header-Datei für das Programm "Sinn des Lebens"
#include "binary.h"             // Header-Datei für die Binärkonvertierung
#include "Snake.h"              // Header-Datei für das Snake-Spiel
#include "Links.h"              // Header-Datei für das Link-Programm
#include "readme.h"             // Header-Datei für das Readme-Programm
#include "Geschichte.h"         // Header-Datei für das Geschichte-Programm
#include "pong.h"               // Header-Datei für das Pong-Spiel
#include "Witzbold.h"           // Header-Datei für den Witzbold
#include "Gaestebuch.h"         // Header-Datei für das Gästebuch
#include <vector>               // Vektor-Klasse für dynamische Arrays
#include "Art.h"                // Header-Datei für die Kunst-Funktionalität

#ifdef _WIN32
void clearScreen()
{
    std::system("cls"); // Bildschirm löschen (nur für Windows)
}
#elif __APPLE__ || __linux__
void clearScreen()
{
    std::system("clear"); // Bildschirm löschen (für macOS und Linux)
}
#endif

void showMenu()
{
    // ASCII-Kunst anzeigen
    std::cout << "\033[32m"; // Farbcode für grünen Text
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

 )" << std::endl;
    std::cout << "\033[0m"; // Farbcode für Standardtext zurücksetzen

    // Menüoptionen anzeigen
    std::cout << "-----------------------" << std::endl;
    std::cout << "Hauptmenue" << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "1. Art" << std::endl;
    std::cout << "2. OpenAI alpha " << std::endl;
    std::cout << "3. Taschenrechner" << std::endl;
    std::cout << "4. Sinn des Lebens" << std::endl;
    std::cout << "5. Readme" << std::endl;
    std::cout << "6. Gästebuch" << std::endl;
    std::cout << "7. Links" << std::endl;
    std::cout << "8. Pong" << std::endl;
    std::cout << "9. Snake" << std::endl;
    std::cout << "10. Matrix " << std::endl;
    std::cout << "11. der Erzähler" << std::endl;
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
    int screenHeight = GetSystemMetrics(SM_CYSCREEN); // Höhe des Bildschirms abrufen

    int consoleWidth = screenRect.right - screenRect.left; // Breite des Konsolenfensters berechnen
    int consoleHeight = screenRect.bottom - screenRect.top; // Höhe des Konsolenfensters berechnen

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
    command = "start " + filename; // Kommando zum Öffnen der Datei (Windows)
#elif __APPLE__
    command = "open " + filename; // Kommando zum Öffnen der Datei (macOS)
#elif __linux__
    command = "xdg-open " + filename; // Kommando zum Öffnen der Datei (Linux)
#else
    std::cout << "Die Ausführung von Dateien wird auf diesem Betriebssystem nicht unterstützt." << std::endl; // Fehlermeldung für nicht unterstützte Betriebssysteme
    return;
#endif

    int exitCode = std::system(command.c_str()); // Kommando ausführen, um Datei zu öffnen
    if (exitCode != 0)
    {
        std::cout << "Fehler beim Öffnen der Datei." << std::endl; // Fehlermeldung bei Fehlercode ungleich 0
    }
}

void animateTransition()
{
    clearScreen(); // Bildschirm löschen

    std::cout << "Lade..." << std::endl;

    std::string animationFrames = "|/-\\"; // Animationssymbole
    int frameIndex = 0; // Aktueller Index des Animationssymbols

    for (int i = 0; i < 10; ++i)
    {
        std::cout << animationFrames[frameIndex] << std::flush; // Aktuelles Animationssymbol anzeigen

        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Kurze Verzögerung für die Animation

        std::cout << "\b \b" << std::flush; // Animationssymbol löschen (zurücksetzen)

        frameIndex = (frameIndex + 1) % animationFrames.length(); // Index für das nächste Animationssymbol aktualisieren
    }

    std::cout << std::endl;
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
        showMenu();
        std::cout << "Wählen Sie eine Option: ";
        if (!(std::cin >> choice))
        {
            std::cin.clear(); // Fehlerflags löschen
            std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n'); // Ungültige Eingabe verwerfen
            std::cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // 2 Sekunden warten
            continue;
        }

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
            executeFile("Witzbold.cpp"); // Eine Datei ausführen
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
            returnToMainMenu(); // Eine Funktion aufrufen, um zum Hauptmenü zurückzukehren
            break;
        case 5:
            animateTransition();
            clearScreen();
            rmmain();  // Öffnet readme.cpp
            break;
        case 6:
            animateTransition();
            clearScreen();
            guimain(); // Startet das Gästebuch
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
        case 0:
            running = false;
            break;
        default:
            std::cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
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
            std::cout << "Drücken Sie Enter, um fortzufahren.";
            std::cin.ignore();
            std::cin.get();
        }
    }

    return 0;
}
