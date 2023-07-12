#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>
#include "Taschenrechner.h"             // alle Header Dateien
#include "sinndeslebens.h"
#include "binary.h"
#include "Snake.h"
#include "Links.h"
#include "readme.h"
#include "Geschichte.h"
#include "pong.h"
#include "Witzbold.h"
#include "Gaestebuch.h"
#include <vector>
#include "Art.h"

void clearScreen()
{
    // Code zum Löschen der Konsole hier
}

void showMenu()
{
    std::cout << "\033[32m";
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
    std::cout << "\033[0m";
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
    std::cout << "10. Code Rain / Console clear" << std::endl;
    std::cout << "11. der Erzähler" << std::endl;
    std::cout << "0. Beenden" << std::endl;
    std::cout << "-----------------------" << std::endl;
}

void executeFile(const std::string& filename)
{
    std::string command;

#ifdef _WIN32
    command = "start " + filename;
#elif __APPLE__
    command = "open " + filename;
#elif __linux__
    command = "xdg-open " + filename;
#else
    std::cout << "Die Ausführung von Dateien wird auf diesem Betriebssystem nicht unterstützt." << std::endl;
    return;
#endif

    int exitCode = std::system(command.c_str());
    if (exitCode != 0)
    {
        std::cout << "Fehler beim Öffnen der Datei." << std::endl;
    }
}

void animateTransition()
{
    clearScreen();
    std::cout << "Lade..." << std::endl;

    std::string animationFrames = "|/-\\";
    int frameIndex = 0;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << animationFrames[frameIndex] << std::flush;

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        std::cout << "\b \b" << std::flush;

        frameIndex = (frameIndex + 1) % animationFrames.length();
    }

    std::cout << std::endl;
}

int main()
{
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
            std::cin.clear(); // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay for 2 seconds
            continue;
        }

        switch (choice)
        {
        case 1:
            animateTransition();
            clearScreen();
            generateAsciiArt();
            break;
        case 2:
            animateTransition();
            clearScreen();
            executeFile("Witzbold.cpp");
            break;
        case 3:
            animateTransition();
            clearScreen();
            taschenrechnerRunning = true;
            break;
        case 4:
            animateTransition();
            clearScreen();
            ftmain(); // Aufruf der Funktion aus sinndeslebens.cpp
            returnToMainMenu(); // Aufruf der Funktion zum Zurückkehren zum Hauptmenü
            break;
        case 5:
            animateTransition();
            clearScreen();
            rmmain();  // Öffnet Readme.cpp 
            break;
        case 6:
            animateTransition();
            clearScreen();
            guimain(); // Startet das Gästebuch

            break;
        case 7:
            animateTransition();
            clearScreen();
            linkmain();
            break;
        case 8:
            animateTransition();
            clearScreen();
            pongmain();
            break;
        case 9:
            animateTransition();
            clearScreen();
            snakemain();
            break;
        case 10:
            animateTransition();
            clearScreen();
            bimain();
            break;
        case 11:
            animateTransition();
            clearScreen();
            geschmain();
            break;

        case 0:
            running = false;
            break;

        default:
            std::cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay for 2 seconds
            break;
        }

        if (taschenrechnerRunning)
        {
            calcmain();
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
