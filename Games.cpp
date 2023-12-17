#include "Games.h"
#include "pong.h"
#include "Mainframe.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void showGames()
{
    std::cout << "\033[32m";
    std::cout << R"(               
         




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
 )";  std::cout << "\033[0m";
}

int gamemain() {
    bool running = true;
    int choice;
    while (running)
    {
        showGames();
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
            std::cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay 2 seconds
            break;
        }
    } 
    return 0;
}