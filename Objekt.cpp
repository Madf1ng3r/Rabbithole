#include "Hcode.h"
#include "Code.h"
#include "Zcode.h"
#include "Mainframe.h"
#include "Openlink.h"
#include "BeispielCode.h"
using namespace std;
void showObjectProg()
{
    cout << "\033[32m";
    cout << R"(                                                        
Objektorientierung -> Klassen .. Klassendiagramm

Speicherstrukturen in der Programmierung

 _______________________________________________________
|             Werte         Datentypen         Methoden |
|Variable   |    1     |           1    |            0  |
|Array      |    n     |           1    |            0  |
|Struct     |    n     |           n    |            0  |
|Objekt     |    n     |           n    |            n  |
|_______________________________________________________|
n = beliebig viele

Klasse= Zusammenfassende Beschreibung von gleichen Objekten mit deren gleichen
Eigenschaften und Methoden  -Dient als Vorlage "Bauplan" 

Objekt= Konkrete Ausprägung / Instanz einer Klasse 
kann sein: Lebewesen, Sache/Ding, Vorgänge / Zustände

Variable = Wird definiert durch die Deklaration des Datentyps und Initialisierung mit 
bestimmtem Wert. --> Instanziirung

int zahl;
int=Datentyp gibt Speichergröße vor    zahl=Berechnung für Speicherplatz  
fuer moegliche Verwendung 	       im RAM 

Klassendiagramm: 
Arten der Beziehungen: 
Vererbung: entstehende Klasse ( child ) enthaelt alle Attribute und Methoden
der vererbenden Klasse ( parent ) und ggf. weitere,
Assoziation: nicht genauer beschriebene Beziehung zwischen zwei Klassen,
Komposition: Beziehung zwischen zwei Klassen mit Besitz Verbindung
Master-Slave Beziehung,  Löschen des Besitzerobjekts zerstört untergeordnetes 
Objekt, tiefere Beziehung als Agregation
Aggregation: Beziehung zwischen zwei Klassen mit einem "has a" Zusammenhang 
Gebildete Objekte können unabhängig voneinander existieren
gerichtete Beziehungen:
Implementierung,Realisierung:

( Sonderform abstrakte Klassen 
lassen sich per Definition nicht instanziieren, es lassen sich keine Objekte von ihr erzeugen, und dient somit lediglich als Strukturelement innerhalb einer Klassenhierarchie. )

Prozedur ( zb void ) gibt kein Wert zurück 

1. Sobald eine Methode <abstrakt> ist, ist die ganze Klasse abstrakt
2. mehrere Methoden koennen abstrakt sein
3. keine Objekte können als abstrakte Klasse iniziirt werden
4. fuer die Iniziirung müssen in abstrakten Klassen  (child->Vererbung) 
die bisher abstrakten Methoden mit Programmlogik überschrieben werden

Klasse
Eine Klasse ist wie ein Bauplan oder eine Schablone für Dinge (Objekte). Sie beschreibt, welche Eigenschaften (Daten) und Fähigkeiten (Funktionen) diese Dinge haben sollen.

Vererbung
Neue Klasse (Kindklasse) die Eigenschaften und Fähigkeiten einer bestehenden Klasse (Elternklasse) übernimmt. Dadurch kann die Kindklasse alles von der Elternklasse nutzen und zusätzlich eigene Eigenschaften und Fähigkeiten haben. 

Objekt
Ein Objekt ist eine konkrete Umsetzung einer Klasse. Es ist ein Ding, das nach dem Bauplan der Klasse erschaffen wurde. 

Zusammengefasst:

Klasse: Bauplan für Objekte.
Vererbung: Weitergabe von Eigenschaften und Faehigkeiten von einer Klasse an eine andere.
Objekt: Ein konkretes Ding, das nach dem Bauplan der Klasse erstellt wurde.

Vorteile von der Nutzung von Klassen:
Bessere Verwaltung von Datenstrukturen
bessere Uebersicht über Prorammstruktur 
erhoehung der Datensicherheit durch Zugriffsmodifizierer-> Datenkapselung
-> public + Zugriff von überall,
   protected # Zugriff nur innerhalb der Klassenstruktur / Vererbung , 
   private - Zugriff nur innerhalb der Klasse oder des Objekts


0 - zurueck 
 )";  cout << "\033[0m";
}
int objectmain()
{
    bool running = true;
    int choice;
    while (running)
    {
        showObjectProg();
        cout << "Wählen Sie eine Option: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            continue;
        }
        switch (choice)
        {
        case 1:
            animateTransition();
            clearScreen();
            break;
        case 2:

            break;
        case 0:
            running = false;
            break;
        default:
            cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }
    }
    return 0;
}