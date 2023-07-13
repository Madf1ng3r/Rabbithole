#include "OpenLink.h"  // Einbinden der entsprechenden Header-Datei
#include <iostream>    // oder andere ben�tigte Header

void openLinkInBrowser(const std::string& link)
{
    // Implementiere hier den Code, um den Link im Browser zu �ffnen
    // Du kannst die Plattform-spezifischen Befehle f�r das �ffnen des Browsers verwenden
#ifdef _WIN32
    std::string command = "start " + link;
#elif __APPLE__
    std::string command = "open " + link;
#elif __linux__
    std::string command = "xdg-open " + link;
#else
    std::cout << "Die Ausf�hrung von Links wird auf diesem Betriebssystem nicht unterst�tzt." << std::endl;
    return;
#endif

    int exitCode = std::system(command.c_str());
    if (exitCode != 0)
    {
        std::cout << "Fehler beim �ffnen des Links." << std::endl;
    }
}
