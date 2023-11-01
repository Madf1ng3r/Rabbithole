#include "games.h"
#include "Snake.h"
#include "pong.h"
#include "Treadmill.h"
#include "Mainframe.h"
#include <iostream>
#include <chrono>
#include "Openlink.h"
using namespace std;

void showGesetze()
{
}
int gesetzemain() {
        std::cout << "\033[32m";
        std::cout << R"(               
 )";  std::cout << "\033[0m";
        std::cout << "                                                ____________________________________" << std::endl;
        std::cout << "                                                |-----------------------------------|" << std::endl;
        std::cout << "                                                |        Gesetze                    |" << std::endl;
        std::cout << "                                                |-----------------------------------|" << std::endl;
        std::cout << "                                                |1. Jugendarbeitsschutzgesetz       |" << std::endl;
        std::cout << "                                                |2. Arbeitsschutzgesetz             |" << std::endl;
        std::cout << "                                                |3. UrheberGesetz                   |" << std::endl;
        std::cout << "                                                |4. Bürgerliches Gesetzbuch         |" << std::endl;
        std::cout << "                                                |5. Gesetz gegen unlauten Wettbewerb|" << std::endl;
        std::cout << "                                                |6. Betriebssicherheitsverordnung   |" << std::endl;
        std::cout << "                                                |7. Preisangabenverordnung          |" << std::endl;
        std::cout << "                                                |8. Elektrogesetz                   |" << std::endl;
        std::cout << "                                                |9. Telekommunikationsgesetz        |" << std::endl;
        std::cout << "                                                |0. Zurück zum Hauptmenü            |" << std::endl;
        std::cout << "                                                |___________________________________|" << std::endl;
        // Farben für die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

        std::string links[] = {
           
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