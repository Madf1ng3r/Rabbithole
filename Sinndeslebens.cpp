#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <thread>
#include <chrono>
#include <string>
#include <conio.h>
#include "sinndeslebens.h"

using namespace std;

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
    std::cout << R"(




                                .                                         .                       .      
                   .                                         .
           .                                                          .
o                        .                        .        ___---___                    .                   
                                         .              .--\        --.     .     .         .
                                                     ./.;_.\     __/~ \.     
                                                    /;  / `-'  __\    . \                           .         
                                  .        .       / ,--'     / .   .;   \        |
                         .                        | .|       /       __   |      -O-       .            °
       .                                         |__/    __ |  . ;   \ | . |      |
                                                 |      /  \\_    . ;| \___|                     .
                       .            .    o       |      \  .~\\___,--'     |           .
                                                 |      | . ; ~~~~\_     __|
                                    |             \     \   .  .  ; \    /_                           .
                                    -O-        .    \   /         . |  ~/                  .
        .                           |    .          ~\ \   .      /  /~          o
                     .             .                   ~--___ ; ___--~       
                                                  .          ---         .              -
           .                                                                   .


)";
    std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Verzögerung von 500 Millisekunden
    std::string welcomMessage = "Willkommen beim Spiel des Lebens. Du befindest dich in einer virtuellen Welt, in der du den Sinn des Lebens entdecken kannst.   ";
    for (char c : welcomMessage) {
        std::cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Verzögerung von 100 Millisekunden pro Zeichen
    }
    std::cout << std::endl;
    //   std::cout << "Drücke eine beliebige Taste, um fortzufahren...";
    std::cin.get();
    int randomNumber = 42; // Die zu erratende Zahl ist immer 42
    std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Verzögerung von 500 Millisekunden
    std::string welcoMessage = " Dein erstes Rätsel lautet: Finde die richtige Zahl (zwischen 1 und 100), um den Sinn des Lebens zu erfahren! ";
    for (char c : welcoMessage) {
        std::cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Verzögerung von 100 Millisekunden pro Zeichen
    }
    std::cout << std::endl;
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
    std::this_thread::sleep_for(std::chrono::milliseconds(400)); // Verzögerung von 500 Millisekunden
    std::string welMessage = " Glückwunsch! Du hast die richtige Zahl gefunden und den Sinn des Lebens entdeckt! ";
    for (char c : welMessage) {
        std::cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Verzögerung von 100 Millisekunden pro Zeichen
    }
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300)); // Verzögerung von 500 Millisekunden
    std::string wiMessage = " Du hast ";
    for (char c : wiMessage) {
        std::cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(60));
    }     
        std::cout << attempts;
        std::this_thread::sleep_for(std::chrono::milliseconds(300)); // Verzögerung von 500 Millisekunden
        std::string wMessage = " Versuch/e gebraucht.";
        for (char c : wMessage) {
            std::cout << c;
            std::this_thread::sleep_for(std::chrono::milliseconds(60)); // Verzögerung von 100 Millisekunden pro Zeichen
        }
        return 0;
    }
void returnToMainMenu() {
    std::cout << std::endl;
    std::cout << "Zurück zum Hauptmenü." << std::endl;
}