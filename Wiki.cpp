#include "Mainframe.h"
#include "Helpdesk.h"
#include "BWL.h"
#include <iostream>
#include <chrono>
using namespace std;

void showWiki()
{
    std::cout << "\033[32m";
    std::cout << R"(
               
           
         
        
        
            
        
              
                                                                O
                                                               /|\
                                                               / \



 )";  std::cout << "\033[0m";
    std::cout << "                                                _______________________" << std::endl;
    std::cout << "                                                |-----------------------|" << std::endl;
    std::cout << "                                                |         WIKI          |" << std::endl;
    std::cout << "                                                |-----------------------|" << std::endl;
    std::cout << "                                                |1. C++                 |" << std::endl;
    std::cout << "                                                |2. BWL                 |" << std::endl;
    std::cout << "                                                |3.                     |" << std::endl;
    //std::cout << "                                              |4.                     |" << std::endl; 
    std::cout << "                                                |0. Zurück zum Hauptmenü|" << std::endl;
    std::cout << "                                                |_______________________|" << std::endl;
}
int wikimain() {

    bool running = true;
    int choice;
    while (running)
    {
        showWiki();
        std::cout << "Wählen Sie eine Option: ";
        if (!(std::cin >> choice))
        {
            std::cin.clear(); //    clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay  2 seconds
            continue;
        }
        switch (choice)
        {
        case 1:
            animateTransition();
            clearScreen();
            helpmain();
            break;
        case 2:
            animateTransition();
            clearScreen();
            bwlmain();
            break;
        case 3:
            animateTransition();
            clearScreen();
         
            break;
        case 4:
            animateTransition();
            clearScreen();
        
        case 0:
            running = false;
            break;
        default:
            std::cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay 2 seconds
            break;
        }
    }
    return 0;
}