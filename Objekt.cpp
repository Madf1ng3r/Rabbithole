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

Objekt= Konkrete Auspr�gung / Instanz einer Klasse 
kann sein: Lebewesen, Sache/Ding, Vorg�nge / Zust�nde

Variable = Wird definiert durch die Deklaration des Datentyps und Initialisierung mit 
bestimmtem Wert. --> Instanziirung

int zahl;
int=Datentyp gibt Speichergr��e vor    zahl=Berechnung f�r Speicherplatz  
fuer moegliche Verwendung 	       im RAM 

Klassendiagramm: 
Arten der Beziehungen: 
Vererbung: entstehende Klasse ( child ) enthaelt alle Attribute und Methoden
der vererbenden Klasse ( parent ) und ggf. weitere,
Assoziation: nicht genauer beschriebene Beziehung zwischen zwei Klassen,
Komposition: Beziehung zwischen zwei Klassen mit Besitz Verbindung
Master-Slave Beziehung,  L�schen des Besitzerobjekts zerst�rt untergeordnetes 
Objekt, tiefere Beziehung als Agregation
Aggregation: Beziehung zwischen zwei Klassen mit einem "has a" Zusammenhang 
Gebildete Objekte k�nnen unabh�ngig voneinander existieren
gerichtete Beziehungen:
Implementierung,Realisierung:

( Sonderform abstrakte Klassen 
lassen sich per Definition nicht instanziieren, es lassen sich keine Objekte von ihr erzeugen, und dient somit lediglich als Strukturelement innerhalb einer Klassenhierarchie. )

Prozedur ( zb void ) gibt kein Wert zur�ck 

1. Sobald eine Methode <abstrakt> ist, ist die ganze Klasse abstrakt
2. mehrere Methoden koennen abstrakt sein
3. keine Objekte k�nnen als abstrakte Klasse iniziirt werden
4. fuer die Iniziirung m�ssen in abstrakten Klassen  (child->Vererbung) 
die bisher abstrakten Methoden mit Programmlogik �berschrieben werden

Klasse
Eine Klasse ist wie ein Bauplan oder eine Schablone f�r Dinge (Objekte). Sie beschreibt, welche Eigenschaften (Daten) und F�higkeiten (Funktionen) diese Dinge haben sollen.

Vererbung
Neue Klasse (Kindklasse) die Eigenschaften und F�higkeiten einer bestehenden Klasse (Elternklasse) �bernimmt. Dadurch kann die Kindklasse alles von der Elternklasse nutzen und zus�tzlich eigene Eigenschaften und F�higkeiten haben. 

Objekt
Ein Objekt ist eine konkrete Umsetzung einer Klasse. Es ist ein Ding, das nach dem Bauplan der Klasse erschaffen wurde. 

Zusammengefasst:

Klasse: Bauplan f�r Objekte.
Vererbung: Weitergabe von Eigenschaften und Faehigkeiten von einer Klasse an eine andere.
Objekt: Ein konkretes Ding, das nach dem Bauplan der Klasse erstellt wurde.

Vorteile von der Nutzung von Klassen:
Bessere Verwaltung von Datenstrukturen
bessere Uebersicht �ber Prorammstruktur 
erhoehung der Datensicherheit durch Zugriffsmodifizierer-> Datenkapselung
-> public + Zugriff von �berall,
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
        cout << "W�hlen Sie eine Option: ";
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
            cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }
    }
    return 0;
}