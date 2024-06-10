#include "Mainframe.h"
#include "Wiki.h"
using namespace std;

void showPython()
{
    cout << "\033[32m";
    cout << R"(

 ^___________________________^
 |Programmiersprachen lernen |
 |                           |
<|___________________________|>
      |                |

1. Entscheidung: Kosolenprogramm vs. Programm mit GUI
2. Art/Weise der Programmausführung Compiler vs Interpreter va Hybrid
3. Programmsystem: Client vs Server
4. Entwicklungsumgebung  IDE 
  -Editor -Compiler/Interpreter 
   (zB. Java -> JRE  Entwicklung -> JRK ) 
  - Debugger 
  - Projektverwaltung 
5. Erlernen der Sprache -> wir starten mit den Basics:
  - Syntax
  - Berücksichtigung des EVA Prinzips
  - Erzeugung von Ausgabe zum testen ob alles geht
      Bei GUI: Labels, Textfelder, Radiobuttons, Checkboxen, Drop Down, Texturen  
  - Kommentieren // # -- 
        - Speicherstruktur - Variablen - Arrays - Strukturen - Klassen, Objekte
        - Operatoren
        - Kontrollstrukturen:  Verzweigung(if; if - else; if - elseif - else)
        - Fallauswahl(switch - case)
        - Sprunganweisung(go - to) (Kann oft zu Programmfehlern führen)
        - Schleifen(While - loop; For - loop; Foreach - loop; Do - While - loop)
        - Eingabe
        - Methoden / Funktion  selbst erstellen / aus Bibliothek nutzen
        zB. - Dateien auslesen / bearbeiten
        - Datenbank verwenden
        - Netzwerkkommunikation
        - Threads


        1. Coding mit VS Code
        2. Workspace einrichten - Ordner erstellen
        3. Datei_erstellen.py

        print("Hello World!\n Was geht?")

        4. Extensions installieren  Python Interpreter




Ausgabe ->       print("Hello, World!") 
Kommentare ->    # Dies ist ein kleines Kommentar    '''und das ein Großes'''
quit() ->        Beenden
clear() ->       Bildschirm leeren

#Variablen und Datentypen
#dynamische Typisierung
zahl=42
print(type(zahl)) #<class 'int'
zahl=13.7
print(type(zahl)) #class 'float'
#Eingabe
umsatz=input("Bitte umsatz eingeben")
umsatz= float(umsatz) #casting
print(type(umsatz))
print("Danke")
#Rechnung
prozent=umsatz*0.1
print(f"Prozent {prozent}")
)";
    cout << R"(                                                        
                                                                                                                                                                                                                           
                                                       
                                                        

                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |-------------------------|                             |  |     
                                                  |  |-------------------------|                             |  |    
                                                  |  |_________________________|     _________               |  |     
                                                  |  |      Python Helpdesk    |    |^|     | |              |  |     
                                                  |  |-------------------------|    | |_____| |              |  |     
                                                  |  | 1.                      |    |  _____  |              |  |    
                                                  |  | 2.                      |    | |     | |              |  |     
                                                  |  | 3.                      |    | |_____| |              |  |     
                                                  |  | 4.                      |    |_|_____|_|              |  |     
                                                  |  | 0. Zurück zum Menü      |                             |  |     
                                                  |  |_________________________|                             |  |     
                                                  |  |                     |                                 |  |     
                                                  |  | @-------------------|                                 |  |     
                                                  |  |-------------------------------------------------------|  |
                                                  |__________________________________________________________|  /      
                                                    (__________________________________________________________/        
                                               ______/                [___________]                                     
                                              /                                                                        
                                             (__________________________________________________________________        
                                            / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __  
                                           /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # / (  )  
                                          /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /  (__)  
                                         /__________________________________________________________________/          

 )";  cout << "\033[0m";
}
int pymain()
{
    bool running = true;
    int choice;
    while (running)
    {
        showPython();

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
            showPython();
            break;
        case 2:

            break;
        case 3:

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