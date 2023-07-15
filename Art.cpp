#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <random>
#include "Art.h"

enum ArtZone {
    Landscape,
    Foreground,
    Other
};

void generateAsciiArt() {
    std::srand(std::time(0));  // Zufallszahlengenerator initialisieren

    // Arrays mit verschiedenen Zeichen für verschiedene Bereiche des Kunstwerks
    const std::vector<char> landscapeCharacters = { '.', ':', '"', '^', '~', '-' };
    const std::vector<char> flowerCharacters = { 'o', '@', '*', '+', '.' };
    const std::vector<char> houseCharacters = { '#', 'H', 'T', '=', '^', '|' };
    const std::vector<char> planetCharacters = { 'o', '*', 'x', '.', '^', '@' };
    const std::vector<char> peopleCharacters = { 'M', 'W', 'V', 'Y', 'X', 'Z' };
    const std::vector<char> alienCharacters = { 'A', 'E', 'I', 'O', 'U', 'Y' };
    const std::vector<char> animalCharacters = { 'D', 'C', 'B', 'K', 'L', 'J' };

    // Array mit verschiedenen Farbcodes
    const std::vector<std::string> colors = {
        "\033[0;31m",  // Rot
        "\033[0;32m",  // Grün
        "\033[0;33m",  // Gelb
        "\033[0;34m",  // Blau
        "\033[0;35m",  // Magenta
        "\033[0;36m"   // Cyan
    };

    const int artworkSize = 24; // Größe des Kunstwerks

    // Zufällig bestimmen, welche Zone für Landschaft, Vordergrund und andere Elemente verwendet wird
    std::vector<ArtZone> artZones(artworkSize, Other);
    std::fill(artZones.begin(), artZones.begin() + artworkSize / 3, Landscape);
    std::fill(artZones.begin() + artworkSize / 3, artZones.begin() + 2 * artworkSize / 3, Foreground);
    std::random_device rd;
    std::mt19937 rng(rd());
    std::shuffle(artZones.begin(), artZones.end(), rng);

    for (int i = 0; i < artworkSize; i++) {
        for (int j = 0; j < artworkSize; j++) {
            int randomBackgroundIndex;
            int randomColorIndex;

            // Setze den Farbcode für das aktuelle Zeichen basierend auf dem Bereich des Kunstwerks
            switch (artZones[i]) {
            case Landscape:
                randomBackgroundIndex = std::rand() % landscapeCharacters.size();
                randomColorIndex = std::rand() % colors.size();
                std::cout << colors[randomColorIndex] << landscapeCharacters[randomBackgroundIndex];
                break;
            case Foreground:
                randomBackgroundIndex = std::rand() % flowerCharacters.size();
                randomColorIndex = std::rand() % colors.size();
                std::cout << colors[randomColorIndex] << flowerCharacters[randomBackgroundIndex];
                break;
            case Other:
                randomBackgroundIndex = std::rand() % houseCharacters.size();
                randomColorIndex = std::rand() % colors.size();
                std::cout << colors[randomColorIndex] << houseCharacters[randomBackgroundIndex];
                break;
            }

            // Setze den Farbcode zurück auf den Standardwert
            std::cout << "\033[0m";
        }
        std::cout << std::endl;
    }
}