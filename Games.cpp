#include "games.h"
#include "Snake.h"
#include "pong.h"
#include <iostream>
#include <chrono>
using namespace std;

void showGames()
{
    std::cout << "\033[32m";
    std::cout << R"(




                                                      ____                  
                                                     /___/\_                                
                                                    _\   \/_/\__                          
                                                  __\       \/_/\                       
                                                  \   __    __ \ \                     
                                                 __\  \_\   \_\ \ \   __               
                                                /_/\\   __   __  \ \_/_/\          
                                                \_\/_\__\/\__\/\__\/_\_\/       
                                                   \_\/_/\       /_\_\/             
                                                      \_\/       \_\/ 


 )";  std::cout << "\033[0m";
    std::cout << "                                                _______________________" << std::endl;
    std::cout << "                                                |-----------------------|" << std::endl;
    std::cout << "                                                |        Minispiele     |" << std::endl;
    std::cout << "                                                |-----------------------|" << std::endl;
    std::cout << "                                                |1. Snake               |" << std::endl;
    std::cout << "                                                |2. Pong                |" << std::endl;
    std::cout << "                                                |0. Zurück zum Hauptmenü|" << std::endl;
    std::cout << "                                                |_______________________|" << std::endl;
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
            std::cin.clear(); // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay  2 seconds
            continue;
        }
        switch (choice)
        {
        case 1:
            snakemain();
            break;
        case 2:
            pongmain();
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