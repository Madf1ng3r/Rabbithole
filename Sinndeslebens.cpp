#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "Mainframe.h"
#include "sinndeslebens.h"

using namespace std;

bool isNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}


int ftmain() {
    srand(time(0)); // Seed für den Zufallszahlengenerator initialisieren
    cout << R"(




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
    this_thread::sleep_for(chrono::milliseconds(400)); // Verzögerung von 500 Millisekunden
    string welcomMessage = "Willkommen beim Spiel des Lebens. Du befindest dich in einer virtuellen Welt, in der du den Sinn des Lebens entdecken kannst.   ";
    for (char c : welcomMessage) {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(100)); // Verzögerung von 100 Millisekunden pro Zeichen
    }
    cout << endl;
    //   cout << "Drücke eine beliebige Taste, um fortzufahren...";
    cin.get();
    int randomNumber = 42; // Die zu erratende Zahl ist immer 42
    this_thread::sleep_for(chrono::milliseconds(500)); // Verzögerung von 500 Millisekunden
    string welcoMessage = " Dein erstes Rätsel lautet: Finde die richtige Zahl (zwischen 1 und 100), um den Sinn des Lebens zu erfahren! ";
    for (char c : welcoMessage) {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(100)); // Verzögerung von 100 Millisekunden pro Zeichen
    }
    cout << endl;
    int guess;
    int attempts = 0;
    bool found = false;
    while (!found) {
        string input;
        cout << "Gib eine Zahl zwischen 1 und 100 ein: ";
        cin >> input;
        if (!isNumber(input)) {
            cout << "Ungültige Eingabe. Bitte gib eine Zahl ein." << endl;
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        guess = stoi(input);
        attempts++;
        if (guess == randomNumber) {
            found = true;
        }
        else if (guess < randomNumber) {
            cout << "Die gesuchte Zahl ist größer. Versuche es erneut." << endl;
        }
        else {
            cout << "Die gesuchte Zahl ist kleiner. Versuche es erneut." << endl;
        }
    }
    cout << endl;
    this_thread::sleep_for(chrono::milliseconds(400)); // Verzögerung von 500 Millisekunden
    string welMessage = " Glückwunsch! Du hast die richtige Zahl gefunden und den Sinn des Lebens entdeckt! ";
    for (char c : welMessage) {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout << endl;
    this_thread::sleep_for(chrono::milliseconds(300));
    string wiMessage = " Du hast ";
    for (char c : wiMessage) {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(60));
    }     
        cout << attempts;
        this_thread::sleep_for(chrono::milliseconds(300)); 
        string wMessage = " Versuch/e gebraucht.";
        for (char c : wMessage) {
            cout << c;
            this_thread::sleep_for(chrono::milliseconds(60)); 
        }
        return 0;
    }
void returnToMainMenu() {
    cout << endl;
    cout << "Zurück zum Hauptmenü." << endl;
}