#include <iostream>
#include <conio.h> // Für _getch-Funktion
#include <cmath>
#include <string>
#include <vector>
#include "Mainframe.h"
using namespace std;
void example1() {
    cout << "Beispiel 1: Einfache Ausgabe auf der Konsole" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Dieses Beispiel zeigt, wie Text auf der Konsole ausgegeben wird." << endl;
    cout << "Der Befehl cout << wird verwendet, um den Text auszugeben." << endl;
    cout << endl;
    // Eigentliche Funktion
    cout << "Hallo, Welt!" << endl;
    cout << endl;
}
void example2() {
    cout << "Beispiel 2: Eingabe von Benutzerdaten" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Dieses Beispiel zeigt, wie Benutzereingaben über die Konsole entgegengenommen werden." << endl;
    cout << "Der Befehl cin >> wird verwendet, um Daten vom Benutzer einzulesen." << endl;
    cout << "string name "  << endl;
	cout << "cin >> name" << endl;
    // Eigentliche Funktion
    string name;
    cout << "Geben Sie Ihren Namen ein: ";
    cin >> name;
    cout << "Hallo, " << name << "!" << endl;
    cout << endl;
}
void example3() {
    cout << "Beispiel 3: Berechnung der Summe zweier Zahlen" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Dieses Beispiel zeigt, wie die Summe zweier Zahlen berechnet wird." << endl;
    cout << "Die Zahlen werden vom Benutzer eingegeben und die Summe wird berechnet." << endl;
    cout << endl;
    // Eigentliche Funktion
    int a, b;
	cout << "int a, b: " << endl;
    cout << "Geben Sie die erste Zahl ein: ";
    cin >> a;
    cout << "Geben Sie die zweite Zahl ein: ";
    cin >> b;
    int sum = a + b;
    cout << "int sum = a + b" << endl;
    cout << "Die Summe von " << a << " und " << b << " ist " << sum << endl;
    cout << endl;
}
void example4() {
    cout << "Beispiel 4: Bedingte Anweisung mit if-else" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Dieses Beispiel zeigt, wie bedingte Anweisungen mit if-else in C++ verwendet werden." << endl;
    cout << "Der Befehl if wird verwendet, um eine Bedingung zu überprüfen und entsprechenden Code auszuführen." << endl;
    cout << "Wenn die Bedingung wahr ist, wird der Code im if-Block ausgeführt. Andernfalls wird der Code im else-Block ausgeführt." << endl;
    cout << endl;
    // Eigentliche Funktion
    int number = 7;
    if (number % 2 == 0) {
        cout << number << " ist eine gerade Zahl." << endl;
    }
    else {
        cout << number << " ist eine ungerade Zahl." << endl;
    }
    cout << endl;
}
// Eigentliche Funktion
int square(int x) {
    return x * x;
}
void example5() {
    cout << "Beispiel 5: Verwendung einer Funktion mit Rückgabewert" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Dieses Beispiel zeigt, wie Funktionen mit Rückgabewert in C++ verwendet werden." << endl;
    cout << "Eine Funktion kann einen Wert berechnen und diesen mit dem Rückgabewert zurückgeben." << endl;
    cout << "In diesem Beispiel wird eine Funktion namens square(x) definiert, die das Quadrat einer Zahl berechnet." << endl;
    cout << "Die Funktion wird aufgerufen und das Ergebnis wird ausgegeben." << endl;
    cout << endl;
    int number = 4;
    int result = square(number);
    cout << "Das Quadrat von " << number << " ist " << result << endl;
    cout << endl;
}

void example6() {
    cout << "Beispiel 6: Verwendung der Standardbibliothek math" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Dieses Beispiel zeigt, wie mathematische Funktionen aus der C++-Standardbibliothek verwendet werden." << endl;
    cout << "In diesem Beispiel werden die Funktionen sin(x), cos(x) und sqrt(x) verwendet." << endl;
    cout << "Diese Funktionen berechnen den Sinus, Kosinus und die Quadratwurzel einer Zahl." << endl;
    cout << "Die Ergebnisse werden ausgegeben." << endl;
    cout << endl;
    // Eigentliche Funktion
    double x = 3.14;
    double sineValue = sin(x);
    double cosineValue = cos(x);
    double squareRoot = sqrt(x);
    cout << "Sinus von " << x << ": " << sineValue << endl;
    cout << "Kosinus von " << x << ": " << cosineValue << endl;
    cout << "Quadratwurzel von " << x << ": " << squareRoot << endl;
    cout << endl;
}
void example7() {
    cout << "Beispiel 7: Verwendung des ternären Operators" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Der ternäre Operator ermöglicht es Ihnen, bedingte Ausdrücke in einer kompakten Form zu schreiben." << endl;
    cout << "Er hat die Form: bedingung ? ausdruck1 : ausdruck2" << endl;
    cout << "Wenn die Bedingung wahr ist, wird ausdruck1 ausgewertet, ansonsten wird ausdruck2 ausgewertet." << endl;
    cout << "Das Ergebnis des ternären Operators wird ausgegeben." << endl;
    cout << endl;
    // Eigentliche Funktion
    int number = 5;
    string message = (number > 0) ? "Die Zahl ist positiv." : "Die Zahl ist nicht positiv.";
    cout << message << endl;
    cout << endl;
}
void example8() {
    cout << "Beispiel 8: Verwendung des Vektors aus der Standardbibliothek" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Ein Vektor ist eine dynamische Datenstruktur, die es Ihnen ermöglicht, eine Liste von Elementen zu speichern." << endl;
    cout << "Sie können Elemente hinzufügen, entfernen und auf Elemente im Vektor zugreifen." << endl;
    cout << "In diesem Beispiel wird ein Vektor mit Ganzzahlen erstellt und mit einigen Werten gefüllt." << endl;
    cout << "Die Elemente des Vektors werden ausgegeben." << endl;
	cout << "for (int i = 0; i < numbers.size(); i++)" << endl;
    cout << endl;
    // Eigentliche Funktion
    vector<int> numbers; 
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    cout << "Elemente des Vektors: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;
}
void example9() {
    cout << "Beispiel 9: Verwendung von Vektoren" << endl;
    cout << "---------------------------------" << endl;
    cout << "Ein Vektor ist eine dynamische Datenstruktur, die automatisch ihre Größe anpasst." << endl;
    cout << "In diesem Beispiel wird ein Vektor von Ganzzahlen erstellt und mit Werten gefüllt." << endl;
    cout << "Die Elemente des Vektors können mit dem Befehl cout << ausgegeben werden." << endl;
    cout << endl;
    // Eigentliche Funktion
    vector<int> numbers = { 1, 2, 3, 4, 5 };
    cout << "Inhalt des Vektors: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
    cout << endl;
}
void example10() {
    cout << "Beispiel 10: Verwendung einer while-Schleife" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Eine while-Schleife führt eine Aktion aus, solange eine Bedingung erfüllt ist." << endl;
    cout << "In diesem Beispiel wird eine while-Schleife verwendet, um die Zahlen von 1 bis 5 auszugeben." << endl;
    cout << "Die Schleife wird mit dem Befehl while(bedingung) eingerichtet." << endl;
    cout << "In jedem Schleifendurchlauf wird die Zahl mit cout << ausgegeben." << endl;
    cout << endl;
    // Eigentliche Funktion
    int i = 1;
    cout << "Zahlen von 1 bis 5: ";
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    cout << endl;
}
void example11() {
    cout << "Beispiel 11: Verwendung einer do-while-Schleife" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Eine do-while-Schleife führt eine Aktion mindestens einmal aus und überprüft dann eine Bedingung." << endl;
    cout << "In diesem Beispiel wird eine do-while-Schleife verwendet," << endl;
    cout << "um die Zahlen von 1 bis 5 auf der Konsole auszugeben." << endl;
    cout << "Die Schleife wird mit dem Befehl do {...} while(bedingung) eingerichtet." << endl;
    cout << "In jedem Schleifendurchlauf wird die Zahl mit cout << ausgegeben." << endl;
    cout << endl;
    // Eigentliche Funktion
    int i = 1;
    cout << "Zahlen von 1 bis 5: ";
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;
    cout << endl;
}
void example12() {
    cout << "Beispiel 12: Verwendung von switch-case" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Die switch-case-Anweisung ermöglicht die Ausführung von Codeblöcken," << endl;
    cout << "abhängig von einem bestimmten Ausdruck oder Wert." << endl;
    cout << "In diesem Beispiel wird eine switch-case-Anweisung verwendet," << endl;
    cout << "um den Wochentag basierend auf einem Zahlenwert auszugeben." << endl;
    cout << "Der Befehl cout << wird verwendet, um das Ergebnis auszugeben." << endl;
	cout << "int day = 4" << endl;
    cout << endl;
    // Eigentliche Funktion
    int day = 4;
    string dayName;
    switch (day) {
    case 1:
        dayName = "Montag";
        break;
    case 2:
        dayName = "Dienstag";
        break;
    case 3:
        dayName = "Mittwoch";
        break;
    case 4:
        dayName = "Donnerstag";
        break;
    case 5:
        dayName = "Freitag";
        break;
    case 6:
        dayName = "Samstag";
        break;
    case 7:
        dayName = "Sonntag";
        break;
    default:
        dayName = "Ungültiger Tag";
        break;
    }
    cout << "Der Tag mit der Nummer " << day << " ist " << dayName << endl;
    cout << endl;
}
void example13() {
    cout << "Beispiel 13: Verwendung von break in einer Schleife" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Der Befehl break ermöglicht es Ihnen, eine Schleife vorzeitig zu beenden." << endl;
    cout << "In diesem Beispiel wird eine for-Schleife verwendet," << endl;
    cout << "um die Zahlen von 1 bis 10 auf der Konsole auszugeben." << endl;
    cout << "Wenn die Zahl 5 erreicht wird, wird die Schleife mit break beendet." << endl;
    cout << "Der Befehl cout << wird verwendet, um die Zahlen auszugeben." << endl;
    cout << endl;
    // Eigentliche Funktion
    cout << "Zahlen von 1 bis 10 (mit break bei 5): ";
	cout << " for (int i = 1; i <= 10; i++) { " << endl;
	cout << "     if (i == 5) { " << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
}
void example14() {
    cout << "Beispiel 14: Verwendung von continue in einer Schleife" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Der Befehl continue ermöglicht es Ihnen, den aktuellen Schleifendurchlauf zu überspringen" << endl;
    cout << "und mit dem nächsten Schleifendurchlauf fortzufahren." << endl;
    cout << "In diesem Beispiel wird eine for-Schleife verwendet," << endl;
    cout << "um die Zahlen von 1 bis 10 auf der Konsole auszugeben." << endl;
    cout << "Wenn die Zahl durch 3 teilbar ist, wird der aktuelle Schleifendurchlauf mit continue übersprungen." << endl;
    cout << "Der Befehl cout << wird verwendet, um die Zahlen auszugeben." << endl;
    cout << endl;
    // Eigentliche Funktion
    cout << "Zahlen von 1 bis 10 (mit continue bei Zahlen, die durch 3 teilbar sind): ";
    cout << " for (int i = 1; i <= 10; i++) { " << endl;
    cout << "     if (i % 3 == 0) { " << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
}

string tiere[] = { "Hirsch", "Ratte", "Wildschwein", "Elch", "Vogel", "Eule", "Hummel", "Reh", "Hase" };
void stringo() {
    cout << R"(
User gibt Tiernamen ein, Ausgabe: das Tier gibt es oder nicht
)";
    string suche;
    cin >> suche;
   
    bool found = false;
    for (int i = 0; i < 9; i++) {
        if (tiere[i] == suche) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Ja";
    }
    else {
        cout << "Nein";
    }
}

void stringi() {
    cout << R"(
Ausgabe aller Tiere des Index 
)";
    int index = 0, anzahl;
    while (index < 9)
    {
        string wort = tiere[index];
        anzahl = wort.length();
        int buch = 0;
        while (buch < anzahl) {
            cout << wort[buch] << " ";
            buch++;
        }
        cout << endl;
        index++;
    }
}

int bcmain() {
    char userInput;
    bool exitRequested = false;
    while (!exitRequested) {
        cout << endl << "Wählen Sie ein Beispiel (1-14) zum Ausführen oder drücken Sie ESC zum Beenden: " << endl << endl << endl;
        cout << "1.  Ausgabe         " << endl;
        cout << "2.  Eingabe         "<< endl;
        cout << "3.  Addition        " << endl;
        cout << "4.  if - else       " << endl;
        cout << "5.  Funktion mit Rückgabewert" << endl;
        cout << "6.  Cmath Bibliothek " << endl;
        cout << "7.  Operator         " << endl;
        cout << "8.  Vektor 1         " << endl;
        cout << "9.  Vektor 2         " << endl;
        cout << "10. while Schleife   " << endl;
        cout << "11. do while Schleife" << endl;
        cout << "12. switch case      " << endl;
        cout << "13. break Schleife   " << endl;
        cout << "14. continue Schleife" << endl;
        cout << "15. String           " << endl;
        cout << "16. String gesamt    " << endl;
     /*   R"(
                                                                  _______________________________________________________
                                                                 / _____________________________________________________  )
                                                                / ]                                                       \
                                                               / _______________________________________________________   |
                                                               |  |------------------------                               |  |
                                                               |  | ' 1.                                                  |  |    
                                                               |  | ' 2.                                                  |  |     
                                                               |  | ' 3.                                                  |  |     
                                                               |  | ' 4.                                                  |  |     
                                                               |  | ' 5.                                                  |  |    
                                                               |  | ' 6.                                                  |  |     
                                                               |  | ' 7.                                                  |  |     
                                                               |  | ' 8.                                                  |  |     
                                                               |  | ' 9.                                                  |  |     
                                                               |  | '10.                                                  |  |     
                                                               |  | ' 0.                                                  |  |     
                                                               |  | @-------------------- - |  |
                                                               |  |------------------------------------------------------ - |  |
                                                               |__________________________________________________________|  /
                                                                 (__________________________________________________________ /
                                                              ______ /                  [___________]
                                                            /
                                                           (_________________________________________________________________
                                                         / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __
                                                        / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / (  )
                                                       / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #     /  (__)
                                                      /__________________________________________________________________/
            )";*/
        userInput = _getch();
        cout << endl;
        switch (userInput) {
        case '1':
            example1();
            break;
        case '2':
            example2();
            break;
        case '3':
            example3();
            break;
        case '4':
            example4();
            break;
        case '5':
            example5();
            break;
        case '6':
            example6();
            break;
        case '7':
            example7();
            break;
        case '8':
            example8();
            break;
        case '9':
            example9();
            break;
        case '10':
            example10();
            break;
        case '11':
            example11();
            break;
        case '12':
            example12();
            break;
        case '13':
            example13();
            break;
        case '14':
            example14();
            break;
        case '15':
            stringo();
            break;
        case 27: // Escape-Taste
            exitRequested = true;
            break;
        default:
            cout << "Ungültige Eingabe! Bitte wählen Sie eine Zahl von 1 bis 9 oder drücken Sie ESC zum Beenden." << endl;
            cout << endl;
            break;
        }
    }
    return 0;
}