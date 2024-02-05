#include <iostream>
#include <cstdlib>
#include <string>
#include "PLinks.h"
#include "Openlink.h"
// Farben f�r die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"
using namespace std;
int plinkmain() {
    string links[] = {
        "https://www.leipzig.ihk.de/mb-04-111",
        "https://en.cppreference.com/w/",
        "https://github.com/nlohmann/json",
        "https://github.com/curl/curl/tree/master",
        "https://github.com/olrea/openai-cpp",
        "https://www.w3schools.com/",
        "https://de.wikibooks.org/wiki/C-Programmierung:_Ausdr�cke_und_Operatoren",
        "https://learn.microsoft.com/en-us/cpp/cpp",
        "https://github.com/Madf1ng3r/Rabbithole",

    };
    int numLinks = sizeof(links) / sizeof(links[0]);
    int choice;
    do {
        cout << "\033[32m";
        cout << "Bitte w�hlen Sie einen Link:" << endl;
        cout << "\033[0m";
        for (int i = 0; i < numLinks; i++) {
            cout << GREEN << i + 1 << ". " << links[i] << RESET << endl;
        }
        cout << "0. Beenden" << endl;
        cin >> choice;
        // Auswahl �berpr�fen
        if (choice > 0 && choice <= numLinks) {
            // Link im Browser �ffnen
            cout << "�ffne Link: " << GREEN << links[choice - 1] << RESET << endl;
            openLinkInBrowser(links[choice - 1]);
        }
        else if (choice != 0) {
            cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
        }
    } while (choice != 0);
    return 0;
}