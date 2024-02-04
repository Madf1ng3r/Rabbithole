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
#include "pcwiki.h"
#include <vector>
using namespace std;
void showLinkmenu()
{
    cout << "\033[32m";
    cout << R"(
                                                      
                                                          
                                                          
                                                         
                                                       
                                                    
                                                     

                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                 ,-.                               |  |------------------------|                              |  |     
                / \  `.  __..-,O                   |  |       Links            |                              |  |    
               :   \ --''_..-'.'                   |  |________________________|                              |  |     
               |    . .-' `. '.                    |  | | 1. Infolinks         |                              |  |     
               :     .     .`.'                    |  | | 2. Projekt Links     |                              |  |     
                \     `.  /  ..                    |  | | 3. Admin Links       |                              |  |    
                 \      `.   ' .                   |  | | 4. andere Links      |                              |  |     
                  `,       `.   \                  |  | | 5. Inception Links   |                              |  |     
                 ,|,`.        `-.\                 |  | | 6. BWL Links         |                              |  |     
                '.||  ``-...__..-`                 |  | | 7. AI Links          |                              |  |     
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
 )";  cout << "\033[0m";
}

int linkmain() {
    bool running = true;
    int choice;
    while (running)
    { 
        showLinkmenu();
        cout << "Wählen Sie eine Option: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            continue;
        }
        switch (choice)
        {
        case 1:   
            animateTransition();
            clearScreen();
            infolinkmain();
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
        case 7:
            animateTransition();
			clearScreen();
			ailinkmain();
			break;
        case 0:
            running = false;
            break;
        default:
            cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }
    }
    return 0;
}
