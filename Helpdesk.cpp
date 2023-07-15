#include <iostream>
#include "Hcode.h"
#include "Code.h"
#include "Zcode.h"
#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>
#include "Openlink.h"
#include <vector>

    void showHelpmenu()
    {
        std::cout << "\033[32m";
        std::cout << R"(
 _________
|^|     | |
| |_____| |
|  _____  |
| |     | |
| |_____| |
|_|_____|_|  
 )";  std::cout << "\033[0m";
        std::cout << "-----------------------" << std::endl;
        std::cout << "      C++ Helpdesk  " << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "1. Syntax Zeichen " << std::endl;
        std::cout << "2. Befehle " << std::endl;
        std::cout << "3. Bibliotheken " << std::endl;
        std::cout << "0. Zurück zum Hauptmenü " << std::endl;
        std::cout << "-----------------------" << std::endl;
    }
int helpmain() 
{
        bool running = true;
        int choice;
        while (running)
        {
            showHelpmenu();
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
                zcmain();
                break;
            case 2:
                codemain();
                break;
            case 3:
                hcmain();
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