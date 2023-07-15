#include <iostream>
using namespace std;

int codemain() {

	cout << R"( 
_________________________________________________________________________________

Definitionen des C++ Codes:

Hier ist eine Liste mit einigen häufig verwendeten C++-Befehlen und ihren Funktionen:

_________________________________________________________________________________

cout - Wird verwendet, um Daten auf der Konsole auszugeben. 
_________________________________________________________________________________

cin - Wird verwendet, um Daten von der Konsole einzulesen.
_________________________________________________________________________________

if - Wird verwendet, um eine bedingte Anweisung auszuführen, abhängig vom Wahrheitswert einer Bedingung.
_________________________________________________________________________________

else - Wird zusammen mit `if` verwendet, um einen alternativen Codeblock auszuführen, 
wenn die Bedingung falsch sind.
_________________________________________________________________________________

switch - Wird verwendet, um zwischen verschiedenen Codepfaden basierend auf dem Wert einer Variablen zu wählen.
_________________________________________________________________________________

break - Wird verwendet, um eine Schleife oder einen `switch`-Block vorzeitig zu beenden.
_________________________________________________________________________________

continue - Wird verwendet, um den aktuellen Schleifendurchlauf zu beenden
und mit dem nächsten Durchlauf fortzufahren.
_________________________________________________________________________________

return - Wird verwendet, um den Wert einer Funktion zurückzugeben und die Funktion zu beenden.
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

void - Wird verwendet, um anzuzeigen, dass eine Funktion keinen Rückgabewert hat.
_________________________________________________________________________________

class - Wird verwendet, um eine Klasse zu definieren.
_________________________________________________________________________________

struct - Ähnlich wie `class`, jedoch standardmäßig mit öffentlichem Zugriff.
_________________________________________________________________________________

new - Wird verwendet, um Speicherplatz für ein Objekt auf dem Heap zu reservieren.
_________________________________________________________________________________

delete - Wird verwendet, um den Speicherplatz, der mit `new` reserviert wurde, freizugeben.
_________________________________________________________________________________

const - Wird verwendet, um eine Variable als konstant zu deklarieren, 
deren Wert nach der Initialisierung nicht geändert werden kann.
_________________________________________________________________________________

static - Wird verwendet, um eine Variable oder Funktion zu deklarieren,
die im Kontext der Klasse oder Funktion erhalten bleibt und nicht jedes Mal neu erstellt wird.
_________________________________________________________________________________

namespace - Wird verwendet, um den Gültigkeitsbereich von Bezeichnern zu steuern,
um Konflikte zwischen verschiedenen Bibliotheken oder Namen zu vermeiden.
_________________________________________________________________________________

string _  Der Datentyp `string` wird verwendet, um Zeichenketten in C++ darzustellen.    
_________________________________________________________________________________

bool - Der Datentyp `bool` wird verwendet, um Wahrheitswerte darzustellen. 
Eine Variable vom Typ `bool` kann entweder den Wert `true` (wahr) oder `false` (falsch) haben.  
_________________________________________________________________________________

switch - Das `switch`-Schlüsselwort wird verwendet, 
um zwischen verschiedenen Codepfaden basierend auf dem Wert einer Variablen zu wählen.
_________________________________________________________________________________

case - Das `case`-Schlüsselwort wird innerhalb einer `switch`-Anweisung verwendet, 
um einen bestimmten Fall zu definieren. Es wird verwendet, um zu überprüfen, 
ob der Wert der Variable mit dem Wert im `case` übereinstimmt.
_________________________________________________________________________________

ignore - In Bezug auf Strings gibt es keine spezifische `ignore`-Anweisung. 
Es ist möglich, Zeichenketten zu ignorieren oder bestimmte Zeichen zu überspringen, 
indem Sie den entsprechenden Code entsprechend gestalten.
_________________________________________________________________________________

get - Es gibt keinen spezifischen Befehl oder Schlüsselwort namens `get` in C++. 
Allerdings wird `get` oft in Funktionen verwendet, um Werte von Benutzern oder Eingabeströmen zu erhalten.
_________________________________________________________________________________
array - Das Schlüsselwort `array` wird verwendet, um eine Sammlung von mehreren Elementen desselben Datentyps, zu definieren.
_________________________________________________________________________________

_getch() - Die Funktion `_getch()` ist Teil der C-Bibliothek `<conio.h>` und wird verwendet, 
um eine einzelne Taste vom Benutzer einzulesen, ohne dass sie auf der Konsole angezeigt wird. 
Diese Funktion wird oft verwendet, um Benutzereingaben ohne Echounterdrückung zu erfassen.
_________________________________________________________________________________

_kbhit() - Die Funktion `_kbhit()` ist Teil der C-Bibliothek `<conio.h>` und wird verwendet, 
um zu überprüfen, ob eine Taste auf der Tastatur gedrückt wurde, ohne dass das Programm blockiert wird. 
Sie gibt einen Wert ungleich Null zurück, wenn eine Taste gedrückt wurde, andernfalls gibt sie 0 zurück.
Diese Funktion wird oft in Konsolenanwendungen verwendet, um Benutzereingaben zu überwachen, 
während das Programm weiterhin ausgeführt wird.
_________________________________________________________________________________

return - Das Schlüsselwort `return` wird verwendet, um den Wert einer Funktion zurückzugeben und die Funktion zu beenden. 
Es kann auch verwendet werden, um den vorzeitigen Ausstieg aus einer Funktion zu ermöglichen, 
bevor das Ende des Funktionskörpers erreicht wird. Der zurückgegebene Wert kann entweder ein Wert oder ein Zeiger auf ein Objekt sein,
abhängig von der Deklaration und dem Rückgabetyp der Funktion.
_________________________________________________________________________________

for - Eine Schleife, die eine bestimmte Anzahl von Iterationen durchläuft. 
Sie besteht aus einer Initialisierung, einer Bedingung und einem Iterationsschritt.
   Beispiel:
   ```cpp
   for (initialisierung; bedingung; iterationsschritt) {
       // Code, der wiederholt ausgeführt wird
   }
   ```
_________________________________________________________________________________

while - Eine Schleife, die so lange ausgeführt wird, wie eine Bedingung wahr ist. 
Die Bedingung wird vor jeder Iteration überprüft.
   Beispiel:
   ```cpp
   while (bedingung) {
       // Code, der wiederholt ausgeführt wird
   }
   ```
_________________________________________________________________________________

do-while - Ähnlich wie die `while`-Schleife, jedoch wird die Bedingung am Ende der Schleife überprüft. 
Dadurch wird sichergestellt, dass der Schleifenkörper mindestens einmal ausgeführt wird.
   Beispiel:
   ```cpp
   do {
       // Code, der wiederholt ausgeführt wird
   } while (bedingung);
   ```
_________________________________________________________________________________

range-based for - Eine spezielle Art von `for`-Schleife, die verwendet wird, 
um über die Elemente einer Sammlung zu iterieren, z. B. ein Array oder einen Container.
   Beispiel:
   ```cpp
   for (datentyp element : sammlung) {
       // Code, der für jedes Element ausgeführt wird
   }
   ```
__________________________________________________________________________________

break - Wird innerhalb einer Schleife verwendet, 
um die Schleife vorzeitig zu beenden und den Code nach der Schleife auszuführen.
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
um den aktuellen Schleifendurchlauf zu beenden und mit dem nächsten Durchlauf fortzufahren.
   Beispiel:
   ```cpp
   for (int i = 0; i < 5; i++) {
       if (i == 3) {
           continue; // Aktuellen Durchlauf beenden und mit dem nächsten fortfahren
       }
       // Code, der für alle Durchläufe außer bei i = 3 ausgeführt wird
   }
   ```
_____________________________________________________________________________________________
_____________________________________________________________________________________________

)";

return 0;

}