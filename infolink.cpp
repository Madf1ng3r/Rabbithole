#include <iostream>
#include <cstdlib>
#include <string>
#include "Openlink.h"
// Farben f�r die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int infolinkmain() {
    std::string links[] = {

        "https://www.leifiphysik.de/elektrizitaetslehre/",
        "https://www.lernort-mint.de/informatik/",
        "https://www.lawerence.de",
        "https://computerweekly.com/de/definitionen",

    };
    int numLinks = sizeof(links) / sizeof(links[0]);
    int choice;
    do {
        // Men� anzeigen
        std::cout << "Bitte w�hlen Sie einen Link:" << std::endl;
        for (int i = 0; i < numLinks; i++) {
            std::cout << GREEN << i + 1 << ". " << links[i] << RESET << std::endl;
        }
        std::cout << "0. Beenden" << std::endl;
        // Benutzereingabe lesen
        std::cin >> choice;
        // Auswahl �berpr�fen
        if (choice > 0 && choice <= numLinks) {
            // Link im Browser �ffnen
            std::cout << "�ffne Link: " << GREEN << links[choice - 1] << RESET << std::endl;
            openLinkInBrowser(links[choice - 1]);
        }
        else if (choice != 0) {
            std::cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
        }
    } while (choice != 0);
    return 0;
}