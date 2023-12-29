#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "User.h"
#ifdef _WIN32
#include <conio.h> // Für _getch-Funktion (nur Windows)
#endif
using namespace std;
enum class TextColor {
    Black,
    Red,
    Green,
    Blue,
    Cyan,
    Magenta,
    Yellow,
    White
};

void setTextColor(TextColor color) {
    switch (color) {
    case TextColor::Black:
        cout << "\033[30m"; // Setzt die Textfarbe auf Schwarz
        break;
    case TextColor::Red:
        cout << "\033[31m"; // Setzt die Textfarbe auf Rot
        break;
    case TextColor::Green:
        cout << "\033[32m"; // Setzt die Textfarbe auf Grün
        break;
    case TextColor::Blue:
        cout << "\033[34m"; // Setzt die Textfarbe auf Blau
        break;
    case TextColor::Cyan:
        cout << "\033[36m"; // Setzt die Textfarbe auf Cyan
        break;
    case TextColor::Magenta:
        cout << "\033[35m"; // Setzt die Textfarbe auf Magenta
        break;
    case TextColor::Yellow:
        cout << "\033[33m"; // Setzt die Textfarbe auf Gelb
        break;
    case TextColor::White:
        cout << "\033[37m"; // Setzt die Textfarbe auf Weiß
        break;
    default:
        break;
    }
}

void resetTextColor() {
    cout << "\033[0m"; // Setzt die Textfarbe auf die Standardfarbe zurück
}

string getRandomElement(const vector<string>& elements) {
    int index = rand() % elements.size();
    return elements[index];
}

#ifdef _WIN32
bool isEscapeKeyPressed() {
    if (_kbhit()) {
        int key = _getch();
        if (key == 27) // Escape-Taste
            return true;
    }
    return false;
}
#else
// Hier Linux-/Mac-spezifischer Code für Tastaturabfrage einfügen
bool isEscapeKeyPressed() {
    // Dummy-Implementierung für Nicht-Windows-Systeme
    return false;
}
#endif

void generateStory(const vector<string>& storyParts, const vector<string>& nouns, const vector<string>& adjectives, const vector<string>& actions, const vector<string>& locations, const vector<string>& endings) {
    int numStoryParts = storyParts.size();
    int numNouns = nouns.size();
    int numAdjectives = adjectives.size();
    int numActions = actions.size();
    int numLocations = locations.size();
    int numEndings = endings.size();
    int numSentences = 10; // Anzahl der Sätze in der Geschichte

    for (int i = 0; i < numSentences; ++i) {
        string sentence;
        // Zufälliges Story-Part auswählen
        string storyPart = getRandomElement(storyParts);
        sentence += storyPart;
        // Zufällige Anzahl von Adjektiven auswählen
        int numAdjectivesInSentence = rand() % 2 + 1;
        for (int j = 0; j < numAdjectivesInSentence; ++j) {
            string adjective = getRandomElement(adjectives);
            sentence += adjective + " ";
        }

        // Zufälliges Nomen auswählen
        string noun = getRandomElement(nouns);
        sentence += noun;
        // Zufällige Anzahl von Aktionen auswählen
        int numActionsInSentence = rand() % 1 + 1;
        for (int j = 0; j < numActionsInSentence; ++j) {
            string action = getRandomElement(actions);
            sentence += " " + action;
        }

        // Zufälliger Ort auswählen
        string location = getRandomElement(locations);
        sentence += " " + location;
        // Zufälliges Ende hinzufügen
        string ending = getRandomElement(endings);
        sentence += " " + ending;
        // Zufällige Textfarbe auswählen
        TextColor randomColor = static_cast<TextColor>(rand() % static_cast<int>(TextColor::White) + 1);
        setTextColor(randomColor);
        cout << sentence << " ";
        resetTextColor();
        if (isEscapeKeyPressed()) {
            cout << endl << "Programm beendet." << endl;
            break;
        }
    }
}

int geschmain() {
    cout << endl << endl << endl << "                                               Hey  " << g_name <<  " !" << endl;
    cout << "\033[32m";  //Grün
    cout <<  R"(
                                                        ______
                                                      <((((((\\\
                                                      /      . }\
                                                      ;--..--._|}
                                   (\ ______          '--/\--'  )
                                    \\ ~~~~ \         | '-'  :'|
                                     \\ ~~~~ \        . -==- .-|
                                      \\ ~~~~ \        \.__.'   \--._
                                      [\\ _____\  __.--|       //  _/'--.
                                      \ \\       .'-._ ('-----'/ __/      \
                                       \ \\     /    __>|      | '--.       |
                                        \ \\   |    \   |     /    /       /
                                         \ '\ /  /'  \  |     |  _/       /
                                          \__\__/     \ |     | /        /
                                                      \  \      \        /  
)";
	cout << "\033[0m"; //Weiß
    cout << "                                     Welche Art von Geschichte soll ich dir erzählen?" << endl;
    cout << "                                             1. eine Lustige Geschichte" << endl;
    cout << "                                             2. eine Traurige Geschichte" << endl;
    cout << "                                             3. eine Zufällige Geschichte" << endl;
    cout << "                                            Triff deine Wahl (1, 2 oder 3): ";
    int option;
    cin >> option;
    bool isFunny = false;
    bool isSad = false;
    switch (option) {
    case 1:
        isFunny = true;
        break;
    case 2:
        isSad = true;
        break;
    case 3:
        break;
    default:
        cout << "Darüber kann ich dir nichts erzählen. Ich verabschiede mich vorerst." << endl;
        return 0;
    }
	bool generateAnotherStory = true; // Initialisierung
    while (generateAnotherStory) {
        cout << "Ich habe deine Geschichte fertig geschrieben. Drücke die Enter-Taste, um die Geschichte anzuzeigen...";
        cin.ignore(); // Ignoriere vorherige Eingaben
        cin.get(); // Warte auf Enter-Taste

        cout << "Hier ist deine Geschichte:" << endl;
        cout << "________________________________________________________________________________________________________________________";
        srand(time(nullptr)); // Initialisiert den Zufallssatzgenerator

        vector<string> storyParts;
        if (isFunny) {
            storyParts = {
                "Es war einmal ein lustiger ",
                "Eines Tages begegnete ein verrückter ",
                "Zu einer unbekannten Zeit war ein komischer ",
                "Am Anfang gab es einen witzigen ",
                "Einst gab es ein ",
                "Ein ",
                "Doch es wurde immer komischer. Ein ",
                "Sein Freund, ein ",
                "Vor nicht all zu langer Zeit war ein ",
                // ... lustige Satzanfänge 
            };
        }
		else if (isSad) { 
            storyParts = {
                "Es war einmal ein trauriger ",
                "Einst gab es ein einsames ",
                "In einem fernen Land lebte ein unglücklicher ",
                "Vor langer Zeit gab es einen verlassenen ",
                "Ein ",
                "Leider kam er zu spät, ein ",
                "Sein Freund, ein ",
                "In einem Land vor unserer Zeit war ein ",
                // ... traurige Satzanfänge
            };
        }
        else {
            storyParts = {
                "Es war einmal ein ",
                "Einst gab es ein",
                "In einem fernen Land lebte ein ",
                "Vor langer Zeit gab es einen ",
                "Es existierte einst ein ",
                "Eines Tages begegnete ein ",
                "Ein ",
                "Sein Freund, ein ",
                "Zu einer unbekannten Zeit war ein ",
                "..und er sah ein",
                "Am Anfang gab es einen ",  
                //...  zufällige Satzanfänge
            };
        }

        vector<string> nouns = {
            "Kevin", g_name , "Kater", "Vogel", "Bär", "Affe", "Elefant", "Löwe", "Tiger", "Hase", "Fisch", "Kühlschrank", "Roboter Namens Marvin", "Computer", "Delfin", "Dino", "Chefkoch", "Rüdiger", "Steffen", "Klaus", "Geist", "Influencer", "Informatiker", "König", "Zauberer", "Pilot", "Astronaut", "Detektiv", "Werwolf", "Hacker", "Mandaloreaner", "Hobbit", "Waldelf", "Karsten", "Sheriff", "Polizist", "Marsianer", "junger Padawan", "Indianer", "Woookie", "Zwerg"
        };

        vector<string> adjectives = {
            "kleiner", "großer", "freundlicher", "mutiger", "schlauer", "schneller", "ruhiger", "starker", "lustiger", "neugieriger", "glücklicher", "träumerischer", "lebendiger", "merkwürdiger", "verärgerter", "ruchloser", "erschrockener", "trauriger", "geheimnisvoller", "abenteuerlustiger", "tapferer", "toller", "verwirrter" , "neugieriger", "faszinierter", "wirrer", "verpeilter"
        };

        vector<string> actions = {
            "spielte", "rannte", "sprang", "kletterte", "flog", "lief", "versteckte sich", "schlief", "tanzte", "lachte", "sang", "las", "spielte", "rollte", "warf einen Stein", "fand einen Schatz", "löste ein Rätsel", "rettete", "verfolgte", "löschte", "erschuf", "gluckste vergnügt", "seufzte", "stolperte", "räusperte", "wanderte", "spazierte", "tanzte","galoppierte","duckte", "rannte", "sprung", "träumte"
        };

        vector<string> locations = {
            "im Wald", "auf dem Berg", "am Strand", "in der Stadt", "im Park", "im Zoo", "in einer Höhle", "im Schloss", "im Garten", "im Ozean", "auf einer Insel", "in einer Wüste", "am Johannisplatz", "um die Ecke", "in einer anderen Galaxie", "in einer Paralleldimension", "in der Matrix", "Gegenüber vom Penny", "im Raumschiff", "vor dem Stargate", "auf dem Spielplatz", "im Büro", "in der Herrentoilette", "auf dem Bahnsteig", "in London", "irgendwo in Leipzig", "im Kirschblütenwald", "im Block gegenüber", "im Fitnesscenter", "in einem Märchenland", "unter Wasser", "in Amsterdam", "in New York", "in der Schule", "beim Abendessen", "auf einer Beerdigung", "auf der Spitze des Mount Everest", "in Mordor", "im Auenland", "irgendwo auf dem Mars", "auf dem Mond", "auf einer einsamen Insel", "Im Dschungel von Patagonien", "in dem unterirdischen Tunnelsystem eines kleinen Jupitermondes", "in den Pariser Katakomben", "am Südpol", "im inneren der Erde", "vor den Toren Rohans", "im Aldi", "in einer Bar"
        };

        vector<string> endings = {
            "und lebte glücklich bis ans Ende seiner Tage.",
            "und entdeckte dabei ein unglaubliches Geheimnis.",
            "und wurde zum Helden der gesamten Region.",
            "und gewann dadurch die Herzen aller Menschen.",
            "und wurde zur Legende, die noch heute erzählt wird.",
            "lol",
            "bis Kevin plötzlich vorbeikam.",
            "..im Hintergrund flog unbemerkt ein Raumschiff vorbei.",
            "während am anderen Ende der Welt eine Alieninvasion begann.",
            "dort verbrachte er noch einen schönen Tag.",
            "nachdem er noch einen kleinen Mittagsschlaf gemacht hatte.",
            "bis er aufwachte und feststellte, es war alles nur ein Traum.",
            "bis ihm einfiel, dass er heute noch einen wichtigen Termin hatte.",
            "dort wurde ihm dann schlagartig bewusst, in welcher Situation er sich befand.",
            "unbemerkt lief ein Zauberer an ihm vorbei.",
            "und wurde von allen gefeiert.",
            "und lernte eine wichtige Lektion.",
            "und fand sein wahres Glück.",
            "und machte sich auf die Suche nach Abenteuern.",
            "und wurde von einem herabfliegenden Klavier erschlagen.",
            "kurz darauf stolperte er über einen Stein.",
            "und der Mond zog langsam über den Himmel des Planeten.",
            "und er spürte ein Aufflackern der Macht.",
            "und fand seinen wahren Lebenszweck.",
            "und erkannte, dass der Weg das Ziel war.",
            "und entdeckte eine verborgene Schatzkammer.",
            "und wurde zum Anführer einer großen Gemeinschaft.",
            "und veränderte die Welt für immer.",
            "und öffnete eine Tür zu einer neuen Dimension.",
            "und erreichte seine größte Stärke.",
            "und gewann den Wettbewerb.",
            "und fand den Schlüssel zum Glück.",
            "und wurde zum König der Lüfte.",
            "und erfüllte sich seinen größten Wunsch.",
            "und eroberte die Herzen aller Menschen.",
            "und löste das Rätsel des alten Tempels.",
            "und lernte die wahre Bedeutung von Freundschaft.",
            "und wurde zum Schutzengel für seine Mitmenschen.",
            "und tanzte unter dem Sternenhimmel.",
            "und hinterließ eine unvergessliche Legende.",
            "und machte die Welt zu einem besseren Ort.",
            "und verzauberte alle mit seinem Charme.",
            "und erhielt den Titel des Meisterdetektivs.",
            "und bewies, dass Träume wahr werden können.",
            "und die Nacht brach langsam herein.",
            "Ende.",
            "und alle waren glücklich.",
            ". Währenddessen flog unbemerkt ein Raumschiff am Mond vorbei.",
            ". Als es am nächsten Morgen erwachte verspührte er große Kopfschmerzen.",
            "   To Be Continuend..",
            ". Die Jahre vergingen und die Unruhen in den großen Städten wurden immer mehr.",
            ". Doch nun ist schon viel Zeit seit damals vergangen..",
            ". Er lachte.",
            ". Dies war ihm eine Lektion fürs Leben.",
            ". ..Ich hoffe dich langweilen meine Geschichten nicht..  ",
            ". Dies sollte der Anfang einer langen Reise werden.",
            ". ..Tut mir leid.. ich war kurz abgelenkt durch diese nette neue KI Assistentin die mir der Admin letztens eingebaut hat.. *hust' wo war ich grad?  ",
            ". Doch die Geschichte geht weiter: ",
            ". Viele Jahre vergingen.. ",
            " ... ",
            ". Mit dieser Aktion hatte er auf jeden Fall großes Aufsehen erregt.",
            ". Kurz darauf passierte es dann: ",
            ". Dabei wollte er doch nur helfen.",
            ". ..Die Tage vergingen.. ",
            ". Damit hätte er nie im Leben gerechnet.",
            ". In der Ferne hörte man die Eisenbahn",
            ". Er war glücklich darüber.",
            ". Er wusste noch nichts davon wo ihn sein Schicksal als nächstes hinführen sollte",
            " und er dachte sich nur so: Ach wär ich doch lieber mal Zuhause geblieben.",
            ". Dies sollte der Anfang einer langen Reise für ihn sein.",
            ". Durch diese Aktion riss er ein Loch in das Raum-Zeit Kontinuum."

        };
         generateStory(storyParts, nouns, adjectives, actions, locations, endings);
         cout << endl << "Soll ich dir noch eine Geschichte erzählen? ";
         cout << " Mit der Escape Taste kannst du auch ins Hauptmenü zurückzukehren..";
         char choice = _getch();
		 if (choice == 27) {  //Escape
             generateAnotherStory = false;
        }
    } 
	return 0;
}