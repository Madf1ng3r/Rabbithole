#include "OpenLink.h"  // Einbinden der entsprechenden Header-Datei
#include <iostream>    // oder andere benötigte Header

void openLinkInBrowser(const std::string& link)
{
    // Implementiere hier den Code, um den Link im Browser zu öffnen
    // Du kannst die Plattform-spezifischen Befehle für das Öffnen des Browsers verwenden
#ifdef _WIN32
    std::string command = "start " + link;
#elif __APPLE__
    std::string command = "open " + link;
#elif __linux__
    std::string command = "xdg-open " + link;
#else
    std::cout << "Die Ausführung von Links wird auf diesem Betriebssystem nicht unterstützt." << std::endl;
    return;
#endif

    int exitCode = std::system(command.c_str());
    if (exitCode != 0)
    {
        std::cout << "Fehler beim Öffnen des Links." << std::endl;
    }
}
