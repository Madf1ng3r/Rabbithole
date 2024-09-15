#include <iostream>
#include <cstdlib>
#include <string>
#include "Links.h"
#include "Openlink.h"
using namespace std;
// Farben für die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"
int nulinkmain() {
    string links[] = {
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
        // Menü anzeigen
        cout << "Bitte wählen Sie einen Link:" << endl;
        for (int i = 0; i < numLinks; i++) {
            cout << GREEN << i + 1 << ". " << links[i] << RESET << endl;
        }
        cout << "0. Beenden" << endl;
        // Benutzereingabe lesen
        cin >> choice;
        // Auswahl überprüfen
        if (choice > 0 && choice <= numLinks) {
            // Link im Browser öffnen
            cout << "Öffne Link: " << GREEN << links[choice - 1] << RESET << endl;
            openLinkInBrowser(links[choice - 1]);
        }
        else if (choice != 0) {
            cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
        }
    } while (choice != 0);
    return 0;
}
