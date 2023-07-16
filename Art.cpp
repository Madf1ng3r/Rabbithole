#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <random>
#include "Art.h"

enum ArtType {
    LandscapeArt,
    AlienArt,
    SpaceshipArt
};

void generateAsciiArt(ArtType artType) {
    std::srand(std::time(0));  // Zufallszahlengenerator initialisieren

    // Arrays mit verschiedenen Zeichen für verschiedene Arten von Kunstwerken
    std::vector<std::vector<char>> artCharacters;
    artCharacters.push_back({ '.', ':', '"', '^', '~', '-' });                     // Landschaft
    artCharacters.push_back({ 'A', 'E', 'I', 'O', 'U', 'Y' });                       // Alien
    artCharacters.push_back({ '/', '|', '\\', '_', '#', '@', '+', '*', '<', '>' }); // Raumschiff

    // Arrays mit verschiedenen Farbcodes für jede Art von Kunstwerk
    std::vector<std::vector<std::string>> artColors;
    artColors.push_back({
        "\033[0;31m",  // Rot
        "\033[0;32m",  // Grün
        "\033[0;33m",  // Gelb
        "\033[0;34m",  // Blau
        "\033[0;35m",  // Magenta
        "\033[0;36m"   // Cyan
        }); // Landschaft
    artColors.push_back({
        "\033[0;31m",  // Rot
        "\033[0;32m",  // Grün
        "\033[0;33m",  // Gelb
        "\033[0;34m",  // Blau
        "\033[0;35m",  // Magenta
        "\033[0;36m"   // Cyan
        }); // Alien
    artColors.push_back({
        "\033[0;31m",  // Rot
        "\033[0;32m",  // Grün
        "\033[0;33m",  // Gelb
        "\033[0;34m",  // Blau
        "\033[0;35m",  // Magenta
        "\033[0;36m"   // Cyan
        }); // Raumschiff

    const int artworkSize = 24; // Größe des Kunstwerks

    switch (artType) {
    case LandscapeArt: {
        int randomCharacterIndex = std::rand() % artCharacters[artType].size();
        int randomColorIndex = std::rand() % artColors[artType].size();
        char landscapeCharacter = artCharacters[artType][randomCharacterIndex];
        std::string colorCode = artColors[artType][randomColorIndex];

        for (int i = 0; i < artworkSize; i++) {
            for (int j = 0; j < artworkSize; j++) {
                int randomColorIndex = std::rand() % artColors[artType].size();
                std::string currentColorCode = artColors[artType][randomColorIndex];
                if (std::rand() % 5 == 0) {
                    int randomCharacterIndex = std::rand() % artCharacters[artType].size();
                    char structureCharacter = artCharacters[artType][randomCharacterIndex];
                    std::cout << currentColorCode << structureCharacter;
                }
                else {
                    std::cout << colorCode << landscapeCharacter;
                }
            }
            std::cout << "\033[0m" << std::endl;
        }
        break;
    }
    case AlienArt: {
        int randomColorIndex = std::rand() % artColors[artType].size();
        std::string colorCode = artColors[artType][randomColorIndex];

        for (int i = 0; i < artworkSize; i++) {
            for (int j = 0; j < artworkSize; j++) {
                int randomCharacterIndex = std::rand() % artCharacters[artType].size();
                char alienCharacter = artCharacters[artType][randomCharacterIndex];
                std::cout << colorCode << alienCharacter;
            }
            std::cout << "\033[0m" << std::endl;
        }
        break;
    }
    case SpaceshipArt: {
        int randomColorIndex = std::rand() % artColors[artType].size();
        std::string colorCode = artColors[artType][randomColorIndex];

        for (int i = 0; i < artworkSize; i++) {
            for (int j = 0; j < artworkSize; j++) {
                if (std::rand() % 5 == 0) {
                    int randomCharacterIndex = std::rand() % artCharacters[artType].size();
                    char spaceshipCharacter = artCharacters[artType][randomCharacterIndex];
                    std::cout << colorCode << spaceshipCharacter;
                }
                else {
                    int randomColorIndex = std::rand() % artColors[artType].size();
                    std::string currentColorCode = artColors[artType][randomColorIndex];
                    std::cout << currentColorCode << ' ';
                }
            }
            std::cout << "\033[0m" << std::endl;
        }
        break;
    }
    default:
        std::cout << "Ungültige Auswahl. Standardmäßig wird ein Landschaftsbild generiert." << std::endl;
        generateAsciiArt(LandscapeArt);
        break;
    }
}

int artmain() {
    int choice;
    std::cout << "\033[1;32m"; // Setzt die Farbe auf hellgrün
    std::cout << R"(








  
                                                     -''--.
                                                   _`>   `\.-'<
                                                _.'     _     '._
                                               .'   _.='   '=._   '.
                                               >_   / /_\ /_\ \   _<
                                                 / (  \o/\\o/  ) \
                                                 >._\ .-,_)-. /_.<
                                                     /__/ \__\ 
                                                       '---'    



)";
    std::cout << "\033[0m"; // Setzt die Farbe zurück auf den Standardwert
    std::cout << "                                              Was darf ich für sie Malen?" << std::endl;
    std::cout << "                                                1. Landschaft" << std::endl;
    std::cout << "                                                2. Alien" << std::endl;
    std::cout << "                                                3. Raumschiff" << std::endl;
    std::cin >> choice;

    ArtType artType;
    switch (choice) {
    case 1:
        artType = LandscapeArt;
        break;
    case 2:
        artType = AlienArt;
        break;
    case 3:
        artType = SpaceshipArt;
        break;
    default:
        std::cout << "Ungültige Auswahl. Standardmäßig wird ein Landschaftsbild generiert." << std::endl;
        artType = LandscapeArt;
        break;
    }

    generateAsciiArt(artType);

    return 0;
}
