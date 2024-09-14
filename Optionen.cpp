#include "Mainframe.h"
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;
// Funktion zum Ändern der Textfarbe
void SetTextColor(int colorCode) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
}
// Funktion zum Ändern der Hintergrundfarbe
void SetBackgroundColor(int colorCode) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
}
// Funktion zum Generieren einer zufälligen Zahl im Bereich [min, max]
int GenerateRandomNumber(int min, int max) {
    return min + (rand() % (max - min + 1));
}
// Funktion zum Speichern der letzten Auswahl in einer Datei
void SaveLastChoice(int choice) {
    ofstream file("last_choice.txt");
    if (file.is_open()) {
        file << choice;
        file.close();
    }
}
// Funktion zum Laden der letzten Auswahl aus der Datei
int LoadLastChoice() {
    int lastChoice = 1; // Standardwert
    ifstream file("last_choice.txt");
    if (file.is_open()) {
        file >> lastChoice;
        file.close();
    }
    return lastChoice;
}
int optionenmain() {
    int choice = LoadLastChoice(); // Lade die letzte Auswahl
    // Initialisiere den Zufallszahlengenerator mit der aktuellen Zeit
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        cout << "Optionsmenue:" << endl << endl;
        cout << "1. Hintergrundfarbe aendern" << endl;
        cout << "2. Textfarbe aendern" << endl;
        cout << "3. Zufaellige Zahl generieren" << endl;
        cout << "4. Zurueck zum Hauptmenue" << endl << endl;
        cout << "Waehle eine Option (1-4): ";
        cin >> choice;
        const int FOREGROUND_WHITE = 15; //Farbcode
        switch (choice) {
        case 1:
            // Zufällige Hintergrundfarbe
            SetBackgroundColor(GenerateRandomNumber(0, 15));
            break;
        case 2:
            // Zufällige Textfarbe
            SetTextColor(GenerateRandomNumber(0, 15));
            cout << "Textfarbe geaendert!" << endl;
            SetTextColor(FOREGROUND_WHITE); // Zurücksetzen auf Weiß
            break;
        case 3:
            // Zufällige Zahl generieren und anzeigen
            cout << "Zufaellige Zahl: " << GenerateRandomNumber(1, 100) << endl;
            break;
        case 4:
            cout << "Optionen werden (hoffentlich) uebernommen." << endl;
            break;
        default:
            cout << "Ungültige Auswahl. Bitte versuche es erneut." << endl;
        }
        SaveLastChoice(choice); // Speichere die aktuelle Auswahl
    } while (choice != 4);
    return 0;
}