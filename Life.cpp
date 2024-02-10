#include <sstream>
#include <Windows.h>
#include <cstdlib> 
#include <ctime>    
#include "Mainframe.h"
using namespace std;
// ASCII Art für die Spielflächen     BKCPDSRWFT
const string homeMap = R"(
+-------------------------+
|                         |   
|                         |   
|                         |   
|                         |   
|                         |   
|                         |   
+-------------------------+
)";

const string balconyMap = R"(
+--------------+
|              |
|     BB       |  
|              |
|              |
|              |
+--------------+
)";

const string hallwayMap = R"(
+--------------+
|  T   HT  KT   |  
|   H    K      |
|              |
|   B          |
|              |
+--------------+
)";

const string kitchenMap = R"(
+--------------+
|  KT          |   
|    K         |
|              |
+--------------+
)";

const string bathroomMap = R"(
+--------------+
|    BT        |   
|    B         |
|              |
+--------------+
)";

const string schoolMap = R"(
+------------------+
|   M    L         |   
|     C            |  
|  R  S  B         |
|                  | 
+------------------+
)";

const string streetMap = R"(
+------------------------+
|   N  L                 |   
|    A    P              |
|                        |
|                        |
| K                      |   
+------------------------+
)";
// Spielerposition auf der Karte
struct Position {
    int x;
    int y;
};
// Klasse für interaktive Objekte
class InteractiveObject {
public:
    InteractiveObject(const string& name, char symbol, const Position& position)
        : name(name), symbol(symbol), position(position) {}
    const string& getName() const { return name; }
    char getSymbol() const { return symbol; }
    const Position& getPosition() const { return position; } 
    Position& getPosition() { return position; } 
private:
    string name;   // Name des Objekts
    char symbol;        // Symbol, das das Objekt auf der Karte repräsentiert
    Position position;  // Position des Objekts auf der Karte
};
// Klasse für Spielfläche
class GameMap {
public:
    GameMap(const string& map)
        : map(map), width(28), height(16) {}
    void display() const {
        cout << map << endl;
    }
    void addObject(const InteractiveObject& object) {
        objects.push_back(object);
    }
    const string& getMap() const {
        return map;
    }
    const vector<InteractiveObject>& getObjects() const {
        return objects;
    }
    InteractiveObject* getObjectAtPosition(const Position& position) {
        for (auto& object : objects) {
            if (object.getPosition().x == position.x && object.getPosition().y == position.y) {
                return &object;
            }
        }
        return nullptr;
    }
    void updateMovingObjects() {
        for (auto& object : objects) {
            if (isMovingObject(object)) {
                moveObject(object);
            }
        }
    }
    int getWidth() const {
        return width;
    }
    int getHeight() const {
        return height;
    }
private:
    string map;                       // Spielfläche
    int width;                             // Breite der Spielfläche
    int height;                            // Höhe der Spielfläche
    vector<InteractiveObject> objects; // Vektor der interaktiven Objekte auf der Spielfläche
    bool isMovingObject(const InteractiveObject& object) const {
        // Überprüfen, ob das Objekt ein bewegliches Objekt ist (Nachbarn, andere Leute, Mitschüler)
        return object.getName() == "Nachbarn" || object.getName() == "Andere Leute" || object.getName() == "Mitschüler";
    }
    void moveObject(InteractiveObject& object) {
        // Zufällige Bewegung in eine der vier Richtungen (oben, unten, links, rechts)
        int direction = rand() % 4;
        Position newPosition = object.getPosition();
        switch (direction) {
        case 0:
            if (newPosition.y > 0) {
                newPosition.y--;
            }
            break;
        case 1:
            if (newPosition.y < height - 1) {
                newPosition.y++;
            }
            break;
        case 2:
            if (newPosition.x > 0) {
                newPosition.x--;
            }
            break;
        case 3:
            if (newPosition.x < width - 1) {
                newPosition.x++;
            }
            break;
        }
        // Aktualisieren der Position des Objekts
        object.getPosition() = newPosition;
    }
};
// Function to show the current map and interactive objects
void showMap(const GameMap& map, const Position& playerPosition) {
    clearScreen();
    string currentMap = map.getMap();
    const int width = map.getWidth();
    // Pad the currentMap string with spaces if needed
    while (currentMap.length() < (currentMap.find_first_of('\n') + 1) * width)
        currentMap += " ";
    for (const auto& object : map.getObjects()) {
        int index = (object.getPosition().y + 1) * (width + 1) + object.getPosition().x + 1;
        currentMap[index] = object.getSymbol();
    }
    int playerIndex = (playerPosition.y + 1) * (width + 1) + playerPosition.x + 1;
    currentMap[playerIndex] = 'P';
    cout << currentMap << endl;
}
// Funktion zum Steuern des Spielercharakters
void controlPlayer(Position& playerPosition, GameMap& currentMap, bool isMorning) {
    char input;
    cout << "Steuerung: (W = Hoch, S = Runter, A = Links, D = Rechts, E = Interagieren, Q = Beenden)\n";
    do {
        input = _getch();
        switch (input) {
        case 'w':
            if (playerPosition.y > 0) {
                playerPosition.y--;
            }
            break;
        case 's':
            if (playerPosition.y < currentMap.getHeight() - 1) {
                playerPosition.y++;
            }
            break;
        case 'a':
            if (playerPosition.x > 0) {
                playerPosition.x--;
            }
            break;
        case 'd':
            if (playerPosition.x < currentMap.getWidth() - 1) {
                playerPosition.x++;
            }
            break;
        case 'e':
            InteractiveObject * object = currentMap.getObjectAtPosition(playerPosition);
            if (object) {
                cout << "Interaktion mit " << object->getName() << endl;
                // Führen Sie hier die spezifische Logik für die Interaktion mit dem Objekt aus
                if (object->getName() == "Balkontür") {
                    cout << "Der Spieler betritt den Balkon\n";
                    currentMap = balconyMap;
                    playerPosition = { 4, 1 };
                    showMap(currentMap, playerPosition);
                }
                else if (object->getName() == "Flurtür") {
                    cout << "Der Spieler betritt den Flur\n";
                    currentMap = hallwayMap;
                    playerPosition = { 4, 0 };
                    showMap(currentMap, playerPosition);
                }
                else if (object->getName() == "Haustür") {
                    cout << "Der Spieler betritt das Haus\n";
                    currentMap = homeMap;
                    playerPosition = { 5, 1 };
                    showMap(currentMap, playerPosition);
                }
                else if (object->getName() == "Küchentür") {
                    cout << "Der Spieler betritt die Küche\n";
                    currentMap = kitchenMap;
                    playerPosition = { 2, 1 };
                    showMap(currentMap, playerPosition);
                }
                else if (object->getName() == "Badezimmertür") {
                    cout << "Der Spieler betritt das Badezimmer\n";
                    currentMap = bathroomMap;
                    playerPosition = { 2, 1 };
                    showMap(currentMap, playerPosition);
                }  
            }
            break;
        }
        showMap(currentMap, playerPosition);
    } while (input != 'q');
    // Tageszeit überprüfen
    if (isMorning) {
        // Cutscene am Morgen (z.B. Spieler geht zur Schule)
        cout << "Cutscene: Spieler geht zur Schule\n";
        currentMap = schoolMap;
        playerPosition = { 0, 0 };
        showMap(currentMap, playerPosition);
    }
    else {
        // Cutscene am Abend (z.B. Spieler kehrt nach Hause zurück)
        cout << "Cutscene: Spieler kehrt nach Hause zurück\n";
        currentMap = homeMap;
        playerPosition = { 0, 0 };
        showMap(currentMap, playerPosition);
    }
}
bool isMorning = true;
void performDailyRoutine(GameMap& home, bool isMorning) {
    //  Karten und Objekte
    if (home.getObjects().empty()) {
        home.addObject(InteractiveObject("Bett", 'B', { 5, 1 }));
        home.addObject(InteractiveObject("Kaffeemaschine", 'K', { 3, 1 }));
        home.addObject(InteractiveObject("Computer", 'C', { 7, 1 }));
        home.addObject(InteractiveObject("Zimmerpflanzen", 'P', { 5, 2 }));
        home.addObject(InteractiveObject("Dusche", 'D', { 3, 2 }));
        home.addObject(InteractiveObject("Sofa", 'S', { 9, 2 }));
        home.addObject(InteractiveObject("Kleiderschrank", 'F', { 3, 3 }));
        home.addObject(InteractiveObject("Kühlschrank", 'R', { 5, 3 }));
        home.addObject(InteractiveObject("Waschbecken", 'W', { 7, 3 }));
        home.addObject(InteractiveObject("Rucksack", 'B', { 9, 3 }));
        home.addObject(InteractiveObject("Balkontür", 'T', { 1, 4 }));
        home.addObject(InteractiveObject("Flurtür", 'T', { 0, 2 }));
        GameMap balcony(balconyMap);
        // Objekte auf dem Balkon 
        GameMap hallway(hallwayMap);
        hallway.addObject(InteractiveObject("Haustür", 'H', { 3, 1 }));
        hallway.addObject(InteractiveObject("Küchentür", 'K', { 7, 1 }));
        hallway.addObject(InteractiveObject("Badezimmertür", 'B', { 4, 3 }));
        GameMap kitchen(kitchenMap);
        // Objekte in der Küche 
        GameMap bathroom(bathroomMap);
        // Objekte im Badezimmer 
        GameMap school(schoolMap);
        school.addObject(InteractiveObject("Mitschüler", 'M', { 3, 1 }));
        school.addObject(InteractiveObject("Lehrer", 'L', { 8, 1 }));
        school.addObject(InteractiveObject("Computer", 'C', { 6, 2 }));
        school.addObject(InteractiveObject("Rucksack", 'B', { 9, 2 }));
        GameMap street(streetMap);
        street.addObject(InteractiveObject("Nachbarn", 'N', { 3, 1 }));
        street.addObject(InteractiveObject("Andere Leute", 'L', { 6, 1 }));
        street.addObject(InteractiveObject("Katze", 'K', { 9, 1 }));
        street.addObject(InteractiveObject("Ampel", 'A', { 5, 2 }));
        // Spielerposition und Startkarte
        Position playerPosition = { 0, 0 };
        GameMap* currentMap = &home;
        for (int day = 1; day <= 100; ++day) {
            cout << "Tag " << day << endl;
            cout << "Aufstehen, Kaffee trinken, Duschen, Schule, Heimweg, Essen, Abend ausklingen lassen, Ins Bett gehen\n";
            // Steuerung des Spielers
            controlPlayer(playerPosition, *currentMap, isMorning);
            // Aktualisieren der beweglichen Objekte
            currentMap->updateMovingObjects();
            // Tageszeit umschalten
            isMorning = !isMorning;
            // Speichern 
            ofstream saveFile("save.txt");
            saveFile << day;
            saveFile.close();
        }
    }
}
int lifemain() {
    // Laden des Spielstands
    ifstream saveFile("save.txt");
    int savedDay = 1;
    if (saveFile.good()) {
        saveFile >> savedDay;
    }
    saveFile.close();
    cout << "Willkommen zum Spiel!\n";
    // Fortsetzen des Spielstands oder neues Spiel starten
    char input;
    cout << "Möchten Sie den Spielstand fortsetzen? (j/n): ";
    cin >> input;
    if (input == 'j') {
        cout << "Lade Spielstand Tag " << savedDay << "\n";
        GameMap home(homeMap);
        // Perform the daily routine 
        for (int day = 1; day < savedDay; ++day) {
            performDailyRoutine(home, false);
            home.updateMovingObjects();
        }
        // Continue from the last loaded day
        performDailyRoutine(home, true);
    }
    else {
        cout << "Starte neues Spiel\n";
    }
    cout << "Spiel beendet\n";
    return 0;
}