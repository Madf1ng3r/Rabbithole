#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>
#include "Links.h"
#include "AILinks.h"
#include "NULinks.h"
#include "BWLLink.h"
#include "OPLink.h"
#include "PLinks.h"
#include "Openlink.h"
#include "Mainframe.h"
#include <vector>
void showLinkmenu()
{
    std::cout << "\033[32m";
    std::cout << R"(
                                                      
                                                          
                                                          
                                                         
                                                       
                                                    
                                                     

                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                 ,-.                               |  |------------------------|                              |  |     
                / \  `.  __..-,O                   |  |                        |                              |  |    
               :   \ --''_..-'.'                   |  |        Links           |                              |  |     
               |    . .-' `. '.                    |  | -----------------------|                              |  |     
               :     .     .`.'                    |  | | 1. AI Links          |                              |  |     
                \     `.  /  ..                    |  | | 2. Projekt Links     |                              |  |    
                 \      `.   ' .                   |  | | 3. Admin Links       |                              |  |     
                  `,       `.   \                  |  | | 4. andere Links      |                              |  |     
                 ,|,`.        `-.\                 |  | | 5. Inception Links   |                              |  |     
                '.||  ``-...__..-`                 |  | | 6. BWL Links         |                              |  |     
                |  |                               |  | | 0. Beenden           |                              |  |     
                |__|                               |  | ----------------------                                |  |     
                /||\                               |  | @---------------------                                |  |     
               //||\\                              |  |-------------------------------------------------------|  |
              // || \\                             |__________________________________________________________|  /      
           __//__||__\\__                          (__________________________________________________________/        
          '--------------'                      ______/               [___________]                                     
                                               /                                                                        
                                              (_________________________________________________________________        
                                             / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __  
                                            /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # / (  )  
                                           /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /  (__)  
                                          /__________________________________________________________________/           
 )";  std::cout << "\033[0m";
}

int linkmain() {
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
        case 6:
            animateTransition();
            clearScreen();
            bwllinkmain();
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
