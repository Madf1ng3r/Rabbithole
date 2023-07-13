#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Art.h"

void generateAsciiArt() {
    // Hier kannst du den Code zur Generierung deines ASCII-Kunstwerks einf�gen
    // Verwende den Zufallszahlengenerator, um die erforderlichen Zeichenfolgen und Farbcodes zu generieren
    // Du kannst Arrays von ASCII-Zeichen und Farbcodes verwenden, um verschiedene Symbole und Farben auszuw�hlen

    // Beispielcode zur Generierung eines zuf�lligen ASCII-Kunstwerks mit Farben
    srand(time(0));  // Zufallszahlengenerator initialisieren

    // Array mit verschiedenen Zeichen f�r das Kunstwerk
    const char characters[] = { '@', '#', '$', '%', '&', '*', '^', ' ', '�', ',', '_' };

    // Array mit verschiedenen Farbcodes
    const std::string colors[] = {
        "\033[0;31m",  // Rot
        "\033[0;32m",  // Gr�n
        "\033[0;33m",  // Gelb
        "\033[0;34m",  // Blau
        "\033[0;35m",  // Magenta
        "\033[0;36m"   // Cyan
    };

    const int artworkSize = 24; // Gr��e des Kunstwerks

    for (int i = 0; i < artworkSize; i++) {
        for (int j = 0; j < artworkSize; j++) {
            // Generiere eine zuf�llige Zahl von 0 bis zur Anzahl der Zeichen im Array
            int randomCharIndex = rand() % (sizeof(characters) / sizeof(char));

            // Generiere eine zuf�llige Zahl von 0 bis zur Anzahl der Farbcodes im Array
            int randomColorIndex = rand() % (sizeof(colors) / sizeof(std::string));

            // W�hle ein zuf�lliges ASCII-Zeichen und Farbcode aus dem Array
            char asciiChar = characters[randomCharIndex];
            std::string colorCode = colors[randomColorIndex];

            // Setze den Farbcode f�r das aktuelle Zeichen
            std::cout << colorCode << asciiChar;

            // Setze den Farbcode zur�ck auf den Standardwert
            std::cout << "\033[0m";
        }
        std::cout << std::endl;
    }
}

int artmain() {
    std::cout << "Ich habe dies f�r sie gemahlt:";
    generateAsciiArt();

    return 0;
}
