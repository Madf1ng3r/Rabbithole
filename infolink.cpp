#include <cstdlib>
#include "Mainframe.h"
#include "Openlink.h"
// Farben für die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"
using namespace std;
int infolinkmain() {
    string links[] = {
        "https://fachinformatikerpruefungsvorbereitung.de/",
        "https://ausbildung-in-der-it.de/abschlusspruefung/einrichten-eines-it-gestuetzten-arbeitsplatzes",
        "https://www.leifiphysik.de/elektrizitaetslehre",
        "https://www.lernort-mint.de/informatik",
        "https://www.lawerence.de",
        "https://computerweekly.com/de/definitionen",
        "https://ss64.com",
        "https://jscompress.com/",
        "https://smallpdf.com",
        "https://www.av-test.org/de/",
        "https://gc.de/gc/",
        "https://www.yougetsignal.com",
        "https://htmlcolorcodes.com",
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