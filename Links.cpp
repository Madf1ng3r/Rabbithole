#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>
       // alle Header Dateien
#include "Links.h"
#include "AILinks.h"
#include "NULinks.h"
#include "OPLink.h"
#include "PLinks.h"
#include "Openlink.h"
#include "Mainframe.h"
#include <vector>
void showLinkmenu()
{
    std::cout << "\033[32m";
    std::cout << R"(








                                                            ,-.
                                                          / \  `.  __..-,O
                                                         :   \ --''_..-'.'
                                                         |    . .-' `. '.
                                                         :     .     .`.'
                                                          \     `.  /  ..
                                                           \      `.   ' .
                                                            `,       `.   \
                                                           ,|,`.        `-.\
                                                          '.||  ``-...__..-`
                                                          |  |
                                                          |__|
                                                          /||\
                                                         //||\\
                                                        // || \\
                                                     __//__||__\\__
                                                    '--------------'    

 )";  std::cout << "\033[0m";
    std::cout << "                                                   -----------------------" << std::endl;
    std::cout << "                                                   eine kleine Linksammlung" << std::endl;
    std::cout << "                                                   -----------------------" << std::endl;
    std::cout << "                                                  | 1. AI Links          |" << std::endl;
    std::cout << "                                                  | 2. Projekt Links     |" << std::endl;
    std::cout << "                                                  | 3. Admin Links       |" << std::endl;
    std::cout << "                                                  | 4. andere Links      |" << std::endl;
    std::cout << "                                                  | 5. Inception Links   |" << std::endl;
    std::cout << "                                                  | 0. Beenden           |    " << std::endl;
    std::cout << "                                                   ---------------------- " << std::endl;
}

int linkmain()
{
    bool running = true;
    int choice;
    while (running)
    { 
        showLinkmenu();
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
            ailinkmain();
            break;
        case 2:
            animateTransition();
			clearScreen();
            plinkmain();
            break;
        case 3:
			animateTransition();
			clearScreen();
            oplinkmain();
            break;
        case 4:
			animateTransition();
			clearScreen();
            nulinkmain();
        case 5:
			animateTransition();
			clearScreen();
            linkmain();
            break;     
        case 0:
            running = false;
            break;
        default:
            std::cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay for 2 seconds
            break;
        }
    }
    return 0;
}
