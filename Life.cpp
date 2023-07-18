//#include <iostream>
//#include <conio.h>
//#include <fstream>
//#include <vector>
//#include <cstdlib>  // F�r die Funktion "system"
//#include <ctime>    // F�r die Funktion "time"
//
//// ASCII Art f�r die Spielfl�chen
//const std::string homeMap = R"(
//+--------------+
//|   B          |   // Bett
//|  K  C  P     |   // Kaffeemaschine, Computer, Zimmerpflanzen
//|  D  S        |   // Dusche, Sofa
//|  F  R  W     |   // Kleiderschrank, K�hlschrank, Waschbecken
//|  T           |   // Balkont�r
//+--------------+
//)";
//
//const std::string balconyMap = R"(
//+--------------+
//|              |
//|     BB       |   // Balkon
//|              |
//|              |
//|              |
//+--------------+
//)";
//
//const std::string hallwayMap = R"(
//+--------------+
//|  T   HT  KT   |   // Flurt�r, Haust�r, K�chent�r
//|   H    K     |
//|              |
//|   B          |
//|              |
//+--------------+
//)";
//
//const std::string kitchenMap = R"(
//+--------------+
//|  KT          |   // K�chent�r
//|    K         |
//|              |
//|              |
//|              |
//+--------------+
//)";
//
//const std::string bathroomMap = R"(
//+--------------+
//|    BT        |   // Badezimmert�r
//|    B         |
//|              |
//|              |
//|              |
//+--------------+
//)";
//
//const std::string schoolMap = R"(
//+--------------+
//|   M    L     |   // Mitsch�ler, Lehrer
//|     C        |   // Computer
//|  R  S  B     |   // Rucksack
//+--------------+
//)";
//
//const std::string streetMap = R"(
//+--------------+
//|   N  L  K     |   // Nachbarn, Andere Leute, Katze
//|    A    P    |   // Ampel
//+--------------+
//)";
//
//// Spielerposition auf der Karte
//struct Position {
//    int x;
//    int y;
//};
//
//// Klasse f�r interaktive Objekte
//class InteractiveObject {
//public:
//    InteractiveObject(const std::string& name, char symbol, const Position& position)
//        : name(name), symbol(symbol), position(position) {}
//
//    const std::string& getName() const { return name; }
//    char getSymbol() const { return symbol; }
//    const Position& getPosition() const { return position; }
//
//private:
//    std::string name;   // Name des Objekts
//    char symbol;        // Symbol, das das Objekt auf der Karte repr�sentiert
//    Position position;  // Position des Objekts auf der Karte
//};
//
//// Klasse f�r Spielfl�che
//class GameMap {
//public:
//    GameMap(const std::string& map)
//        : map(map), width(14), height(8) {}
//
//    void display() const {
//        std::cout << map << std::endl;
//    }
//
//    void addObject(const InteractiveObject& object) {
//        objects.push_back(object);
//    }
//
//    const std::vector<InteractiveObject>& getObjects() const {
//        return objects;
//    }
//
//    InteractiveObject* getObjectAtPosition(const Position& position) {
//        for (auto& object : objects) {
//            if (object.getPosition().x == position.x && object.getPosition().y == position.y) {
//                return &object;
//            }
//        }
//        return nullptr;
//    }
//
//    void updateMovingObjects() {
//        for (auto& object : objects) {
//            if (isMovingObject(object)) {
//                moveObject(object);
//            }
//        }
//    }
//
//    int getWidth() const {
//        return width;
//    }
//
//    int getHeight() const {
//        return height;
//    }
//
//private:
//    std::string map;                       // ASCII Art f�r die Spielfl�che
//    int width;                             // Breite der Spielfl�che
//    int height;                            // H�he der Spielfl�che
//    std::vector<InteractiveObject> objects; // Vektor der interaktiven Objekte auf der Spielfl�che
//
//    bool isMovingObject(const InteractiveObject& object) const {
//        // �berpr�fen, ob das Objekt ein bewegliches Objekt ist (Nachbarn, andere Leute, Mitsch�ler)
//        return object.getName() == "Nachbarn" || object.getName() == "Andere Leute" || object.getName() == "Mitsch�ler";
//    }
//
//    void moveObject(InteractiveObject& object) {
//        // Zuf�llige Bewegung in eine der vier Richtungen (oben, unten, links, rechts)
//        int direction = rand() % 4;
//        Position newPosition = object.getPosition();
//
//        switch (direction) {
//        case 0:
//            if (newPosition.y > 0) {
//                newPosition.y--;
//            }
//            break;
//        case 1:
//            if (newPosition.y < height - 1) {
//                newPosition.y++;
//            }
//            break;
//        case 2:
//            if (newPosition.x > 0) {
//                newPosition.x--;
//            }
//            break;
//        case 3:
//            if (newPosition.x < width - 1) {
//                newPosition.x++;
//            }
//            break;
//        }
//
//        // Aktualisieren der Position des Objekts
//        object.getPosition() = newPosition;
//    }
//};
//
//// Funktion zum Zeigen der aktuellen Karte und interaktiver Objekte
//void showMap(const GameMap& map, const Position& playerPosition) {
//    std::string currentMap = map.display();
//    for (const auto& object : map.getObjects()) {
//        int index = object.getPosition().y * (map.getWidth() + 1) + object.getPosition().x + 1;
//        currentMap[index] = object.getSymbol();
//    }
//    int playerIndex = playerPosition.y * (map.getWidth() + 1) + playerPosition.x + 1;
//    currentMap[playerIndex] = 'P';
//    std::cout << currentMap << std::endl;
//}
//
//// Funktion zum Steuern des Spielercharakters
//void controlPlayer(Position& playerPosition, GameMap& currentMap, bool isMorning) {
//    char input;
//    std::cout << "Steuerung: (W = Hoch, S = Runter, A = Links, D = Rechts, E = Interagieren, Q = Beenden)\n";
//    do {
//        input = _getch();
//        switch (input) {
//        case 'w':
//            if (playerPosition.y > 0) {
//                playerPosition.y--;
//            }
//            break;
//        case 's':
//            if (playerPosition.y < currentMap.getHeight() - 1) {
//                playerPosition.y++;
//            }
//            break;
//        case 'a':
//            if (playerPosition.x > 0) {
//                playerPosition.x--;
//            }
//            break;
//        case 'd':
//            if (playerPosition.x < currentMap.getWidth() - 1) {
//                playerPosition.x++;
//            }
//            break;
//        case 'e':
//            InteractiveObject * object = currentMap.getObjectAtPosition(playerPosition);
//            if (object) {
//                std::cout << "Interaktion mit " << object->getName() << std::endl;
//                // F�hren Sie hier die spezifische Logik f�r die Interaktion mit dem Objekt aus
//                if (object->getName() == "Balkont�r") {
//                    std::cout << "Der Spieler betritt den Balkon\n";
//                    currentMap = balconyMap;
//                    playerPosition = { 4, 1 };
//                    showMap(currentMap, playerPosition);
//                }
//                else if (object->getName() == "Flurt�r") {
//                    std::cout << "Der Spieler betritt den Flur\n";
//                    currentMap = hallwayMap;
//                    playerPosition = { 4, 0 };
//                    showMap(currentMap, playerPosition);
//                }
//                else if (object->getName() == "Haust�r") {
//                    std::cout << "Der Spieler betritt das Haus\n";
//                    currentMap = homeMap;
//                    playerPosition = { 5, 1 };
//                    showMap(currentMap, playerPosition);
//                }
//                else if (object->getName() == "K�chent�r") {
//                    std::cout << "Der Spieler betritt die K�che\n";
//                    currentMap = kitchenMap;
//                    playerPosition = { 2, 1 };
//                    showMap(currentMap, playerPosition);
//                }
//                else if (object->getName() == "Badezimmert�r") {
//                    std::cout << "Der Spieler betritt das Badezimmer\n";
//                    currentMap = bathroomMap;
//                    playerPosition = { 2, 1 };
//                    showMap(currentMap, playerPosition);
//                }
//            }
//            break;
//        }
//        showMap(currentMap, playerPosition);
//    } while (input != 'q');
//
//    // Tageszeit �berpr�fen
//    if (isMorning) {
//        // Cutscene am Morgen (z.B. Spieler geht zur Schule)
//        std::cout << "Cutscene: Spieler geht zur Schule\n";
//        currentMap = schoolMap;
//        playerPosition = { 0, 0 };
//        showMap(currentMap, playerPosition);
//    }
//    else {
//        // Cutscene am Abend (z.B. Spieler kehrt nach Hause zur�ck)
//        std::cout << "Cutscene: Spieler kehrt nach Hause zur�ck\n";
//        currentMap = homeMap;
//        playerPosition = { 0, 0 };
//        showMap(currentMap, playerPosition);
//    }
//}
//
//// Funktion zum Ausf�hren des Alltagsablaufs
//void performDailyRoutine() {
//    // Erstellen der Karten und Objekte
//    GameMap home(homeMap);
//    home.addObject(InteractiveObject("Bett", 'B', { 5, 1 }));
//    home.addObject(InteractiveObject("Kaffeemaschine", 'K', { 3, 1 }));
//    home.addObject(InteractiveObject("Computer", 'C', { 7, 1 }));
//    home.addObject(InteractiveObject("Zimmerpflanzen", 'P', { 5, 2 }));
//    home.addObject(InteractiveObject("Dusche", 'D', { 3, 2 }));
//    home.addObject(InteractiveObject("Sofa", 'S', { 9, 2 }));
//    home.addObject(InteractiveObject("Kleiderschrank", 'F', { 3, 3 }));
//    home.addObject(InteractiveObject("K�hlschrank", 'R', { 5, 3 }));
//    home.addObject(InteractiveObject("Waschbecken", 'W', { 7, 3 }));
//    home.addObject(InteractiveObject("Rucksack", 'B', { 9, 3 }));
//    home.addObject(InteractiveObject("Balkont�r", 'T', { 1, 4 }));
//    home.addObject(InteractiveObject("Flurt�r", 'T', { 0, 2 }));
//
//    GameMap balcony(balconyMap);
//    // Objekte auf dem Balkon hinzuf�gen (falls erforderlich)
//
//    GameMap hallway(hallwayMap);
//    hallway.addObject(InteractiveObject("Haust�r", 'H', { 3, 1 }));
//    hallway.addObject(InteractiveObject("K�chent�r", 'K', { 7, 1 }));
//    hallway.addObject(InteractiveObject("Badezimmert�r", 'B', { 4, 3 }));
//
//    GameMap kitchen(kitchenMap);
//    // Objekte in der K�che hinzuf�gen (falls erforderlich)
//
//    GameMap bathroom(bathroomMap);
//    // Objekte im Badezimmer hinzuf�gen (falls erforderlich)
//
//    GameMap school(schoolMap);
//    school.addObject(InteractiveObject("Mitsch�ler", 'M', { 3, 1 }));
//    school.addObject(InteractiveObject("Lehrer", 'L', { 8, 1 }));
//    school.addObject(InteractiveObject("Computer", 'C', { 6, 2 }));
//    school.addObject(InteractiveObject("Rucksack", 'B', { 9, 2 }));
//
//    GameMap street(streetMap);
//    street.addObject(InteractiveObject("Nachbarn", 'N', { 3, 1 }));
//    street.addObject(InteractiveObject("Andere Leute", 'L', { 6, 1 }));
//    street.addObject(InteractiveObject("Katze", 'K', { 9, 1 }));
//    street.addObject(InteractiveObject("Ampel", 'A', { 5, 2 }));
//
//    // Spielerposition und Startkarte
//    Position playerPosition = { 0, 0 };
//    GameMap* currentMap = &home;
//
//    bool isMorning = true;
//    for (int day = 1; day <= 100; ++day) {
//        std::cout << "Tag " << day << std::endl;
//        std::cout << "Aufstehen, Kaffee trinken, Duschen, Schule, Heimweg, Essen, Abend ausklingen lassen, Ins Bett gehen\n";
//
//        // Steuerung des Spielers
//        controlPlayer(playerPosition, *currentMap, isMorning);
//
//        // Aktualisieren der beweglichen Objekte
//        currentMap->updateMovingObjects();
//
//        // Tageszeit umschalten
//        isMorning = !isMorning;
//
//        // Speichern des Spielstands
//        std::ofstream saveFile("save.txt");
//        saveFile << day;
//        saveFile.close();
//    }
//}
//
//int main() {
//    // Laden des Spielstands
//    std::ifstream saveFile("save.txt");
//    int savedDay = 1;
//    if (saveFile.good()) {
//        saveFile >> savedDay;
//    }
//    saveFile.close();
//
//    // Begr��ung
//    std::cout << "Willkommen zum Spiel!\n";
//
//    // Fortsetzen des Spielstands oder neues Spiel starten
//    char input;
//    std::cout << "M�chten Sie den Spielstand fortsetzen? (j/n): ";
//    std::cin >> input;
//
//    if (input == 'j') {
//        std::cout << "Lade Spielstand Tag " << savedDay << "\n";
//        // Implementieren Sie hier die Logik zum Laden des Spielstands und Fortsetzen des Spiels
//    }
//    else {
//        std::cout << "Starte neues Spiel\n";
//        // Maximiere das Konsolenfenster
//        system("mode 650");
//        // Seed f�r die Zufallszahlengenerierung initialisieren
//        std::srand(static_cast<unsigned int>(std::time(nullptr)));
//        performDailyRoutine();
//    }
//
//    std::cout << "Spiel beendet\n";
//    return 0;
//}
