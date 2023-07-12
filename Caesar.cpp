//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <vector>
//#include <conio.h> // Für _getch-Funktion (nur Windows)
//
//enum class TextColor {
//    Black,
//    Red,
//    Green,
//    Blue,
//    Cyan,
//    Magenta,
//    Yellow,
//    White
//};
//
//void setTextColor(TextColor color) {
//    switch (color) {
//    case TextColor::Black:
//        std::cout << "\033[30m"; // Setzt die Textfarbe auf Schwarz
//        break;
//    case TextColor::Red:
//        std::cout << "\033[31m"; // Setzt die Textfarbe auf Rot
//        break;
//    case TextColor::Green:
//        std::cout << "\033[32m"; // Setzt die Textfarbe auf Grün
//        break;
//    case TextColor::Blue:
//        std::cout << "\033[34m"; // Setzt die Textfarbe auf Blau
//        break;
//    case TextColor::Cyan:
//        std::cout << "\033[36m"; // Setzt die Textfarbe auf Cyan
//        break;
//    case TextColor::Magenta:
//        std::cout << "\033[35m"; // Setzt die Textfarbe auf Magenta
//        break;
//    case TextColor::Yellow:
//        std::cout << "\033[33m"; // Setzt die Textfarbe auf Gelb
//        break;
//    case TextColor::White:
//        std::cout << "\033[37m"; // Setzt die Textfarbe auf Weiß
//        break;
//    default:
//        break;
//    }
//}
//
//void resetTextColor() {
//    std::cout << "\033[0m"; // Setzt die Textfarbe auf die Standardfarbe zurück
//}
//
//std::string getRandomElement(const std::vector<std::string>& elements) {
//    int index = rand() % elements.size();
//    return elements[index];
//}
//
//bool isEscapeKeyPressed() {
//#ifdef _WIN32
//    if (_kbhit()) {
//        int key = _getch();
//        if (key == 27) // Escape-Taste
//            return true;
//    }
//#else
//    // Hier Linux-/Mac-spezifischer Code für Tastaturabfrage einfügen
//#endif
//    return false;
//}
//
//int main() {
//    std::srand(std::time(nullptr)); // Initialisiert den Zufallszahlengenerator
//
//    std::vector<std::string> storyParts = {
//        "Es war einmal ein ",
//        "In einem fernen Land lebte ein ",
//        "Vor langer Zeit gab es einen ",
//        "Es existierte einst ein ",
//        "Eines Tages begegnete ein "
//    };
//
//    std::vector<std::string> nouns = {
//        "Hund", "Katze", "Vogel", "Bär", "Affe", "Elefant", "Löwe", "Tiger", "Hase", "Pferd", "Eichhörnchen", "Krokodil"
//    };
//
//    std::vector<std::string> adjectives = {
//        "kleiner", "großer", "freundlicher", "mutiger", "schlauer", "schneller", "ruhiger", "starker", "lustiger", "neugieriger", "glücklicher", "träumerischer"
//    };
//
//    std::vector<std::string> actions = {
//        "spielte", "rannte", "sprang", "kletterte", "flog", "lief", "versteckte sich", "schlief", "tanzte", "lachte", "sang", "las"
//    };
//
//    std::vector<std::string> locations = {
//        "im Wald", "auf dem Berg", "am Strand", "in der Stadt", "im Park", "im Zoo", "in einer Höhle", "im Schloss", "im Garten", "im Ozean", "auf einer Insel", "in einer Wüste"
//    };
//
//    std::vector<std::string> endings = {
//        "und lebte glücklich bis ans Ende seiner Tage.",
//        "und entdeckte dabei ein unglaubliches Geheimnis.",
//        "und wurde zum Helden der gesamten Region.",
//        "und gewann dadurch die Herzen aller Menschen.",
//        "und wurde zur Legende, die noch heute erzählt wird."
//    };
//
//    int numStoryParts = storyParts.size();
//    int numNouns = nouns.size();
//    int numAdjectives = adjectives.size();
//    int numActions = actions.size();
//    int numLocations = locations.size();
//    int numEndings = endings.size();
//
//    int numSentences = 20; // Anzahl der Sätze in der Geschichte
//
//    for (int i = 0; i < numSentences; ++i) {
//        std::string sentence;
//
//        // Zufälliges Story-Part auswählen
//        std::string storyPart = getRandomElement(storyParts);
//        sentence += storyPart;
//
//        // Zufällige Anzahl von Adjektiven auswählen
//        int numAdjectivesInSentence = std::rand() % 3 + 1;
//        for (int j = 0; j < numAdjectivesInSentence; ++j) {
//            std::string adjective = getRandomElement(adjectives);
//            sentence += adjective + " ";
//        }
//
//        // Zufälliges Nomen auswählen
//        std::string noun = getRandomElement(nouns);
//        sentence += noun;
//
//        // Zufällige Anzahl von Aktionen auswählen
//        int numActionsInSentence = std::rand() % 3 + 1;
//        for (int j = 0; j < numActionsInSentence; ++j) {
//            std::string action = getRandomElement(actions);
//            sentence += " " + action;
//        }
//
//        // Zufälliger Ort auswählen
//        std::string location = getRandomElement(locations);
//        sentence += " " + location;
//
//        // Zufälliges Ende hinzufügen
//        std::string ending = getRandomElement(endings);
//        sentence += " " + ending;
//
//        // Zufällige Textfarbe auswählen
//        TextColor randomColor = static_cast<TextColor>(std::rand() % static_cast<int>(TextColor::White) + 1);
//        setTextColor(randomColor);
//
//        std::cout << sentence << " ";
//
//        resetTextColor();
//
//        if (isEscapeKeyPressed()) {
//            std::cout << std::endl << "Programm beendet." << std::endl;
//            break;
//        }
//    }
//
//    return 0;
//}
