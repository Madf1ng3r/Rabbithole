#include <iostream>
using namespace std;

int codemain() {

	cout << R"( 
_________________________________________________________________________________

Definitionen des C++ Codes:

Hier ist eine Liste mit einigen h�ufig verwendeten C++-Befehlen und ihren Funktionen:

_________________________________________________________________________________

cout - Wird verwendet, um Daten auf der Konsole auszugeben. 
_________________________________________________________________________________

cin - Wird verwendet, um Daten von der Konsole einzulesen.
_________________________________________________________________________________

if - Wird verwendet, um eine bedingte Anweisung auszuf�hren, abh�ngig vom Wahrheitswert einer Bedingung.
_________________________________________________________________________________

else - Wird zusammen mit `if` verwendet, um einen alternativen Codeblock auszuf�hren, 
wenn die Bedingung falsch sind.
_________________________________________________________________________________

switch - Wird verwendet, um zwischen verschiedenen Codepfaden basierend auf dem Wert einer Variablen zu w�hlen.
_________________________________________________________________________________

break - Wird verwendet, um eine Schleife oder einen `switch`-Block vorzeitig zu beenden.
_________________________________________________________________________________

continue - Wird verwendet, um den aktuellen Schleifendurchlauf zu beenden
und mit dem n�chsten Durchlauf fortzufahren.
_________________________________________________________________________________

return - Wird verwendet, um den Wert einer Funktion zur�ckzugeben und die Funktion zu beenden.
_________________________________________________________________________________

int - Definiert eine Variable vom Typ Ganzzahl.
_________________________________________________________________________________

float - Definiert eine Variable vom Typ Gleitkommazahl mit einfacher Genauigkeit.
_________________________________________________________________________________

double - Definiert eine Variable vom Typ Gleitkommazahl mit doppelter Genauigkeit.
_________________________________________________________________________________

char - Definiert eine Variable vom Typ Zeichen.
_________________________________________________________________________________
bool - Definiert eine Variable vom Typ Wahrheitswert (`true` oder `false`).
_________________________________________________________________________________

void - Wird verwendet, um anzuzeigen, dass eine Funktion keinen R�ckgabewert hat.
_________________________________________________________________________________

class - Wird verwendet, um eine Klasse zu definieren.
_________________________________________________________________________________

struct - �hnlich wie `class`, jedoch standardm��ig mit �ffentlichem Zugriff.
_________________________________________________________________________________

new - Wird verwendet, um Speicherplatz f�r ein Objekt auf dem Heap zu reservieren.
_________________________________________________________________________________

delete - Wird verwendet, um den Speicherplatz, der mit `new` reserviert wurde, freizugeben.
_________________________________________________________________________________

const - Wird verwendet, um eine Variable als konstant zu deklarieren, 
deren Wert nach der Initialisierung nicht ge�ndert werden kann.
_________________________________________________________________________________

static - Wird verwendet, um eine Variable oder Funktion zu deklarieren,
die im Kontext der Klasse oder Funktion erhalten bleibt und nicht jedes Mal neu erstellt wird.
_________________________________________________________________________________

namespace - Wird verwendet, um den G�ltigkeitsbereich von Bezeichnern zu steuern,
um Konflikte zwischen verschiedenen Bibliotheken oder Namen zu vermeiden.
_________________________________________________________________________________

string _  Der Datentyp `string` wird verwendet, um Zeichenketten in C++ darzustellen.    
_________________________________________________________________________________

bool - Der Datentyp `bool` wird verwendet, um Wahrheitswerte darzustellen. 
Eine Variable vom Typ `bool` kann entweder den Wert `true` (wahr) oder `false` (falsch) haben.  
_________________________________________________________________________________

switch - Das `switch`-Schl�sselwort wird verwendet, 
um zwischen verschiedenen Codepfaden basierend auf dem Wert einer Variablen zu w�hlen.
_________________________________________________________________________________

case - Das `case`-Schl�sselwort wird innerhalb einer `switch`-Anweisung verwendet, 
um einen bestimmten Fall zu definieren. Es wird verwendet, um zu �berpr�fen, 
ob der Wert der Variable mit dem Wert im `case` �bereinstimmt.
_________________________________________________________________________________

ignore - In Bezug auf Strings gibt es keine spezifische `ignore`-Anweisung. 
Es ist m�glich, Zeichenketten zu ignorieren oder bestimmte Zeichen zu �berspringen, 
indem Sie den entsprechenden Code entsprechend gestalten.
_________________________________________________________________________________

get - Es gibt keinen spezifischen Befehl oder Schl�sselwort namens `get` in C++. 
Allerdings wird `get` oft in Funktionen verwendet, um Werte von Benutzern oder Eingabestr�men zu erhalten.
_________________________________________________________________________________
array - Das Schl�sselwort `array` wird verwendet, um eine Sammlung von mehreren Elementen desselben Datentyps, zu definieren.
_________________________________________________________________________________

_getch() - Die Funktion `_getch()` ist Teil der C-Bibliothek `<conio.h>` und wird verwendet, 
um eine einzelne Taste vom Benutzer einzulesen, ohne dass sie auf der Konsole angezeigt wird. 
Diese Funktion wird oft verwendet, um Benutzereingaben ohne Echounterdr�ckung zu erfassen.
_________________________________________________________________________________

_kbhit() - Die Funktion `_kbhit()` ist Teil der C-Bibliothek `<conio.h>` und wird verwendet, 
um zu �berpr�fen, ob eine Taste auf der Tastatur gedr�ckt wurde, ohne dass das Programm blockiert wird. 
Sie gibt einen Wert ungleich Null zur�ck, wenn eine Taste gedr�ckt wurde, andernfalls gibt sie 0 zur�ck.
Diese Funktion wird oft in Konsolenanwendungen verwendet, um Benutzereingaben zu �berwachen, 
w�hrend das Programm weiterhin ausgef�hrt wird.
_________________________________________________________________________________

return - Das Schl�sselwort `return` wird verwendet, um den Wert einer Funktion zur�ckzugeben und die Funktion zu beenden. 
Es kann auch verwendet werden, um den vorzeitigen Ausstieg aus einer Funktion zu erm�glichen, 
bevor das Ende des Funktionsk�rpers erreicht wird. Der zur�ckgegebene Wert kann entweder ein Wert oder ein Zeiger auf ein Objekt sein,
abh�ngig von der Deklaration und dem R�ckgabetyp der Funktion.
_________________________________________________________________________________

for - Eine Schleife, die eine bestimmte Anzahl von Iterationen durchl�uft. 
Sie besteht aus einer Initialisierung, einer Bedingung und einem Iterationsschritt.
   Beispiel:
   ```cpp
   for (initialisierung; bedingung; iterationsschritt) {
       // Code, der wiederholt ausgef�hrt wird
   }
   ```
_________________________________________________________________________________

while - Eine Schleife, die so lange ausgef�hrt wird, wie eine Bedingung wahr ist. 
Die Bedingung wird vor jeder Iteration �berpr�ft.
   Beispiel:
   ```cpp
   while (bedingung) {
       // Code, der wiederholt ausgef�hrt wird
   }
   ```
_________________________________________________________________________________

do-while - �hnlich wie die `while`-Schleife, jedoch wird die Bedingung am Ende der Schleife �berpr�ft. 
Dadurch wird sichergestellt, dass der Schleifenk�rper mindestens einmal ausgef�hrt wird.
   Beispiel:
   ```cpp
   do {
       // Code, der wiederholt ausgef�hrt wird
   } while (bedingung);
   ```
_________________________________________________________________________________

range-based for - Eine spezielle Art von `for`-Schleife, die verwendet wird, 
um �ber die Elemente einer Sammlung zu iterieren, z. B. ein Array oder einen Container.
   Beispiel:
   ```cpp
   for (datentyp element : sammlung) {
       // Code, der f�r jedes Element ausgef�hrt wird
   }
   ```
__________________________________________________________________________________

break - Wird innerhalb einer Schleife verwendet, 
um die Schleife vorzeitig zu beenden und den Code nach der Schleife auszuf�hren.
   Beispiel:
   ```cpp
   while (bedingung) {
       if (bedingung) {
           break; // Schleife vorzeitig beenden
       }
   }
   ```
____________________________________________________________________________________

continue - Wird innerhalb einer Schleife verwendet, 
um den aktuellen Schleifendurchlauf zu beenden und mit dem n�chsten Durchlauf fortzufahren.
   Beispiel:
   ```cpp
   for (int i = 0; i < 5; i++) {
       if (i == 3) {
           continue; // Aktuellen Durchlauf beenden und mit dem n�chsten fortfahren
       }
       // Code, der f�r alle Durchl�ufe au�er bei i = 3 ausgef�hrt wird
   }
   ```
_____________________________________________________________________________________________
_____________________________________________________________________________________________

)";

return 0;

}