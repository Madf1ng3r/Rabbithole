#include <iostream>
#include <cstdlib>
#include <string>
#include "Links.h"

// Farben für die Terminalausgabe
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

// Funktion zum Öffnen des Links im Browser
void openLinkInBrowser(const std::string& link) {
    std::string command;
#ifdef _WIN32
    command = "start ";
#elif __APPLE__
    command = "open ";
#elif __linux__
    command = "xdg-open ";
#else
    // Nicht unterstütztes Betriebssystem
    std::cout << "Das Öffnen von Links wird auf diesem Betriebssystem nicht unterstützt." << std::endl;
    return;
#endif
    command += link;
    system(command.c_str());
}

int linkmain() {
    std::string links[] = {
        "https://en.cppreference.com/w/",
        "https://chat.openai.com/",
        "https://www.youtube.com/@justvisitingthisplanet/playlists",
        "https://www.lightningmaps.org/",
        "https://github.com/nlohmann/json",
        "https://github.com/curl/curl/tree/master",
        "https://www.planetminecraft.com/member/madfinger/",
        "https://www.w3schools.com/",
        "https://pixlr.com/de/e/",
        "https://hotpot.ai/",
        "https://soundcloud.com/spacecake1/sets/free-your-mind",
        "https://github.com/Madf1ng3r/Rabbithole",
        "https://theuselessweb.com/?"


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
