#include "Hcode.h"
#include "Code.h"
#include "Zcode.h"
#include "Mainframe.h"
#include "Openlink.h"
#include "BeispielCode.h"
using namespace std;
     void showHelpmenu()
    {
       cout << "\033[32m";
        cout << R"(                                                                                                                                                                                                                                                                                                                                      

 
                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |-------------------------|                             |  |     
                                                  |  |-------------------------|                             |  |    
                                                  |  |_________________________|     _________               |  |     
                                                  |  |      C++ Helpdesk       |    |^|     | |              |  |     
                                                  |  |-------------------------|    | |_____| |              |  |     
                  ________                        |  | 1. Syntax Zeichen       |    |  _____  |              |  |    
                 |\   ____\       _               |  | 2. Befehle              |    | |     | |              |  |     
                 \ \  \        __| |__            |  | 3. Bibliotheken         |    | |_____| |              |  |     
                  \ \  \      |__   __|           |  | 4. Beispielcodes        |    |_|_____|_|              |  |     
                   \ \  \____    |_|              |  | 0. Zurueck              |                             |  |     
                    \ \_______\                   |  |_________________________|                             |  |     
                     \|_______|                   |  |                     |                                 |  |     
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

 )";  cout << "\033[0m";
    }
int helpmain() 
{
        bool running = true;
        int choice;
        while (running)
        {
            showHelpmenu();
            cout << "W�hlen Sie eine Option: ";
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
        return 0;
}