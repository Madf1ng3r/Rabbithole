#include "Mainframe.h"
#include "BWL.h"
#include "sqlwiki.h"
#include "pcwiki.h"
#include "cmd.h"
#include "Wiki.h"
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
                                                  |  | |-----------------------|-------------------          |  |     
                                                  |  | |1. C++                 | 6. 1. Pruefung    '         |  |    
       .--.           .---.        .-.            |  | |2. CMD                 | 7. Python         '         |  |     
   .---|--|   .-.     | B |  .---. |~|            |  | |3. SQL                 | 8. Linux          '         |  |     
.--|===|W |---|_|--.__| W |--|:::| |~|-==-.__ ___ |  | |4. Elektronik & PC     |                   '         |  |     
|C#|C++|i |===| |~~|%%| L |--|SQL|_|~|HTML|  |___||  | |5. BWL                 |                   '         |  |     
|  |   |S |===| |==|  |   |  |:::|=| |    |PC|---||  | |0. Zurueck zum Menue   |                   '         |  |     
|  |PHP|o |   |_|__|  | I |__|CMD| | |    |  |___||  |_________________________'___________________'         |  |     
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
        case 6:
            animateTransition();
            clearScreen();
            pruefungmain();
            break;
        case 7:
            animateTransition();
            clearScreen();
            showPython();
            break;
        case 8:
            animateTransition();
            clearScreen();
            linuxmain();
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