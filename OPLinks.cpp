#include <iostream>
#include <cstdlib>
#include <string>
#include "OPLink.h"
#include "Openlink.h"
using namespace std;
// Farben f�r die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"
int oplinkmain() {
    string links[] = {
        "https://www.youtube.com/@justvisitingthisplanet/playlists",
        "https://www.planetminecraft.com/member/madfinger/",
        "https://soundcloud.com/spacecake1/sets/free-your-mind",
        "https://steamcommunity.com/id/M4DF1NGER/",
        "https://github.com/Madf1ng3r/Rabbithole",

    };
    int numLinks = sizeof(links) / sizeof(links[0]);
	int choice; // Benutzereingabe
    do {
        // Men� anzeigen
        cout << "Bitte w�hlen Sie einen Link:" << endl;
        for (int i = 0; i < numLinks; i++) {
            cout << GREEN << i + 1 << ". " << links[i] << RESET << endl;
        }
        cout << "0. Beenden" << endl;
        // Benutzereingabe lesen
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