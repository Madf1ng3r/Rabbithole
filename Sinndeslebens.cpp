#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "sinndeslebens.h"

bool isNumber(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

int ftmain() {
    srand(time(0)); // Seed für den Zufallszahlengenerator initialisieren
    std::cout <<  R"(




                                .                                         .

           .                                                          .
o                        .                        .        ___---___                    .                   
                                         .              .--\        --.     .     .         .
                                                     ./.;_.\     __/~ \.     
                                                    /;  / `-'  __\    . \                            
                                  .        .       / ,--'     / .   .;   \        |
                         .                        | .|       /       __   |      -O-       .
       .                                         |__/    __ |  . ;   \ | . |      |
                                                 |      /  \\_    . ;| \___|    
                       .            .    o       |      \  .~\\___,--'     |           .
                                                 |      | . ; ~~~~\_     __|
                                    |             \     \   .  .  ; \    /_
                                    -O-        .    \   /         . |  ~/                  .
        .                           |    .          ~\ \   .      /  /~          o
                     .             .                   ~--___ ; ___--~       
                                                  .          ---         .              -
           .                                                                   .


)";

    std::cout << "Willkommen beim Spiel des Lebens!" << std::endl;
    std::cout << "Du befindest dich in einer virtuellen Welt, in der du den Sinn des Lebens entdecken kannst." << std::endl;

    std::cout << std::endl;
    std::cout << "Drücke eine beliebige Taste, um fortzufahren...";
    std::cin.get();

    int randomNumber = 42; // Die zu erratende Zahl ist immer 42

    std::cout << std::endl;
    std::cout << "Dein erstes Rätsel lautet: Finde die richtige Zahl (zwischen 1 und 100), um den Sinn des Lebens zu erfahren!" << std::endl;

    int guess;
    int attempts = 0;
    bool found = false;

    while (!found) {
        std::string input;
        std::cout << "Gib eine Zahl zwischen 1 und 100 ein: ";
        std::cin >> input;

        if (!isNumber(input)) {
            std::cout << "Ungültige Eingabe. Bitte gib eine Zahl ein." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        guess = std::stoi(input);
        attempts++;

        if (guess == randomNumber) {
            found = true;
        }
        else if (guess < randomNumber) {
            std::cout << "Die gesuchte Zahl ist größer. Versuche es erneut." << std::endl;
        }
        else {
            std::cout << "Die gesuchte Zahl ist kleiner. Versuche es erneut." << std::endl;
        }
    }

    std::cout << std::endl;
    std::cout << "Glückwunsch! Du hast die richtige Zahl gefunden und den Sinn des Lebens entdeckt!" << std::endl;
    std::cout << "Du hast dafür " << attempts << " Versuch(e) gebraucht." << std::endl;

    return 0;
}

void returnToMainMenu() {
    std::cout << std::endl;
    std::cout << "Zurück zum Hauptmenü." << std::endl;
}
