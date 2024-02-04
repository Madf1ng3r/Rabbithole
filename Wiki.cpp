#include "Mainframe.h"
#include "Helpdesk.h"
#include "BWL.h"
#include "sqlwiki.h"
#include "pcwiki.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include "cmd.h"
using namespace std;

void showWiki()
{
    cout << "\033[32m";
    cout << R"(            
                 
           
      
      
           
                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |                                                       |  |     
                                                  |  |  _______________________                              |  |    
                                                  |  | |-----------------------|                             |  |     
                                                  |  | |         WIKI          |                             |  |     
                                                  |  | |-----------------------|                             |  |     
                                                  |  | |1. C++                 |                             |  |    
       .--.           .---.        .-.            |  | |2. CMD                 |                             |  |     
   .---|--|   .-.     | B |  .---. |~|            |  | |3. SQL                 |                             |  |     
.--|===|W |---|_|--.__| W |--|:::| |~|-==-.__ ___ |  | |4. Elektronik & PC     |                             |  |     
|C#|C++|i |===| |~~|%%| L |--|SQL|_|~|HTML|  |___||  | |5. BWL                 |                             |  |     
|  |   |S |===| |==|  |   |  |:::|=| |    |PC|---||  | |0. Zurück zum Hauptmenü|                             |  |     
|  |PHP|o |   |_|__|  | I |__|CMD| | |    |  |___||  |_________________________|                             |  |     
|~~|===|--|===|~|~~|%%|~~~|--|:::|=|~|----|==|---||  | @-----------------------                              |  |     
^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^|  |-------------------------------------------------------|  |
                                                  |__________________________________________________________|  /      
                                                    (__________________________________________________________/        
                                                ____/                 [___________]                                     
                                               /                                                                        
                                              (_________________________________________________________________        
                                              / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __  
                                             /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # / (  )  
                                            /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /  (__)  
                                           /__________________________________________________________________/          
 )";  cout << "\033[0m";
}
int wikimain() {
    bool running = true;
    int choice;
    while (running)
    {
        showWiki();
        cout << "Wählen Sie eine Option: ";
        if (!(cin >> choice))
        {
            cin.clear(); //    clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(std::chrono::seconds(2)); // Delay  2 seconds
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
            cmdmain();
            break;
        case 3:
            animateTransition();
            clearScreen();
            showsqlwikimain();
            break;
        case 4:
            animateTransition();
            clearScreen();
			pcwikimain();
			break;
        case 5:
			animateTransition();
			clearScreen();
            bwlmain();
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