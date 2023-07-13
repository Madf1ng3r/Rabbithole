#include <iostream>
#include <cstdlib>
#include <string>
#include "NULinks.h"
#include "Openlink.h"

// Farben f�r die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int nulinkmain() {
    std::string links[] = {
        "https://www.lightningmaps.org/",
        "https://www.speedtest.net/",
        "https://www.flightradar24.com",
        "https://steamdb.info/",
        "https://translate.google.com/",
        "https://www.w3schools.com/",
        "https://pixlr.com/de/e/",
        "https://ezgif.com/",
        "https://de.rakko.tools/tools/68/",
        "http://stars.chromeexperiments.com/",
        "https://earth.google.com/web",
        "https://theuselessweb.com/?",
        "https://endedesinternets.de/"


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
