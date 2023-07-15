#include <iostream>
using namespace std;

int zcmain()
{
	cout << R"(
_____________________________________________________________________________

Hier ist eine Liste mit verschiedenen Syntaxzeichen in C++ und ihrer Bedeutung sowie ihrem Verwendungszweck:
iese Liste enthält verschiedene Syntaxzeichen in C++, die in unterschiedlichen Kontexten verwendet werden, 
um die Bedeutung und Struktur des Codes zu definieren. 
Es ist wichtig, die richtige Verwendung dieser Zeichen zu beachten, 
um Syntaxfehler zu vermeiden und den Code korrekt zu gestalten.

_____________________________________________________________________________

; (Semikolon):
   - Bedeutung: Das Semikolon wird verwendet, um Anweisungen in C++ zu beenden. Jede Anweisung muss mit einem Semikolon abgeschlossen werden.
   - Beispiel: `int x = 5;`
_____________________________________________________________________________

{ } (geschweifte Klammern):
   - Bedeutung: Geschweifte Klammern werden verwendet, um Blöcke von Code zu gruppieren. Sie definieren den Anfang und das Ende eines Codeblocks.
   - Beispiel:
     ```cpp
     for (int i = 0; i < 5; i++) {
         // Code innerhalb des Blocks
     }
     ```
_____________________________________________________________________________

() (runde Klammern):
   - Bedeutung: Runde Klammern werden in verschiedenen Kontexten verwendet, 
z. B. bei Funktionsaufrufen, Funktionsdeklarationen, Bedingungen usw.
   - Beispiel: `int sum = add(3, 5);`
_____________________________________________________________________________

[] (eckige Klammern):
   - Bedeutung: Eckige Klammern werden verwendet, um Arrays zu deklarieren 
und auf Elemente in einem Array oder Vektor zuzugreifen.
   - Beispiel:
     ```cpp
     int numbers[5]; // Array-Deklaration
     int x = numbers[2]; // Zugriff auf das dritte Element des Arrays
     ```
_____________________________________________________________________________

.  (Punkt):
   - Bedeutung: Der Punkt wird verwendet, um auf Member einer Klasse oder Struktur zuzugreifen.
   - Beispiel: `person.name = "John";`
_____________________________________________________________________________

-> (Pfeil):
   - Bedeutung: Der Pfeil wird verwendet, um auf Member eines Zeigers auf eine Klasse oder Struktur zuzugreifen.
   - Beispiel: `personPtr->name = "John";`
_____________________________________________________________________________

: (Doppelpunkt):
   - Bedeutung: Der Doppelpunkt hat verschiedene Verwendungszwecke, z. B. bei der Definition von Klassen, 
Strukturen, Switch-Case-Anweisungen und bei der Vererbung in der Objektorientierten Programmierung.
   - Beispiel:
     ```cpp
     class MyClass {
         // Klassenmember und -funktionen
     };
     
     switch (x) {
         case 1:
             // Code für Fall 1
             break;
         case 2:
             // Code für Fall 2
             break;
         default:
             // Code für alle anderen Fälle
     }
     ```
_____________________________________________________________________________

// (Doppelte Schrägstriche):
   - Bedeutung: Doppelte Schrägstriche werden verwendet, um Einzeilige Kommentare zu kennzeichnen. 
Der Text nach den doppelten Schrägstrichen wird von der Compiler ignoriert.
   - Beispiel: `// Dies ist ein Kommentar`
_____________________________________________________________________________

/* */ (Schrägstrichsternchen):
   - Bedeutung: Schrägstrichsternchen wird verwendet, um mehrzeilige Kommentare zu kennzeichnen. 
Der Text zwischen `/*` und `*/` wird von der Compiler ignoriert.
   - Beispiel:
     ```cpp
     /*
     Dies ist ein mehrzeiliger Kommentar
     */
     ```
_____________________________________________________________________________

" (Doppelte Anführungszeichen):
    - Bedeutung: Doppelte Anführungszeichen werden verwendet, um Zeichenketten (Strings) zu kennzeichnen.
    - Beispiel: `std::string name = "John";`
_____________________________________________________________________________

' (Einfache Anführungszeichen):
    - Bedeutung: Einfache Anführungszeichen werden verwendet, um einzelne Zeichen zu kennzeichnen.
    - Beispiel: `char ch = 'A';
_____________________________________________________________________________

# (Rautenzeichen):
   - Bedeutung: Das Rautenzeichen wird in Direktiven des Preprocessors verwendet, 
um Anweisungen für den Preprocessor zu kennzeichnen.
   - Beispiel: `#include <iostream>`
_____________________________________________________________________________
* (Sternchen):
   - Bedeutung: Das Sternchen wird in verschiedenen Kontexten verwendet, 
z. B. zur Deklaration von Zeigern, zur Multiplikation oder zur Dereferenzierung von Zeigern.
   - Beispiele: `int* ptr;`, `int result = a * b;`, `int value = *ptr;`
_____________________________________________________________________________

& (Ampersand):
   - Bedeutung: Das Ampersand wird in verschiedenen Kontexten verwendet, 
z. B. zur Deklaration von Referenzen, zum Erstellen von Verweisen oder als logischer AND-Operator.
   - Beispiele: `int& ref = variable;`, `int& getReference();`, `bool result = a && b;`
_____________________________________________________________________________

, (Komma):
   - Bedeutung: Das Komma wird in verschiedenen Kontexten verwendet, 
z. B. zur Trennung von Argumenten in Funktionsaufrufen oder als Operator für die Komma-Sequenz-Auswertung.
   - Beispiele: `function(a, b);`, `int a = 1, b = 2, c = 3;`, `int result = (a = 1, b = 2, a + b);`
_____________________________________________________________________________

+ (Plus):
   - Bedeutung: Das Pluszeichen wird als Operator für die Addition oder als Vorzeichenoperator verwendet.
   - Beispiele: `int result = a + b;`, `int value = +5;`
_____________________________________________________________________________

- (Minus):
   - Bedeutung: Das Minuszeichen wird als Operator für die Subtraktion oder als Vorzeichenoperator verwendet.
   - Beispiele: `int result = a - b;`, `int value = -5;`
_____________________________________________________________________________

/ (Schrägstrich):
   - Bedeutung: Der Schrägstrich wird als Operator für die Division verwendet.
   - Beispiel: `double result = a / b;`
_____________________________________________________________________________

% (Prozentzeichen):
   - Bedeutung: Das Prozentzeichen wird als Operator für den Modulo (Restwert) verwendet.
   - Beispiel: `int result = a % b;`
_____________________________________________________________________________

= (Gleichheitszeichen):
   - Bedeutung: Das Gleichheitszeichen wird verwendet, um Variablen Werte zuzuweisen oder Vergleichsoperationen durchzuführen.
   - Beispiele: `int a = 5;`, `bool isEqual = (a == b);`
_____________________________________________________________________________

== (Doppeltes Gleichheitszeichen):
    - Bedeutung: Das doppelte Gleichheitszeichen wird als Vergleichsoperator für die Gleichheit verwendet.
    - Beispiel: `bool isEqual = (a == b);`
_____________________________________________________________________________

!= (Ungleichheitszeichen):
    - Bedeutung: Das Ungleichheitszeichen wird als Vergleichsoperator für die Ungleichheit verwendet.
    - Beispiel: `bool isNotEqual = (a != b);`
_____________________________________________________________________________

< (Kleiner als):
    - Bedeutung: Der Kleiner-als-Operator vergleicht, ob ein Wert kleiner ist als ein anderer Wert.
    - Beispiel: `bool isSmaller = (a < b);`
_____________________________________________________________________________
> (Größer als):
    - Bedeutung: Der Größer-als-Operator vergleicht, ob ein Wert größer ist als ein anderer Wert.
    - Beispiel: `bool isGreater = (a > b);`
_____________________________________________________________________________

)";


	return 0;
}