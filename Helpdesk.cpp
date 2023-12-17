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
#include "BeispielCode.h"
#include <vector>
     void showHelpmenu()
    {
       std::cout << "\033[32m";
        std::cout << R"(                                                        
                                                                                                                                                                                                                           
                                                       
                                                         


                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |-------------------------|                             |  |     
                                                  |  |-------------------------|                             |  |    
                                                  |  |_________________________|     _________               |  |     
                                                  |  |      C++ Helpdesk       |    |^|     | |              |  |     
                                                  |  |-------------------------|    | |_____| |              |  |     
                                                  |  | 1. Syntax Zeichen       |    |  _____  |              |  |    
                                                  |  | 2. Befehle              |    | |     | |              |  |     
                                                  |  | 3. Bibliotheken         |    | |_____| |              |  |     
                                                  |  | 4. Beispielcodes        |    |_|_____|_|              |  |     
                                                  |  | 0. Zurück zum Hauptmenü |                             |  |     
                                                  |  |_________________________|                             |  |     
                                                  |  |                     |                                 |  |     
                                                  |  | @-------------------|                                 |  |     
                                                  |  |-------------------------------------------------------|  |
                                                  |__________________________________________________________|  /      
                                                    (__________________________________________________________/        
                                               ______/                [___________]                                     
                                              /                                                                        
                                             (__________________________________________________________________        
                                            / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __  
                                           /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # / (  )  
                                          /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /  (__)  
                                         /__________________________________________________________________/          

 )";  std::cout << "\033[0m";
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
            case 4:
                bcmain();
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