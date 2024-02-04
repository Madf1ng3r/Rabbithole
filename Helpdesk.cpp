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

 )";  cout << "\033[0m";
    }
int helpmain() 
{
        bool running = true;
        int choice;
        while (running)
        {
            showHelpmenu();
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
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
        return 0;
}