#include "games.h"
#include "pong.h"
#include "Mainframe.h"
#include "Openlink.h"
using namespace std;
void showGesetze()
{
}
int gesetzemain() {
        cout << "\033[32m";
        cout << R"(               
 )";  cout << "\033[0m";
        cout << "                                                ____________________________________" << endl;
        cout << "                                                |-----------------------------------|" << endl;
        cout << "                                                |        Gesetze                    |" << endl;
        cout << "                                                |-----------------------------------|" << endl;
        cout << "                                                |1. Jugendarbeitsschutzgesetz       |" << endl;
        cout << "                                                |2. Arbeitsschutzgesetz             |" << endl;
        cout << "                                                |3. UrheberGesetz                   |" << endl;
        cout << "                                                |4. Bürgerliches Gesetzbuch         |" << endl;
        cout << "                                                |5. Gesetz gegen unlauten Wettbewerb|" << endl;
        cout << "                                                |6. Betriebssicherheitsverordnung   |" << endl;
        cout << "                                                |7. Preisangabenverordnung          |" << endl;
        cout << "                                                |8. Elektrogesetz                   |" << endl;
        cout << "                                                |9. Telekommunikationsgesetz        |" << endl;
        cout << "                                                |0. Zurück zum Hauptmenü            |" << endl;
        cout << "                                                |___________________________________|" << endl;
        // Farben für die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"
        string links[] = {
			"https://www.gesetze-im-internet.de/jarbschg/JArbSchG.pdf",
            "https://www.gesetze-im-internet.de/arbschg/ArbSchG.pdf",
            "https://www.gesetze-im-internet.de/urhg/UrhG.pdf",
            "https://www.gesetze-im-internet.de/bgb/BGB.pdf",
            "https://www.gesetze-im-internet.de/uwg_2004/UWG.pdf",
            "https://www.gesetze-im-internet.de/betrsichv_2015/BetrSichV.pdf",
            "https://www.gesetze-im-internet.de/pangv_2022/PAngV.pdf",
            "https://www.gesetze-im-internet.de/elektrog_2015/ElektroG.pdf",
            "https://www.gesetze-im-internet.de/tkg_2021/TKG.pdf",        
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