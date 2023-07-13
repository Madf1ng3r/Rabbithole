#include <iostream>
#include <cstdlib>
#include <string>
#include "OPLink.h"
#include "Openlink.h"

// Farben für die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"


int oplinkmain() {
    std::string links[] = {
        "https://www.youtube.com/@justvisitingthisplanet/playlists",
        "https://www.planetminecraft.com/member/madfinger/",
        "https://soundcloud.com/spacecake1/sets/free-your-mind",
        "https://steamcommunity.com/id/M4DF1NGER/",
        "https://github.com/Madf1ng3r/Rabbithole",


    };
    int numLinks = sizeof(links) / sizeof(links[0]);

    int choice;
    do {
        // Menü anzeigen
        std::cout << "Bitte wählen Sie einen Link:" << std::endl;
        for (int i = 0; i < numLinks; i++) {
            std::cout << GREEN << i + 1 << ". " << links[i] << RESET << std::endl;
        }
        std::cout << "0. Beenden" << std::endl;

        // Benutzereingabe lesen
        std::cin >> choice;

        // Auswahl überprüfen
        if (choice > 0 && choice <= numLinks) {
            // Link im Browser öffnen
            std::cout << "Öffne Link: " << GREEN << links[choice - 1] << RESET << std::endl;
            openLinkInBrowser(links[choice - 1]);
        }
        else if (choice != 0) {
            std::cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
        }
    } while (choice != 0);

    return 0;
}
