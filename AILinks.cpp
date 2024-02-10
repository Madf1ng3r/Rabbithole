#include <cstdlib>
#include "Mainframe.h"
#include "AILinks.h"
#include "Openlink.h"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"
using namespace std;
int ailinkmain() {
    string links[] = {  
        "https://chat.openai.com/",
        "https://www.w3schools.com/",
        "https://deepai.org/",
        "https://hotpot.ai/",
        "https://playground.ai/",
        "https://www.canva.com/",
        "https://www.craiyon.com/",
        "https://maketafi.com/",
        "https://wepik.com/ai#rs=menu",
        "https://clipdrop.co/",
        "https://donotpay.com",  

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