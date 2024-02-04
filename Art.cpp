#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <conio.h>
#include "Art.h"
#include <random>
#include "User.h"
#include "Mainframe.h"
using namespace std;
enum ArtType {
    LandscapeArt,
    AlienArt,
    SpaceshipArt
};
template<typename T>
T getRandomElement(const vector<T>& vec) {
    return vec[rand() % vec.size()];
}

void generateAsciiArt(ArtType artType) {
    srand(static_cast<unsigned>(time(0))); // Zufallszahlengenerator initialisieren
    // Arrays mit verschiedenen Zeichen für verschiedene Arten von Kunstwerken
    vector<vector<char>> artCharacters;
    artCharacters.push_back({ '.', ':', '"', '^', '~', '-', '<', '#', '>', ';', '+', '*', '_', '|' });                     // Landschaft
    artCharacters.push_back({ 'A', 'E', 'I', 'O', 'U', 'Y', ',', '-', '"', '=', '_', '|', '/', '+', '@', '#', '~'});                       // Alien
    artCharacters.push_back({ '/', '|', '\\', '_', '#', '@', '+', '*', '<', '>', '.', '~', ';', '"', ','}); // Raumschiff
    // Arrays mit verschiedenen Farbcodes für jede Art von Kunstwerk
    vector<vector<string>> artColors;
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
    const int artworkSize = 20; // Größe des Kunstwerks
    switch (artType) {
    case LandscapeArt: {
        int randomCharacterIndex = rand() % artCharacters[artType].size();
        int randomColorIndex = rand() % artColors[artType].size();
        char landscapeCharacter = artCharacters[artType][randomCharacterIndex];
        string colorCode = artColors[artType][randomColorIndex];
        for (int i = 0; i < artworkSize; i++) {
            for (int j = 0; j < artworkSize; j++) {
                // Zufallszahlengenerator
                bool useRandomCharacter = (rand() % 4 == 0);
                bool useRandomColor = (rand() % 4 == 0);
                if (useRandomCharacter) {
                    char randomCharacter = getRandomElement(artCharacters[artType]);
                    cout << getRandomElement(artColors[artType]) << randomCharacter;
                }
                else {
                    cout << getRandomElement(artColors[artType]);
                    if (useRandomColor) {
                        cout << ' ';
                    }
                    else {
                        cout << landscapeCharacter;
                    }
                }
            }
            cout << "\033[0m" << endl;
        }
        break;
    }
    case AlienArt: {
        int randomColorIndex = rand() % artColors[artType].size();
        string colorCode = artColors[artType][randomColorIndex];
        for (int i = 0; i < artworkSize; i++) {
            for (int j = 0; j < artworkSize; j++) {
                int randomCharacterIndex = rand() % artCharacters[artType].size();
                char alienCharacter = artCharacters[artType][randomCharacterIndex];
                cout << colorCode << alienCharacter;
            }
            cout << "\033[0m" << endl;
        }
        break;
    }
    case SpaceshipArt: {
        int randomColorIndex = rand() % artColors[artType].size();
        string colorCode = artColors[artType][randomColorIndex];
        for (int i = 0; i < artworkSize; i++) {
            for (int j = 0; j < artworkSize; j++) {
                if (rand() % 5 == 0) {
                    int randomCharacterIndex = rand() % artCharacters[artType].size();
                    char spaceshipCharacter = artCharacters[artType][randomCharacterIndex];
                    cout << colorCode << spaceshipCharacter;
                }
                else {
                    int randomColorIndex = rand() % artColors[artType].size();
                    string currentColorCode = artColors[artType][randomColorIndex];
                    cout << currentColorCode << ' ';
                }
            }
            cout << "\033[0m" << endl;
        }
        break;
    }
    default:
        cout << "Ungültige Auswahl. Standardmäßig wird ein Landschaftsbild generiert." << endl;
        generateAsciiArt(LandscapeArt);
        break;
    }
}
int artmain() {
    int choice;
    do { 
        if (_kbhit()) {
            char keyPressed = _getch(); 
            if (keyPressed == 27) { //  ASCII code für esc Taste
                cout << "Auf Wiedersehen!" << endl;
                return 0;
            }
        }
    cout << "\033[1;32m"; // Setzt die Farbe auf hellgrün
    cout << R"(
                                                    
                                                                                                                                                                                                                                            
                                                 
                                                     
                                                           


                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |------------------------                               |  |     
                                                  |  |                                                       |  |    
                                                  |  |                                                       |  |     
                                                  |  |                                      -''--.           |  |     
                                                  |  |                                     _`>   `\.-'<      |  |     
                                                  |  | Was darf ich für sie Malen?      _.'     _     '._    |  |    
                                                  |  | ________________               .'   _.='   '=._   '.  |  |     
                                                  |  | 1. Landschaft  :                >_   / /_\ /_\ \   _< |  |     
                                                  |  | 2. Alien       :                  / (  \o/\\o/  ) \   |  |     
                                                  |  | 3. Raumschiff  :                  >._\ .-,_)-. /_.<   |  |     
                                                  |  | ________________                      /__/ \__\       |  |     
                                                  |  |                                         '---'         |  |     
                                                  |  | @---------------------                                |  |     
                                                  |  |-------------------------------------------------------|  |
                                                  |__________________________________________________________|  /      
                                                    (__________________________________________________________/        
                                                 ______/              [___________]                                     
                                               /                                                                        
                                              (_________________________________________________________________        
                                             / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __  
                                            /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # / (  )  
                                           /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /  (__)  
                                          /__________________________________________________________________/          
)";
    cout << "\033[0m"; // Setzt die Farbe zurück auf den Standardwert
	cout << "                                                Hallo " << g_name << "!" << endl;
    cin >> choice;
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
        cout << "Ungültige Auswahl. Standardmäßig wird ein Landschaftsbild generiert." << endl;
        artType = LandscapeArt;
        break;
    }
    generateAsciiArt(artType);
    cout << "Drücken sie 1 wenn ich ein weiteres Bild malen soll oder kehre mit einer anderen Taste zum Hauptmenü zurück. ";
    char again;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    cin >> again;
    if (again != '1' && again != '1') {
        clearScreen();
        break;
     }
    } 
   while (true);
   return 0;
}