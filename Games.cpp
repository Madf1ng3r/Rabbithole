#include "Games.h"
#include "pong.h"
#include "Mainframe.h"
using namespace std;
void showGames()
{
    cout << "\033[32m";
    cout << R"(               
         




                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |------------------------           ____                |  |     
                                                  |  |  _______________________         /___/\_              |  |    
                                                  |  | |-----------------------|       _\   \/_/\__          |  |     
                                                  |  | |        Minispiele     |     __\       \/_/\         |  |     
                                                  |  | |-----------------------|     \   __    __ \ \        |  |     
                                                  |  | |1. Snake               |    __\  \_\   \_\ \ \   __  |  |    
                                                  |  | |2. Pong                |   /_/\\   __   __  \ \_/_/\ |  |     
                                                  |  | |3. Treadmill           |   \_\/_\__\/\__\/\__\/_\_\/ |  |     
                                                  |  | |4. Spaceinvaders       |        \_\/_/\      /_\_\/  |  |     
                                                  |  | |5. Schach              |         \_\/        \_\/    |  |     
                                                  |  | |                       |                             |  |     
                                                  |  | |0. Zurück zum Hauptmenü|                             |  |     
                                                  |  | @---------------------                                |  |     
                                                  |  |-------------------------------------------------------|  |
                                                  |__________________________________________________________|  /      
                                                    (__________________________________________________________/        
                                             _______/                [___________]    
                                           /  
                                          (_________________________________________________________________      
                                          / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __  
                                         /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # / (  )  
                                        /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /  (__)  
                                       /__________________________________________________________________/                                                                                                                                                                                                                                               
 )";  cout << "\033[0m";
}

int gamemain() {
    bool running = true;
    int choice;
    while (running)
    {
        showGames();
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
            snakemain();
            break;
        case 2:
			animateTransition();
			clearScreen();
            pongmain();
            break;
		case 3:
			animateTransition();
			clearScreen();
            lifemain();
            break;
        case 4:
            animateTransition();
			clearScreen();
            spacemain();
            break;
        case 5:
            animateTransition();
            clearScreen();
            chessmain();
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