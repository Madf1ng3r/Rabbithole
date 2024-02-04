#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Openlink.h"

using namespace std;

    int bwllinkmain() 
	{

        cout << "BWL Links!" << endl;
        // Farben für die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"
        std::string links[] = {
            "https://chat.openai.com",
            "https://dejure.org",
            "https://www.gesetze-im-internet.de/bgb",
            "https://www.bwl-lexikon.de",
            "https://dsgvo-gesetz.de",
            "https://www.datev.de/web/de/startseite/startseite-wp",
            "https://wirtschaftslexikon.gabler.de",
            "https://www.rechtsdokumente.de/vertraege/groups/"

        };
        int numLinks = sizeof(links) / sizeof(links[0]);
        int choice;
        do {
            // Menü anzeigen
            cout << "Bitte wählen Sie einen Link:" << endl;
            for (int i = 0; i < numLinks; i++) {
                cout << GREEN << i + 1 << ". " << links[i] << RESET << endl;
            }
            cout << "0. Beenden" << std::endl;
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