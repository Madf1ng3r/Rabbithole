#include "Mainframe.h"
#include "Wiki.h"
#include "Definitionen.h"
#include "Wiki.h"
#include "Links.h"
using namespace std;
void pruefungsfragen() {
	bool running=true;
    do {
        system("cls");
        int choice;
        clearScreen();
        cout << R"(
Hardwarekomponenten eines Computers:
Welche Funktion hat der Prozessor in einem Computer?
Der Prozessor in einem Computer ist f�r die Ausf�hrung von Befehlen und die Verarbeitung von Daten zust�ndig.
Erl�utern Sie die Unterschiede zwischen HDD und SSD.
HDDs (Hard Disk Drives) verwenden magnetische Speichermedien, w�hrend SSDs (Solid State Drives) Flash-Speicher verwenden. 
SSDs sind in der Regel schneller und langlebiger als HDDs.
Was versteht man unter Arbeitsspeicher?
Der Arbeitsspeicher ist ein tempor�rer Speicher, der vom Prozessor verwendet wird, 
um Daten und Befehle w�hrend der Ausf�hrung von Programmen zwischen zu speichern.

Wie installiert man ein Betriebssystem auf einem Computer?
Welche Aufgaben hat ein Betriebssystem?
Betriebssysteme sind f�r die Verwaltung von Ressourcen, die Ausf�hrung von Anwendungen, 
die Benutzeroberfl�che und die Kommunikation mit der Hardware verantwortlich. 
Netzwerkgrundlagen:

Erkl�ren Sie den Unterschied zwischen LAN und WAN.
LAN (Local Area Network) ist ein lokales Netzwerk, das Ger�te in einem begrenzten physischen Bereich miteinander verbindet, 
w�hrend WAN (Wide Area Network) ein gr��eres Netzwerk ist, das �ber gr��ere geografische Entfernungen verteilt ist.
Was sind die Vorteile von drahtlosen Netzwerken (WLAN)?
Wie funktioniert die Kommunikation �ber das TCP/IP-Protokoll?
Netzwerksicherheit und -management:

Welche Ma�nahmen k�nnen ergriffen werden, um ein Netzwerk vor unbefugtem Zugriff zu sch�tzen?
Wie funktioniert das Prinzip der Verschl�sselung in einem Netzwerk?
Erl�utern Sie den Zweck von Firewalls und Intrusion Detection Systems (IDS).

Softwareinstallation und -konfiguration:
Wie installiert man eine Anwendung unter Windows?
Was ist der Unterschied zwischen Freeware und Shareware?
Welche M�glichkeiten gibt es, um Software zu aktualisieren?

Benutzer- und Rechteverwaltung:
Wie legt man unter Windows einen neuen Benutzer an?
Welche Rechte kann ein Benutzer in einem Netzwerk haben?
Warum ist eine differenzierte Rechtevergabe wichtig?

Datenschutz und Datensicherheit:
Was versteht man unter Datenschutz und warum ist er wichtig?
Welche Ma�nahmen k�nnen ergriffen werden, um Daten vor Verlust oder Diebstahl zu sch�tzen?
Was sind die wichtigsten Bestandteile eines Datenschutzkonzepts?

Projektmanagement im IT-Bereich:
Erl�utern Sie den Projektmanagementprozess.
Was sind typische Meilensteine in einem IT-Projekt?
Wie geht man mit Projektverz�gerungen um?

Bin�re und Hexadezimale Zahlensysteme:
Erl�utern Sie den Unterschied zwischen dem bin�ren und dem hexadezimalen Zahlensystem.
Konvertieren Sie die bin�re Zahl 10101110 in das hexadezimale Zahlensystem.
Wandeln Sie die hexadezimale Zahl 2F in das bin�re Zahlensystem um.
Bit- und Byterechnung:

Wie viele Bits sind in einem Byte enthalten?
Berechnen Sie die Anzahl der m�glichen Kombinationen von 8 Bits.
Wenn ein Byte 256 verschiedene Werte haben kann, wie viele Bits sind dann ben�tigt?
Addition und Subtraktion im Bin�rsystem:

F�hren Sie die bin�re Addition 101 + 111 durch und geben Sie das Ergebnis in bin�rer Form an.
Subtrahieren Sie die bin�re Zahl 1101 von der bin�ren Zahl 10010.
Wie lautet das Ergebnis der bin�ren Subtraktion 101010 - 11111?

Logische Verkn�pfungen und Bitoperationen:
Erl�utern Sie die logischen Operatoren AND, OR und XOR.
F�hren Sie die bitweise UND-Verkn�pfung der bin�ren Zahlen 101010 und 110011 durch.
Welches Ergebnis ergibt sich aus der bitweisen XOR-Verkn�pfung der bin�ren Zahlen 101101 und 110010?

Komplementbildung und Zweierkomplement:
Was ist das Einerkomplement einer bin�ren Zahl und wie wird es gebildet?
Berechnen Sie das Zweierkomplement der bin�ren Zahl 110101.
Wie lautet die dezimale Darstellung der bin�ren Zahl 11111111 im Zweierkomplement?

Netzwerkgrundlagen:
Was versteht man unter dem OSI-Modell und welche Funktion hat es?
Erl�utern Sie den Unterschied zwischen einem Hub und einem Switch.
Welche Aufgaben hat ein Router in einem Netzwerk?
Betriebssysteme:

Was sind die Hauptaufgaben des Kernels in einem Betriebssystem?
Unterscheiden Sie zwischen einem 32-Bit- und einem 64-Bit-Betriebssystem.
Nennen Sie verschiedene Dateisysteme und ihre Eigenschaften.

Datenbanken und SQL:
Was ist eine Datenbank und welche Vorteile bietet sie?
Erl�utern Sie den Unterschied zwischen einer relationalen und einer NoSQL-Datenbank.
Schreiben Sie eine SQL-Abfrage, um alle Mitarbeiter aus einer Tabelle namens "Mitarbeiter" abzurufen, deren Gehalt �ber 3000 Euro liegt.
Programmierung:

Was ist der Unterschied zwischen einer Compiler- und einer Interpreter-Sprache?
Nennen Sie die grundlegenden Datentypen in der Programmierung und ihre Verwendung.
Schreiben Sie ein einfaches Programm in einer Programmiersprache Ihrer Wahl, das die ersten 10 Primzahlen ausgibt.

IT-Sicherheit:
Was versteht man unter einem Denial-of-Service-Angriff und wie kann man sich davor sch�tzen?
Erl�utern Sie den Unterschied zwischen Authentifizierung und Autorisierung.
Welche Ma�nahmen k�nnen ergriffen werden, um sensible Daten zu verschl�sseln?
Webtechnologien:

Was ist der Unterschied zwischen HTTP und HTTPS?
Erlaeutern Sie den Unterschied zwischen Frontend und Backend in der Webentwicklung.
Welche Rolle spielen Cookies in der Webentwicklung und wie funktionieren sie?
Grundlagen der IT-Projektarbeit:

Was versteht man unter dem Wasserfallmodell und dem agilen Projektmanagement?
Nennen Sie die Phasen des Projektmanagements und beschreiben Sie deren Aufgaben.
Wie kann man Risiken in einem IT-Projekt identifizieren und bewerten?

(Loesung:
Netzwerkgrundlagen:
Das OSI-Modell ist ein Referenzmodell, das den Aufbau von Netzwerkprotokollen in sieben Schichten unterteilt, um die Interoperabilitaet verschiedener Netzwerkkomponenten zu gew�hrleisten.
Ein Hub ist ein Ger�t, das Datenpakete an alle angeschlossenen Geraete in einem Netzwerk weiterleitet, w�hrend ein Switch Datenpakete nur an das Zielger�t sendet.
Ein Router ist ein Netzwerkger�t, das den Datenverkehr zwischen verschiedenen Netzwerken steuert und die richtigen Wege f�r die Datenpakete festlegt.

Betriebssysteme:
Der Kernel ist der Kern eines Betriebssystems und ist f�r die Verwaltung von Ressourcen wie Prozessen, Speicher und Ein-/Ausgabeger�ten verantwortlich.
32-Bit- und 64-Bit-Betriebssysteme unterscheiden sich in der Gr��e der Datenbusse, was Auswirkungen auf die maximal adressierbare Speichermenge hat.
Beispiele f�r Dateisysteme sind FAT32, NTFS (unter Windows), ext4 (unter Linux) und HFS+ (unter macOS).

Datenbanken und SQL:
Eine Datenbank ist eine strukturierte Sammlung von Daten, die organisiert und effizient verwaltet werden kann, um darauf zuzugreifen und sie zu aktualisieren.
Relationale Datenbanken speichern Daten in Tabellen und erm�glichen komplexe Abfragen mithilfe von SQL (Structured Query Language), waehrend NoSQL-Datenbanken
flexibler sind und verschiedene Datenspeichermodelle unterst�tzen.
SQL-Abfrage zum Abrufen von Mitarbeitern mit einem Gehalt �ber 3000: SELECT * FROM Mitarbeiter WHERE Gehalt > 3000;

Programmierung:
Compiler-Sprachen werden in Maschinencode �bersetzt, w�hrend Interpreter-Sprachen Zeile f�r Zeile interpretiert und ausgef�hrt werden.
Beispiele f�r grundlegende Datentypen sind Integer, Float, String und Boolean, die jeweils unterschiedliche Arten von Daten repr�sentieren.
Ein einfaches Programm zur Ausgabe der ersten 10 Primzahlen k�nnte durch eine Schleife realisiert werden, die Zahlen auf Primzahl testet und diese ausgibt.

IT-Sicherheit:
Ein Denial-of-Service-Angriff zielt darauf ab, einen Dienst durch �berlastung unzug�nglich zu machen, 
w�hrend Ma�nahmen wie Firewalls und Intrusion Detection Systems vor solchen Angriffen sch�tzen k�nnen.
Authentifizierung �berpr�ft die Identit�t eines Benutzers, w�hrend Autorisierung bestimmt, welche Aktionen ein Benutzer ausf�hren darf.
Datenverschl�sselung sch�tzt sensible Daten vor unbefugtem Zugriff, indem sie sie in eine 
nicht lesbare Form umwandelt, die nur mit dem richtigen Schl�ssel wiederhergestellt werden kann.

Webtechnologien:
HTTPS ist eine sichere Variante von HTTP, die eine verschl�sselte Kommunikation zwischen Browser und Server erm�glicht.
Das Frontend einer Website ist die Benutzeroberfl�che, die vom Benutzer interagiert wird, 
w�hrend das Backend die Serverseite ist, die die Logik und Datenverarbeitung enth�lt.
Cookies sind kleine Dateien, die vom Browser gespeichert werden und Informationen �ber die Interaktion 
des Benutzers mit der Website speichern k�nnen, um die Benutzererfahrung zu verbessern.
Grundlagen der IT-Projektarbeit:

Das Wasserfallmodell ist ein sequenzielles Modell, bei dem die Phasen (Anforderungsanalyse, Entwurf, 
Implementierung, Test, Bereitstellung) nacheinander durchlaufen werden, w�hrend 
agile Methoden iterative Ans�tze mit flexibleren Prozessen verwenden.
Phasen des Projektmanagements umfassen Initiation, Planung, Durchfuehrung, Ueberwachung und Abschluss.
Risiken in einem IT-Projekt k�nnen durch Risikoanalysen und -bewertungen identifiziert und 
bewertet werden, um geeignete Gegenma�nahmen zu entwickeln.)

Datenbanken und SQL:
Eine Datenbank ist eine strukturierte Sammlung von Daten, die auf einem Computersystem gespeichert ist 
und von einem Datenbankmanagementsystem (DBMS) verwaltet wird. Datenbanken erm�glichen 
effiziente Datenorganisation, -speicherung und -abfrage.
SQL (Structured Query Language) ist eine spezielle Programmiersprache, die f�r die Verwaltung und Abfrage 
von Datenbanken verwendet wird. Mit SQL k�nnen Datenbanken erstellt, ge�ndert, gel�scht 
und abgefragt werden, um spezifische Informationen abzurufen.

Programmierung:
Programmierung bezieht sich auf den Prozess des Schreibens, Testens und Wartens von Quellcode, um Softwareanwendungen zu erstellen.
 Programmiersprachen wie Java, Python, C++, JavaScript usw. werden verwendet, um 
Anweisungen zu formulieren, die von einem Computer ausgef�hrt werden k�nnen.
Compiler-Sprachen werden in Maschinencode �bersetzt, bevor sie ausgef�hrt werden, w�hrend Interpreter-Sprachen 
Zeile f�r Zeile interpretiert und ausgef�hrt werden. Compiler erzeugen normalerweise effizienteren Code, 
w�hrend Interpreter eine schnellere Entwicklungszeit erm�glichen.

IT-Sicherheit:
IT-Sicherheit befasst sich mit dem Schutz von Computersystemen vor Diebstahl, Besch�digung oder unbefugtem Zugriff auf Daten. 
Dies umfasst Ma�nahmen wie Zugriffskontrolle, Verschl�sselung, Firewalls, Antivirensoftware und Sicherheitsrichtlinien.
Ein Denial-of-Service (DoS)-Angriff zielt darauf ab, eine Dienstleistung, einen Host oder eine Infrastruktur 
durch �berlastung unbrauchbar zu machen. Dies geschieht durch das Senden einer �berw�ltigenden 
Menge von Anfragen oder Datenverkehr, die die Ressourcen des Ziels ersch�pfen.

                                                                         0 - zurueck
)";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            continue;
        }
        switch (choice) {
        case 0:
            running = false;
            break;
        default:
            cout << "Ungueltige Auswahl. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }
        if (_kbhit()) {
            char key = _getch();
            if (key == 27 || key == '0') {
                running = false;
            }
        }
    } while (running);

}

void pruefungsfragen4() {
 cout <<   R"(
Was sind die Ziele des Projektmanagements?

A) Die Ziele des Projektmanagements sind, die Anforderungen des Kunden zu erf�llen, die Kosten, die Zeit und die Qualit�t des Projekts zu planen, zu steuern und zu �berwachen, und die Risiken und Probleme des Projekts zu identifizieren und zu l�sen.

B) Die Ziele des Projektmanagements sind, die eigenen Interessen zu verfolgen, die Kosten, die Zeit und die Qualit�t des Projekts zu ignorieren, und die Risiken und Probleme des Projekts zu vermeiden oder zu verschleiern.

C) Die Ziele des Projektmanagements sind, die Anforderungen des Kunden zu �ndern, die Kosten, die Zeit und die Qualit�t des Projekts zu sch�tzen, zu kontrollieren und zu dokumentieren, und die Risiken und Probleme des Projekts zu analysieren und zu bewerten.

D) Die Ziele des Projektmanagements sind, die Anforderungen des Kunden zu verstehen, die Kosten, die Zeit und die Qualit�t des Projekts zu optimieren, und die Risiken und Probleme des Projekts zu minimieren und zu l�sen.

Die richtige Antwort ist D)

Die Anforderungen des Kunden zu verstehen, die Kosten, die Zeit und die Qualit�t des Projekts zu optimieren, 
und die Risiken und Probleme des Projekts zu minimieren und zu loesen, sind die Ziele des Projektmanagements. 
Diese Ziele sollen dazu beitragen, dass das Projekt erfolgreich abgeschlossen wird und die Erwartungen 
des Kunden und der Stakeholder erfuellt oder uebertroffen werden.

Die Antwort A) ist teilweise richtig, aber nicht optimal, da sie nicht die Optimierung der Kosten, der Zeit und der Qualit�t des Projekts erw�hnt.



Was sind die Phasen eines Projekts nach dem klassischen Wasserfallmodell?

A) Planung, Analyse, Design, Implementierung, Test, Einf�hrung, Wartung

B) Planung, Design, Implementierung, Test, Einf�hrung, Wartung, Abschluss

C) Planung, Analyse, Design, Implementierung, Test, Einf�hrung, Abschluss

D) Planung, Analyse, Design, Implementierung, Test, Wartung, Abschluss

Die richtige Antwort ist C)

Die Phasen eines Projekts nach dem klassischen Wasserfallmodell sind Planung, Analyse, Design, Implementierung, Test, 
Einf�hrung und Abschluss. In jeder Phase werden bestimmte Aktivit�ten durchgef�hrt, die das Projekt voranbringen 
und die Ergebnisse dokumentieren. Die Phasen sind sequenziell angeordnet, das hei�t, eine Phase beginnt erst, 
wenn die vorherige Phase abgeschlossen ist. Das Wasserfallmodell ist ein einfaches und uebersichtliches Vorgehensmodell, 
das sich f�r Projekte mit klaren Anforderungen und geringer Komplexit�t eignet.


Was sind die Vorteile des agilen Projektmanagements gegen�ber dem klassischen Projektmanagement?

A) Die Vorteile des agilen Projektmanagements sind, dass es flexibler, kundenorientierter, teamorientierter, iterativer und adaptiver ist als das klassische Projektmanagement.

B) Die Vorteile des agilen Projektmanagements sind, dass es schneller, billiger, einfacher, linearer und statischer ist als das klassische Projektmanagement.

C) Die Vorteile des agilen Projektmanagements sind, dass es komplexer, unstrukturierter, chaotischer, riskanter und unvorhersehbarer ist als das klassische Projektmanagement.

D) Die Vorteile des agilen Projektmanagements sind, dass es kreativer, innovativer, experimenteller, lernender und verbessernder ist als das klassische Projektmanagement.

Die richtige Antwort ist A)

Die Vorteile des agilen Projektmanagements sind, dass es flexibler, kundenorientierter, teamorientierter, iterativer und adaptiver ist als das klassische Projektmanagement. Das bedeutet, dass es sich besser an die Ver�nderungen der Anforderungen, des Marktes, der Technologien und der Umst�nde anpassen kann, dass es die Bed�rfnisse und die Zufriedenheit des Kunden st�rker ber�cksichtigt, dass es die Zusammenarbeit und die Kommunikation des Teams f�rdert, dass es das Projekt in kleine und �berschaubare Teile aufteilt, die regelm��ig �berpr�ft und getestet werden, und dass es das Projekt kontinuierlich verbessert und optimiert. Das agile Projektmanagement eignet sich f�r Projekte mit hoher Komplexit�t, Dynamik und Unsicherheit.

Die Antwort B) ist falsch, da sie das agile Projektmanagement unrealistisch und unangemessen darstellt. Das agile Projektmanagement ist nicht unbedingt schneller, billiger oder einfacher als das klassische Projektmanagement, sondern erfordert mehr Aufwand, Zeit und Ressourcen f�r die Planung, die Abstimmung, die Qualit�tssicherung und die Anpassung des Projekts. Das agile Projektmanagement ist auch nicht linear oder statisch, sondern zyklisch und ver�nderlich.

Die Antwort C) ist auch falsch, da sie das agile Projektmanagement negativ und abwertend darstellt. Das agile Projektmanagement ist nicht komplexer, unstrukturierter, chaotischer, riskanter oder unvorhersehbarer als das klassische Projektmanagement, sondern versucht, die Komplexit�t, die Struktur, das Chaos, das Risiko und die Vorhersehbarkeit des Projekts zu managen und zu reduzieren.

Die Antwort D) ist teilweise richtig, aber nicht vollst�ndig, da sie einige wichtige Aspekte des agilen Projektmanagements ausl�sst. Das agile Projektmanagement ist zwar kreativer, innovativer, experimenteller, lernender und verbessernder als das klassische Projektmanagement, aber das sind nicht die einzigen oder die wichtigsten Vorteile. Das agile Projektmanagement ist auch flexibler, kundenorientierter, teamorientierter, iterativer und adaptiver, was f�r den Erfolg des Projekts entscheidend ist.



Was sind die wichtigsten Projektmanagementmethoden und -werkzeuge, die bei der Einrichtung eines IT-gest�tzten Arbeitsplatzes angewendet werden k�nnen?

A) Die wichtigsten Projektmanagementmethoden und -werkzeuge sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Ishikawa-Diagramm, die SWOT-Analyse und das Projektcontrolling.

B) Die wichtigsten Projektmanagementmethoden und -werkzeuge sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Pareto-Prinzip, die SWOT-Analyse und das Projektcontrolling.

C) Die wichtigsten Projektmanagementmethoden und -werkzeuge sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Ishikawa-Diagramm, die Balanced Scorecard und das Projektcontrolling.

D) Die wichtigsten Projektmanagementmethoden und -werkzeuge sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Ishikawa-Diagramm, die SWOT-Analyse und das Scrum-Framework.

Die richtige Antwort ist A)

Die wichtigsten Projektmanagementmethoden und -werkzeuge, die bei der Einrichtung eines IT-gest�tzten Arbeitsplatzes angewendet werden k�nnen, sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Ishikawa-Diagramm, die SWOT-Analyse und das Projektcontrolling. Diese Methoden und Werkzeuge helfen, das Projekt zu definieren, zu planen, zu steuern und zu �berwachen, die Beteiligten zu identifizieren und zu ber�cksichtigen, die Anforderungen zu erheben und zu spezifizieren, die Aufgaben zu strukturieren und zu terminieren, die Ressourcen zu verwalten, die Fortschritte zu visualisieren, die Ursachen von Problemen zu analysieren, die St�rken, Schw�chen, Chancen und Risiken des Projekts zu bewerten und die Qualit�t und den Erfolg des Projekts zu sichern.

Die Antwort B) ist falsch, da sie das Pareto-Prinzip anstelle des Ishikawa-Diagramms nennt. Das Pareto-Prinzip ist eine Regel, die besagt, dass 80 % der Ergebnisse aus 20 % der Ursachen stammen. Das Ishikawa-Diagramm ist ein Werkzeug, das die m�glichen Ursachen eines Problems in Kategorien wie Material, Methode, Mensch, Maschine, Messung und Umwelt darstellt.

Die Antwort C) ist auch falsch, da sie die Balanced Scorecard anstelle der SWOT-Analyse nennt. Die Balanced Scorecard ist ein Werkzeug, das die Leistung eines Unternehmens oder einer Organisation anhand von vier Perspektiven misst: Finanzen, Kunden, Prozesse und Lernen. Die SWOT-Analyse ist ein Werkzeug, das die internen St�rken und Schw�chen sowie die externen Chancen und Risiken eines Projekts oder einer Situation ermittelt.

Die Antwort D) ist ebenfalls falsch, da sie das Scrum-Framework anstelle des Projektcontrollings nennt. Das Scrum-Framework ist eine agile Projektmanagementmethode, die auf kurzen, iterativen und inkrementellen Entwicklungszyklen basiert, die Sprints genannt werden. Das Projektcontrolling ist ein Prozess, der die Planung, die Steuerung und die �berwachung des Projekts umfasst, um Abweichungen, Risiken und Probleme zu erkennen und zu beheben.



Was sind die Voraussetzungen f�r eine erfolgreiche Kommunikation im Projektteam und mit dem Kunden?

A) Die Voraussetzungen f�r eine erfolgreiche Kommunikation sind, dass man aktiv zuh�rt, verst�ndlich und klar spricht oder schreibt, respektvoll und h�flich ist, Feedback gibt und annimmt, Konflikte konstruktiv l�st und die Kommunikationskan�le und -mittel angemessen ausw�hlt.

B) Die Voraussetzungen f�r eine erfolgreiche Kommunikation sind, dass man viel redet, kompliziert und fachlich spricht oder schreibt, dominant und selbstbewusst ist, Kritik �u�ert und ignoriert, Konflikte provoziert und eskaliert und die Kommunikationskan�le und -mittel beliebig ausw�hlt.

C) Die Voraussetzungen f�r eine erfolgreiche Kommunikation sind, dass man wenig redet, einfach und allgemein spricht oder schreibt, passiv und zur�ckhaltend ist, Lob gibt und erwartet, Konflikte vermeidet und verdr�ngt und die Kommunikationskan�le und -mittel zuf�llig ausw�hlt.

D) Die Voraussetzungen f�r eine erfolgreiche Kommunikation sind, dass man abwechslungsreich redet, kreativ und originell spricht oder schreibt, humorvoll und unterhaltsam ist, Witze macht und lacht, Konflikte ironisch behandelt und entsch�rft und die Kommunikationskan�le und -mittel spielerisch ausw�hlt.

Die richtige Antwort ist A)

Die Voraussetzungen f�r eine erfolgreiche Kommunikation sind, dass man aktiv zuh�rt, verst�ndlich und klar spricht oder schreibt, respektvoll und h�flich ist, Feedback gibt und annimmt, Konflikte konstruktiv l�st und die Kommunikationskan�le und -mittel angemessen ausw�hlt. Diese Voraussetzungen f�rdern das Verst�ndnis, das Vertrauen, die Zusammenarbeit und die Zufriedenheit im Projektteam und mit dem Kunden. Sie helfen auch, Missverst�ndnisse, Fehler, Verz�gerungen und Unstimmigkeiten im Projekt zu vermeiden oder zu beheben.

Die Antwort B) ist falsch, da sie das Gegenteil von den Voraussetzungen f�r eine erfolgreiche Kommunikation darstellt. Diese Antwort beschreibt eine Kommunikation, die arrogant, verwirrend, unh�flich, abweisend, aggressiv und willk�rlich ist. Diese Kommunikation schadet dem Verst�ndnis, dem Vertrauen, der Zusammenarbeit und der Zufriedenheit im Projektteam und mit dem Kunden. Sie verursacht auch Missverst�ndnisse, Fehler, Verz�gerungen und Unstimmigkeiten im Projekt.

Die Antwort C) ist auch falsch, da sie eine Kommunikation beschreibt, die langweilig, ungenau, unterw�rfig, bed�rftig, �ngstlich und planlos ist. Diese Kommunikation beeintr�chtigt das Verst�ndnis, das Vertrauen, die Zusammenarbeit und die Zufriedenheit im Projektteam und mit dem Kunden. Sie f�hrt auch zu Missverst�ndnissen, Fehlern, Verz�gerungen und Unstimmigkeiten im Projekt.

Die Antwort D) ist ebenfalls falsch, da sie eine Kommunikation beschreibt, die unpassend, unprofessionell, albern, respektlos, unernst und unzuverl�ssig ist. Diese Kommunikation st�rt das Verst�ndnis, das Vertrauen, die Zusammenarbeit und die Zufriedenheit im Projektteam und mit dem Kunden. Sie erzeugt auch Missverst�ndnisse, Fehler, Verz�gerungen und Unstimmigkeiten im Projekt.


)";
}

void pruefungsfragen3() {
    cout << R"(

Wie viele DVDs mit einer Kapazit�t von 4,7 GB kann man mit einem Blu-ray-Disc-Brenner mit einer Kapazit�t von 25 GB beschreiben?
A) 5 DVDs B) 6 DVDs C) 7 DVDs D) 8 DVDs

Die richtige Antwort ist B)

Um diese Aufgabe zu l�sen, muss man die Kapazit�t des Blu-ray-Disc-Brenners durch die Kapazit�t einer DVD teilen. Das ergibt:

25 GB / 4,7GB ? 5,32
4,7 GB 25 GB? ? 5,32

Da man keine halben DVDs beschreiben kann, muss man die n�chsth�here ganze Zahl nehmen, also 6 DVDs. Das bedeutet, dass man mit einem Blu-ray-Disc-Brenner mit einer Kapazit�t von 25 GB sechs DVDs mit einer Kapazit�t von 4,7 GB beschreiben kann.


Wie viele Bytes sind in einem Terabyte enthalten?
A) 1.000.000.000 Bytes B) 1.024.000.000 Bytes C) 1.000.000.000.000 Bytes D) 1.099.511.627.776 Bytes

Die richtige Antwort ist D)

Um diese Aufgabe zu l�sen, muss man wissen, dass ein Byte aus acht Bit besteht und dass ein Terabyte aus 1024 Gigabyte besteht. Ein Gigabyte besteht wiederum aus 1024 Megabyte, ein Megabyte aus 1024 Kilobyte und ein Kilobyte aus 1024 Byte. Das hei�t, um von Terabyte zu Byte zu kommen, muss man mit 1024 viermal multiplizieren. Das ergibt:

1 TB=1 TB�1024 GB�1024 MB�1024 KB�1024 B=1.099.511.627.776 B
1 TB=1 TB�1024 GB�1024 MB�1024 KB�1024 B=1.099.511.627.776 B

Das bedeutet, dass ein Terabyte 1.099.511.627.776 Bytes enth�lt.


Wie viele Megabyte sind in einem Gigabit enthalten?
A) 0,125 Megabyte B) 8 Megabyte C) 125 Megabyte D) 1000 Megabyte

Die richtige Antwort ist B)

Um diese Aufgabe zu l�sen, muss man wissen, dass ein Bit aus einem einzigen bin�ren Wert (0 oder 1) besteht und dass ein Byte aus acht Bit besteht. Au�erdem muss man wissen, dass ein Gigabit aus 1000 Megabit besteht und dass ein Megabit aus 1000 Kilobit besteht. Ein Kilobit besteht wiederum aus 1000 Bit. Das hei�t, um von Gigabit zu Megabyte zu kommen, muss man mit 1000 dreimal multiplizieren und dann durch 8 teilen. Das ergibt:

1 Gb=1 Gb�1000 Mb�1000 Kb�1000 b=1.000.000.000 b
1 Gb=1 Gb�1000 Mb�1000 Kb�1000 b=1.000.000.000 b

1.000.000.000 b
8 b=125.000.000 B
8 b1.000.000.000 b?=125.000.000 B

125.000.000 B
1.000.000 B=125 MB1.000.000 B125.000.000 B?=125 MB

Das bedeutet, dass ein Gigabit 125 Megabyte enth�lt.


Wie gro� ist die Leistung, die an einem Widerstand von 100 Ohm umgesetzt wird, wenn eine Spannung von 12 Volt anliegt?
A) 0,12 Watt B) 1,2 Watt C) 12 Watt D) 120 Watt

Die richtige Antwort ist B)

Um diese Aufgabe zu l�sen, muss man die Formel f�r die elektrische Leistung kennen

P=RU2?
Dabei ist P die Leistung in Watt, U die Spannung in Volt und R der Widerstand in Ohm. Wenn man die gegebenen Werte einsetzt, erh�lt man:


122/100=144/100=1,44 Watt
P=100122?=100144?=1,44 Watt

Da die Antwortm�glichkeiten nur eine Nachkommastelle haben, muss man die Leistung auf eine Nachkommastelle runden. Das ergibt 1,2 Watt als richtige Antwort.


Wie lautet das Ergebnis der bin�ren Multiplikation 1011 x 110?
A) 100010 B) 111110 C) 100110 D) 111010

Die richtige Antwort ist C)

Um diese Aufgabe zu l�sen, muss man die bin�re Multiplikation anwenden, die �hnlich wie die schriftliche Multiplikation im Dezimalsystem funktioniert. Dabei muss man beachten, dass die bin�re Addition folgende Regeln hat:

0 + 0 = 0
0 + 1 = 1
1 + 0 = 1
1 + 1 = 10 (�bertrag 1)
Die bin�re Multiplikation sieht dann so aus:

    1011
  x  110
  ------
    1011
   1011
+ 1011
  ------
  100110

Das bedeutet, dass das Ergebnis der bin�ren Multiplikation 1011 x 110 gleich 100110 ist.


Wie lautet das Ergebnis der bin�ren Subtraktion 1101 - 101?

A) 1000 B) 1001 C) 1010 D) 1011

Die richtige Antwort ist A)

Um diese Aufgabe zu l�sen, muss man die bin�re Subtraktion anwenden, die �hnlich wie die schriftliche Subtraktion im Dezimalsystem funktioniert. 
Dabei muss man beachten, dass die binaere Subtraktion folgende Regeln hat:

0 - 0 = 0
0 - 1 = 1 (Borrow 1)
1 - 0 = 1
1 - 1 = 0
Die bin�re Subtraktion sieht dann so aus:
   1101
 -  101
 -----
   1000

Das bedeutet, dass das Ergebnis der bin�ren Subtraktion 1101 - 101 gleich 1000 ist.


Wie viele Hosts k�nnen in einem Netzwerk mit der Subnetzmaske 255.255.255.192 maximal adressiert werden?
A) 62 B) 64 C) 126 D) 128

Die richtige Antwort ist A)

Um diese Aufgabe zu loesen, muss man wissen, wie die Subnetzmaske die Anzahl der m�glichen Hosts in einem Netzwerk bestimmt. Die Subnetzmaske besteht aus 32 Bit, die in vier Oktette zu je acht Bit unterteilt sind. Jedes Bit kann entweder 0 oder 1 sein. Die Bits, die 1 sind, geh�ren zum Netzwerkanteil der IP-Adresse, die Bits, die 0 sind, geh�ren zum Hostanteil der IP-Adresse. Die Anzahl der m�glichen Hosts in einem Netzwerk ist gleich 2 hoch der Anzahl der 0-Bits in der Subnetzmaske minus 2. Die 2 wird abgezogen, weil die erste und die letzte Adresse in einem Netzwerk f�r das Netzwerk selbst und den Broadcast reserviert sind und nicht f�r Hosts verwendet werden k�nnen.

Die Subnetzmaske 255.255.255.192 hat folgende bin�re Darstellung:
11111111.11111111.11111111.11000000

Die Anzahl der 0-Bits in der Subnetzmaske ist 6. Die Anzahl der m�glichen Hosts in einem Netzwerk mit dieser Subnetzmaske ist also:
26?2=64?2=62
26?2=64?2=62

Das bedeutet, dass in einem Netzwerk mit der Subnetzmaske 255.255.255.192 maximal 62 Hosts adressiert werden k�nnen.


Wie lautet das Ergebnis der bin�ren Division 1000 : 10?
A) 10 B) 100 C) 101 D) 110

Die richtige Antwort ist B)
Um diese Aufgabe zu l�sen, muss man die bin�re Division anwenden, die �hnlich wie die schriftliche Division im Dezimalsystem funktioniert. Dabei muss man beachten, dass die bin�re Subtraktion folgende Regeln hat:
0 - 0 = 0
0 - 1 = 1 (Borrow 1)
1 - 0 = 1
1 - 1 = 0
Die bin�re Division sieht dann so aus:

  100
  ---
10|1000
  - 10
   ---
    100
   - 10
    ---
     00

Das bedeutet, dass das Ergebnis der bin�ren Division 1000 : 10 gleich 100 ist.



Wie viele IP-Adressen stehen in einem Netzwerk mit der CIDR-Notation 192.168.1.0/24 zur Verf�gung?
A) 256 B) 254 C) 128 D) 126

Die richtige Antwort ist B)

Um diese Aufgabe zu l�sen, muss man wissen, wie die CIDR-Notation die Anzahl der m�glichen IP-Adressen in einem Netzwerk bestimmt. Die CIDR-Notation besteht aus einer IP-Adresse und einem Pr�fix, der die Anzahl der Bits angibt, die zum Netzwerkanteil der Adresse geh�ren. Die restlichen Bits geh�ren zum Hostanteil der Adresse. Die Anzahl der m�glichen IP-Adressen in einem Netzwerk ist gleich 2 hoch der Anzahl der Bits im Hostanteil minus 2. Die 2 wird abgezogen, weil die erste und die letzte Adresse in einem Netzwerk f�r das Netzwerk selbst und den Broadcast reserviert sind und nicht f�r Hosts verwendet werden k�nnen.

Die CIDR-Notation 192.168.1.0/24 hat folgende bin�re Darstellung:

11000000.10101000.00000001.00000000 / 24

Die Anzahl der Bits im Netzwerkanteil ist 24, die Anzahl der Bits im Hostanteil ist 8. Die Anzahl der m�glichen IP-Adressen in einem Netzwerk mit dieser CIDR-Notation ist also:

2
8
?
2
=
256
?
2
=
254
28?2=256?2=254

Das bedeutet, dass in einem Netzwerk mit der CIDR-Notation 192.168.1.0/24 254 IP-Adressen zur Verf�gung stehen.



Was ist der Unterschied zwischen einem Switch und einem Hub in einem lokalen Netzwerk?

A) Ein Switch ist ein Ger�t, das Datenpakete gezielt an die Empf�nger weiterleitet, w�hrend ein Hub ein Ger�t ist, das Datenpakete an alle angeschlossenen Ger�te sendet.
B) Ein Switch ist ein Ger�t, das Datenpakete an alle angeschlossenen Ger�te sendet, w�hrend ein Hub ein Ger�t ist, das Datenpakete gezielt an die Empf�nger weiterleitet.
C) Ein Switch ist ein Ger�t, das Datenpakete filtert und priorisiert, w�hrend ein Hub ein Ger�t ist, das Datenpakete verst�rkt und wiederholt.
D) Ein Switch ist ein Ger�t, das Datenpakete verst�rkt und wiederholt, w�hrend ein Hub ein Ger�t ist, das Datenpakete filtert und priorisiert.

Die richtige Antwort ist A)

Ein Switch ist ein Ger�t, das Datenpakete gezielt an die Empf�nger weiterleitet, w�hrend ein Hub ein Ger�t ist, das Datenpakete an alle angeschlossenen Ger�te sendet. Das bedeutet, dass ein Switch die Netzwerkleistung verbessert, indem er den Datenverkehr reduziert und die Kollisionen vermeidet, w�hrend ein Hub die Netzwerkleistung verschlechtert, indem er den Datenverkehr erh�ht und die Kollisionen f�rdert. Ein Switch ist daher ein intelligenteres und effizienteres Ger�t als ein Hub.


)";
}

void pruefungsfragen5() {
 cout <<   R"(

Wie lautet der Pseudocode, um die Summe der ersten n nat�rlichen Zahlen zu berechnen?

A) sum = 0 for i = 1 to n sum = sum + i end for print sum
B) sum = 0 while i <= n sum = sum + i i = i + 1 end while print sum
C) sum = 0 repeat sum = sum + i i = i + 1 until i > n print sum
D) sum = 0 do sum = sum + i i = i + 1 while i <= n print sum

Die richtige Antwort ist A)

Der Pseudocode, um die Summe der ersten n nat�rlichen Zahlen zu berechnen, ist A). Dieser Pseudocode verwendet eine for-Schleife, die von 1 bis n l�uft und bei jedem Durchlauf die Variable sum um den aktuellen Wert von i erh�ht. Am Ende wird die Variable sum ausgegeben, die die gesuchte Summe enth�lt.

Die Antwort B) ist falsch, da sie eine while-Schleife verwendet, die eine zus�tzliche Variable i ben�tigt, die vorher initialisiert werden muss. Au�erdem muss die Variable i nach jedem Durchlauf um 1 erh�ht werden, was einen zus�tzlichen Schritt darstellt.

Die Antwort C) ist auch falsch, da sie eine repeat-until-Schleife verwendet, die ebenfalls eine zus�tzliche Variable i ben�tigt, die vorher initialisiert werden muss. Au�erdem wird die Bedingung am Ende der Schleife �berpr�ft, was bedeutet, dass die Schleife mindestens einmal ausgef�hrt wird, auch wenn n gleich 0 ist.

Die Antwort D) ist ebenfalls falsch, da sie eine do-while-Schleife verwendet, die auch eine zus�tzliche Variable i ben�tigt, die vorher initialisiert werden muss. Au�erdem wird die Bedingung am Ende der Schleife �berpr�ft, was bedeutet, dass die Schleife mindestens einmal ausgef�hrt wird, auch wenn n gleich 0 ist.



Wie lautet der Pseudocode, um die Fakult�t einer nat�rlichen Zahl n zu berechnen?

A) fak = 1 for i = 1 to n fak = fak * i end for print fak
B) fak = 1 while n > 0 fak = fak * n n = n - 1 end while print fak
C) fak = 1 repeat fak = fak * n n = n - 1 until n = 0 print fak
D) fak = 1 do fak = fak * n n = n - 1 while n > 0 print fak

Die richtige Antwort ist B)

Der Pseudocode, um die Fakult�t einer nat�rlichen Zahl n zu berechnen, ist B). Dieser Pseudocode verwendet eine while-Schleife, die so lange l�uft, wie n gr��er als 0 ist. Bei jedem Durchlauf wird die Variable fak mit n multipliziert und n um 1 verringert. Am Ende wird die Variable fak ausgegeben, die die gesuchte Fakult�t enth�lt.

Die Antwort A) ist falsch, da sie eine for-Schleife verwendet, die von 1 bis n l�uft. Das bedeutet, dass die Variable fak mit 1 beginnt und dann mit allen Zahlen von 1 bis n multipliziert wird. Das ergibt aber nicht die Fakult�t von n, sondern das Produkt aller nat�rlichen Zahlen bis n.

Die Antwort C) ist auch falsch, da sie eine repeat-until-Schleife verwendet, die die Bedingung am Ende der Schleife �berpr�ft. Das bedeutet, dass die Schleife mindestens einmal ausgef�hrt wird, auch wenn n gleich 0 ist. Das f�hrt zu einem falschen Ergebnis, da die Fakult�t von 0 gleich 1 ist, aber die Variable fak mit 0 multipliziert wird.

Die Antwort D) ist ebenfalls falsch, da sie eine do-while-Schleife verwendet, die die Bedingung am Ende der Schleife �berpr�ft. Das bedeutet, dass die Schleife mindestens einmal ausgef�hrt wird, auch wenn n gleich 0 ist. Das f�hrt zu einem falschen Ergebnis, da die Fakult�t von 0 gleich 1 ist, aber die Variable fak mit 0 multipliziert wird.


Wie lautet der Fachbegriff f�r die Eigenschaften oder Merkmale einer Entit�t, die in einem ER-Modell durch Spalten in einer Tabelle dargestellt werden?
A) Attribute B) Relationen C) Schl�ssel D) Tupel

Die richtige Antwort ist A)

Die Eigenschaften oder Merkmale einer Entitaet, die in einem ER-Modell durch Spalten in einer Tabelle dargestellt werden, werden Attribute genannt. Attribute sind die Informationen, die eine Entit�t beschreiben oder identifizieren. Zum Beispiel kann eine Entit�t Student die Attribute Name, Matrikelnummer, Studiengang, E-Mail usw. haben.

Die Antwort B) ist falsch, da Relationen die Beziehungen zwischen Entit�ten bezeichnen, die in einem ER-Modell durch Linien oder Rauten dargestellt werden. Relationen beschreiben, wie Entit�ten miteinander in Verbindung stehen oder interagieren. Zum Beispiel kann eine Relation Einschreiben die Beziehung zwischen den Entit�ten Student und Kurs darstellen.

Die Antwort C) ist auch falsch, da Schl�ssel die Attribute sind, die eine Entit�t eindeutig identifizieren oder von anderen Entit�ten unterscheiden. Schl�ssel sind spezielle Attribute, die in einem ER-Modell durch Unterstreichung oder Fettdruck hervorgehoben werden. Zum Beispiel kann die Matrikelnummer ein Schl�ssel f�r die Entit�t Student sein.

Die Antwort D) ist ebenfalls falsch, da Tupel die einzelnen Datens�tze oder Zeilen in einer Tabelle darstellen, die eine Instanz einer Entit�t repr�sentieren. Tupel sind die konkreten Werte, die den Attributen einer Entit�t zugewiesen werden. Zum Beispiel kann ein Tupel in der Tabelle Student die Werte Max, 123456, Informatik, max@uni.de f�r die Attribute Name, Matrikelnummer, Studiengang, E-Mail haben.

Welche der folgenden Aussagen �ber den Arbeitsspeicher (RAM) ist falsch?
A) Der Arbeitsspeicher ist ein fl�chtiger Speicher, der die Daten verliert, wenn die Stromversorgung unterbrochen wird. B) Der Arbeitsspeicher ist ein schneller Speicher, der die Daten direkt an die CPU liefert, ohne auf die Festplatte zuzugreifen. C) Der Arbeitsspeicher ist ein erweiterbarer Speicher, der durch den Einbau von zus�tzlichen Speichermodulen vergr��ert werden kann. D) Der Arbeitsspeicher ist ein permanenter Speicher, der die Daten auch nach dem Ausschalten des Computers beh�lt.

Die richtige Antwort ist D)

Die Aussage D) ist falsch, da der Arbeitsspeicher ein fl�chtiger Speicher ist, der die Daten verliert, wenn die Stromversorgung unterbrochen wird. Der Arbeitsspeicher ist kein permanenter Speicher, der die Daten auch nach dem Ausschalten des Computers beh�lt. Das ist die Eigenschaft von nichtfl�chtigen Speichern wie Festplatten, SSDs oder USB-Sticks.

Die Aussagen A), B) und C) sind richtig, da sie die grundlegenden Eigenschaften und Funktionen des Arbeitsspeichers korrekt beschreiben. Der Arbeitsspeicher ist ein fl�chtiger Speicher, der die Daten verliert, wenn die Stromversorgung unterbrochen wird. Das bedeutet, dass der Arbeitsspeicher nur die Daten speichert, die gerade vom Computer ben�tigt werden, und nicht die Daten, die dauerhaft gesichert werden sollen. Der Arbeitsspeicher ist ein schneller Speicher, der die Daten direkt an die CPU liefert, ohne auf die Festplatte zuzugreifen. Das bedeutet, dass der Arbeitsspeicher die Leistung und Geschwindigkeit des Computers erh�ht, indem er die Zugriffszeiten auf die Daten verk�rzt. Der Arbeitsspeicher ist ein erweiterbarer Speicher, der durch den Einbau von zus�tzlichen Speichermodulen vergr��ert werden kann. Das bedeutet, dass der Arbeitsspeicher an die Bed�rfnisse und Anforderungen des Computers angepasst werden kann, indem mehr Speicherplatz hinzugef�gt wird.

)";
}

void pruefungsfragen6() {
    cout << R"(

Wie viele Subnetze und wie viele Hosts pro Subnetz kann man mit der CIDR-Notation 10.0.0.0/20 bilden?

A) 16 Subnetze mit je 4094 Hosts B) 64 Subnetze mit je 1022 Hosts C) 256 Subnetze mit je 254 Hosts D) 1024 Subnetze mit je 62 Hosts

Die richtige Antwort ist B)
Um diese Aufgabe zu l�sen, muss man wissen, wie die CIDR-Notation die Anzahl der m�glichen Subnetze und Hosts in einem Netzwerk bestimmt. Die CIDR-Notation besteht aus einer IP-Adresse und einem Pr�fix, der die Anzahl der Bits angibt, die zum Netzwerkanteil der Adresse geh�ren. Die restlichen Bits geh�ren zum Subnetz- und Hostanteil der Adresse. Die Anzahl der m�glichen Subnetze in einem Netzwerk ist gleich 2 hoch der Anzahl der Bits im Subnetzanteil. Die Anzahl der m�glichen Hosts in einem Subnetz ist gleich 2 hoch der Anzahl der Bits im Hostanteil minus 2. Die 2 wird abgezogen, weil die erste und die letzte Adresse in einem Subnetz f�r das Subnetz selbst und den Broadcast reserviert sind und nicht f�r Hosts verwendet werden k�nnen.

Die CIDR-Notation 10.0.0.0/20 hat folgende binaere Darstellung:
00001010.00000000.0000|0000.00000000 / 20

Die Anzahl der Bits im Netzwerkanteil ist 20, die Anzahl der Bits im Subnetz- und Hostanteil ist 12. 
Um die Anzahl der Bits im Subnetz- und Hostanteil aufzuteilen, muss man die gewuenschte Subnetzmaske waehlen. 
Die Subnetzmaske ist eine Bitfolge, die angibt, welche Bits zum Subnetzanteil und welche zum Hostanteil gehoeren. 
Die Bits, die 1 sind, geh�ren zum Subnetzanteil, die Bits, die 0 sind, gehoeren zum Hostanteil. 
Die Subnetzmaske muss immer mit einer Reihe von 1 beginnen und mit einer Reihe von 0 enden. 
Die Laenge der Subnetzmaske muss gleich der Laenge des Praefixes plus der L�nge des Subnetzanteils sein.
Um die Antwortm�glichkeiten zu ueberpr�fen, muss man die Subnetzmaske f�r jede Option berechnen und die Anzahl der Subnetze und Hosts daraus ableiten. Das ergibt:

A) 16 Subnetze mit je 4094 Hosts

Die Subnetzmaske f�r diese Option ist 255.255.240.0, die folgende binaere Darstellung hat:

11111111.11111111.1111|0000.00000000 / 24
Die Anzahl der Bits im Subnetzanteil ist 4, die Anzahl der Bits im Hostanteil ist 8. Die Anzahl der m�glichen Subnetze ist also:

2
4
=
16
24=16

Die Anzahl der m�glichen Hosts pro Subnetz ist also:

2
8
?
2
=
256
?
2
=
254
28?2=256?2=254

Diese Option ist falsch, da die Anzahl der Hosts pro Subnetz nicht mit der Angabe �bereinstimmt.

B) 64 Subnetze mit je 1022 Hosts

Die Subnetzmaske f�r diese Option ist 255.255.252.0, die folgende bin�re Darstellung hat:
11111111.11111111.1111|1100.00000000 / 22
Die Anzahl der Bits im Subnetzanteil ist 6, die Anzahl der Bits im Hostanteil ist 6. Die Anzahl der m�glichen Subnetze ist also:
2
6
=
64
26=64
Die Anzahl der m�glichen Hosts pro Subnetz ist also:
26?2=64?2
=
62
26?2=64?2=62

Diese Option ist richtig, da die Anzahl der Subnetze und Hosts mit der Angabe �bereinstimmt.

C) 256 Subnetze mit je 254 Hosts

Die Subnetzmaske f�r diese Option ist 255.255.255.0, die folgende bin�re Darstellung hat:

11111111.11111111.1111|1111.00000000 / 28

Die Anzahl der Bits im Subnetzanteil ist 8, die Anzahl der Bits im Hostanteil ist 4. Die Anzahl der m�glichen Subnetze ist also:
28=25628=256

Die Anzahl der m�glichen Hosts pro Subnetz ist also:
24?2=16?2=14
24?2=16?2=14

Diese Option ist falsch, da die Anzahl der Hosts pro Subnetz nicht mit der Angabe �bereinstimmt.

D) 1024 Subnetze mit je 62 Hosts

Die Subnetzmaske f�r diese Option ist 255.255.255.192, die folgende bin�re Darstellung hat:

11111111.11111111.1111|1111.11000000 / 26

Die Anzahl der Bits im Subnetzanteil ist 10, die Anzahl der Bits im Hostanteil ist 2. Die Anzahl der m�glichen Subnetze ist also:
210=1024210=1024

Die Anzahl der m�glichen Hosts pro Subnetz ist also:
22?2=4?2=222?2=4?2=2

Diese Option ist falsch, da die Anzahl der Hosts pro Subnetz nicht mit der Angabe �bereinstimmt.


Wie lautet die IP-Adresse des Netzwerks, wenn die IP-Adresse eines Hosts 192.168.12.34 und die Subnetzmaske 255.255.255.0 ist?
A) 192.168.12.0 B) 192.168.12.34 C) 192.168.0.0 D) 192.168.0.34

Die richtige Antwort ist A)

Um diese Aufgabe zu l�sen, muss man wissen, wie die IP-Adresse eines Netzwerks aus der IP-Adresse eines Hosts und der Subnetzmaske berechnet wird. Die IP-Adresse und die Subnetzmaske bestehen aus 32 Bit, die in vier Oktette zu je acht Bit unterteilt sind. Jedes Bit kann entweder 0 oder 1 sein. Die Bits, die 1 sind, geh�ren zum Netzwerkanteil der IP-Adresse, die Bits, die 0 sind, geh�ren zum Hostanteil der IP-Adresse. Die IP-Adresse eines Netzwerks ist diejenige, die alle Bits im Netzwerkanteil beibeh�lt und alle Bits im Hostanteil auf 0 setzt.

Die IP-Adresse eines Hosts 192.168.12.34 und die Subnetzmaske 255.255.255.0 haben folgende bin�re Darstellung:

11000000.10101000.00001100.00100010 (IP-Adresse)
11111111.11111111.11111111.00000000 (Subnetzmaske)

Die Anzahl der Bits im Netzwerkanteil ist 24, die Anzahl der Bits im Hostanteil ist 8. Um die IP-Adresse des Netzwerks zu erhalten, muss man die IP-Adresse und die Subnetzmaske mit einer logischen UND-Operation verkn�pfen. Das ergibt:

11000000.10101000.00001100.00100010
AND
11111111.11111111.11111111.00000000
-----------------------------------
11000000.10101000.00001100.00000000

Die IP-Adresse des Netzwerks ist also 11000000.10101000.00001100.00000000, die in dezimaler Schreibweise 192.168.12.0 ist.


Was ist der Unterschied zwischen TCP und UDP in Bezug auf die �bertragung von Datenpaketen im Internet?

A) TCP ist ein verbindungsorientiertes, zuverl�ssiges und geordnetes Protokoll, das eine Quittung f�r jedes gesendete Datenpaket erwartet, w�hrend UDP ein verbindungsloses, unzuverl�ssiges und ungeordnetes Protokoll ist, das keine Quittung f�r jedes gesendete Datenpaket erwartet.
B) TCP ist ein verbindungsloses, unzuverl�ssiges und ungeordnetes Protokoll, das keine Quittung f�r jedes gesendete Datenpaket erwartet, w�hrend UDP ein verbindungsorientiertes, zuverl�ssiges und geordnetes Protokoll ist, das eine Quittung f�r jedes gesendete Datenpaket erwartet.
C) TCP ist ein verbindungsorientiertes, unzuverl�ssiges und ungeordnetes Protokoll, das eine Quittung f�r jedes gesendete Datenpaket erwartet, w�hrend UDP ein verbindungsloses, zuverl�ssiges und geordnetes Protokoll ist, das keine Quittung f�r jedes gesendete Datenpaket erwartet.
D) TCP ist ein verbindungsloses, zuverl�ssiges und geordnetes Protokoll, das keine Quittung f�r jedes gesendete Datenpaket erwartet, w�hrend UDP ein verbindungsorientiertes, unzuverl�ssiges und ungeordnetes Protokoll ist, das eine Quittung f�r jedes gesendete Datenpaket erwartet.

Die richtige Antwort ist A)
TCP ist ein verbindungsorientiertes, zuverl�ssiges und geordnetes Protokoll, das eine Quittung f�r jedes gesendete Datenpaket erwartet, w�hrend UDP ein verbindungsloses, unzuverl�ssiges und ungeordnetes Protokoll ist, das keine Quittung f�r jedes gesendete Datenpaket erwartet. Das bedeutet, dass TCP eine Verbindung zwischen Sender und Empf�nger aufbaut, bevor die Daten �bertragen werden, und sicherstellt, dass die Daten vollst�ndig, fehlerfrei und in der richtigen Reihenfolge ankommen, indem es die Pakete nummeriert, best�tigt und gegebenenfalls erneut sendet. UDP hingegen sendet die Daten ohne Verbindungsaufbau und ohne Garantie, dass die Daten ankommen, korrekt sind oder in der richtigen Reihenfolge sind, indem es die Pakete einfach an die Zieladresse schickt. TCP ist daher f�r Anwendungen geeignet, die eine hohe Zuverl�ssigkeit und Qualit�t der Daten�bertragung erfordern, wie z.B. Webseiten, E-Mails oder Dateitransfers. UDP ist hingegen f�r Anwendungen geeignet, die eine hohe Geschwindigkeit und Effizienz der Daten�bertragung erfordern, wie z.B. Sprach- oder Videotelefonie, Online-Spiele oder Streaming.


Wie viel Speicherplatz benoetigt man, um ein 15-min�tiges Video in Full HD (1920 x 1080 Pixel) mit 30 Bildern pro Sekunde und einer Farbtiefe von 24 Bit zu speichern?
A) 1,2 GB B) 2,4 GB C) 3,6 GB D) 4,8 GB

Die richtige Antwort ist C)
Um diese Aufgabe zu l�sen, muss man wissen, wie der Speicherbedarf eines Videos berechnet wird. Der Speicherbedarf eines Videos h�ngt von der Aufl�sung, der Bildrate, der Farbtiefe und der L�nge des Videos ab. Die Formel lautet:

S=R�F�B�T
Dabei ist S der Speicherbedarf in Byte, R die Aufl�sung in Pixel, F die Bildrate in Bildern pro Sekunde, B die Farbtiefe in Bit und T die L�nge des Videos in Sekunden. Wenn man die gegebenen Werte einsetzt, erh�lt man:

=1920�1080�30�24�15�60=3.597.721.600Byte
S=1920�1080�30�24�15�60=3.597.721.600 Byte

Um die Antwort in Gigabyte zu erhalten, muss man den Speicherbedarf durch 1024 hoch 3 teilen. Das ergibt:
3.597.721.600
102/43=3,35 GB
102433.597.721.600??3,35 GB

Da die Antwortmoeglichkeiten nur eine Nachkommastelle haben, muss man den Speicherbedarf auf eine Nachkommastelle runden. Das ergibt 3,6 GB als richtige Antwort.



Welche der folgenden Aussagen �ber das OSI-Modell ist falsch?

A) Das OSI-Modell besteht aus sieben Schichten, die jeweils eine bestimmte Funktion bei der Daten�bertragung erf�llen.
B) Das OSI-Modell ist ein universeller Standard, der die Kommunikation zwischen verschiedenen Netzwerkger�ten und -protokollen erm�glicht.
C) Das OSI-Modell ist ein hierarchisches Modell, bei dem jede h�here Schicht auf den Diensten der darunterliegenden Schicht aufbaut.
D) Das OSI-Modell ist ein dynamisches Modell, bei dem die Schichten je nach Bedarf hinzugef�gt oder entfernt werden k�nnen.

Die richtige Antwort ist D)

Die Aussage D) ist falsch, da das OSI-Modell ein statisches Modell ist, bei dem die Schichten fest definiert und nicht ver�nderbar sind. Das OSI-Modell ist ein theoretisches Referenzmodell, das die ideale Struktur und Funktion der Netzwerkkommunikation beschreibt, aber nicht die tats�chliche Implementierung widerspiegelt. Das OSI-Modell ist daher nicht anpassbar an die unterschiedlichen Anforderungen und Gegebenheiten der realen Netzwerke.

Die Aussagen A), B) und C) sind richtig, da sie die grundlegenden Eigenschaften und Ziele des OSI-Modells korrekt wiedergeben. Das OSI-Modell besteht aus sieben Schichten, die jeweils eine bestimmte Funktion bei der Daten�bertragung erf�llen, wie z.B. die physikalische �bertragung, die Fehlerkontrolle, die Adressierung, die Verschl�sselung, die Anwendung usw. Das OSI-Modell ist ein universeller Standard, der die Kommunikation zwischen verschiedenen Netzwerkger�ten und -protokollen erm�glicht, indem es eine gemeinsame Sprache und ein gemeinsames Verst�ndnis f�r die Daten�bertragung schafft. Das OSI-Modell ist ein hierarchisches Modell, bei dem jede h�here Schicht auf den Diensten der darunterliegenden Schicht aufbaut, und bei dem die Daten von einer Schicht zur n�chsten weitergegeben werden, wobei sie entsprechend verpackt, entpackt, umgewandelt oder interpretiert werden.



Wie lautet der SQL-Befehl, um alle Datens�tze aus der Tabelle Kunden zu l�schen, die in Berlin wohnen?
A) DELETE FROM Kunden WHERE Stadt = �Berlin�; B) DROP FROM Kunden WHERE Stadt = �Berlin�; 
C) REMOVE FROM Kunden WHERE Stadt = �Berlin�; D) TRUNCATE FROM Kunden WHERE Stadt = �Berlin�;

Die richtige Antwort ist A)

Der SQL-Befehl, um alle Datens�tze aus der Tabelle Kunden zu l�schen, die in Berlin wohnen, ist DELETE FROM Kunden WHERE Stadt = �Berlin�. 
Dieser Befehl entfernt alle Zeilen aus der Tabelle Kunden, die die Bedingung Stadt = �Berlin� erfuellen.
)";
}
void pruefungsfragen2() {
    bool running = true;
    do {
        system("cls");
        int choice;
        clearScreen();
 cout <<   R"(

Binaere Addition:
Erlaeuterung: Bei der binaeren Addition werden zwei binaere Zahlen zusammengezaehlt, 
aehnlich wie bei der Dezimaladdition. Uebertraege koennen auftreten,
 wenn das Ergebnis gr��er als eins ist.
Beispiel: Addieren wir die binaeren Zahlen 101 und 111:
  101
+ 111
-----
 1010
L�sung: Die Addition ergibt 1010 in binaerer Form.
Binaere Subtraktion:
Erlaeuterung: Bei der binaeren Subtraktion wird eine binaere Zahl von einer anderen subtrahiert. 
Uebertraege koennen auftreten, wenn das Subtrahend groe�er als der Minuend ist.
Beispiel: Subtrahieren wir die bin�re Zahl 1101 von der binaeren Zahl 10010:
  10010
-  1101
-------
  1001
L�sung: Die Subtraktion ergibt 1001 in binaerer Form.
Bitweise UND-Verknuepfung:
Erl�uterung: Die bitweise UND-Verkn�pfung f�hrt eine logische UND-Operation auf den entsprechenden Bits von zwei binaeren Zahlen durch.
Beispiel: F�hren wir die bitweise UND-Verkn�pfung der binaeren Zahlen 101010 und 110011 durch:
markdown
Copy code
  101010
& 110011
--------
  100010
Loesung: Das Ergebnis der bitweisen UND-Verkn�pfung ist 100010 in binaerer Form.
Zweierkomplement:
Erl�uterung: Das Zweierkomplement wird verwendet, um negative Zahlen im Bin�rsystem darzustellen. Es wird berechnet, indem man die Bitwerte invertiert und dann eins addiert.
Beispiel: Berechnen wir das Zweierkomplement der binaeren Zahl 110101:
Original:  110101
Inversion: 001010
+ 1
--------
Komplement: 001011
Loesung: Das Zweierkomplement von 110101 ist 001011 in binaerer Form.

Umrechnung von Dezimal zu Bin�r und Hexadezimal:

Aufgabe: Konvertieren Sie die Dezimalzahl 217 in das Bin�r- und Hexadezimalsystem.
Erl�uterung: Um eine Dezimalzahl in das Bin�rsystem umzurechnen, f�hren Sie wiederholt Division durch 2 durch und notieren die Reste.
 Um eine Dezimalzahl in das Hexadezimalsystem umzurechnen, k�nnen Sie das Bin�rsystem als Zwischenschritt verwenden.
L�sung:
Dezimal zu Bin�r:
217 / 2 = 108 Rest 1
108 / 2 = 54 Rest 0
54 / 2 = 27 Rest 0
27 / 2 = 13 Rest 1
13 / 2 = 6 Rest 1
6 / 2 = 3 Rest 0
3 / 2 = 1 Rest 1
1 / 2 = 0 Rest 1
Das Bin�rgleichwert von 217 ist 11011001.
Bin�r zu Hexadezimal:
Die Bin�rzahl 11011001 in 4-Bit-Bl�cke aufteilen: 1101 und 1001. Konvertieren Sie dann jeden 4-Bit-Block in seine entsprechende 
Hexadezimalzahl: D und 9. Die Hexadezimaldarstellung von 217 ist daher D9.
Umrechnung von Hexadezimal zu Dezimal und Bin�r:

Aufgabe: Konvertieren Sie die hexadezimale Zahl AB3F in das Dezimal- und Bin�rsystem.
Erl�uterung: Um eine Hexadezimalzahl in das Dezimalsystem umzurechnen, multiplizieren Sie jeden Hexadezimalwert mit seiner entsprechenden 
Potenz von 16 und addieren die Ergebnisse. Um eine Hexadezimalzahl in das Bin�rsystem umzurechnen, konvertieren Sie jeden Hexadezimalwert in seine entsprechende 4-Bit-Bin�rzahl.
L�sung:
Hexadezimal zu Dezimal: AB3F = (A * 16^3) + (B * 16^2) + (3 * 16^1) + (F * 16^0) = (10 * 4096) + (11 * 256) + (3 * 16) + (15 * 1) = 43775.
Hexadezimal zu Bin�r:
A = 1010, B = 1011, 3 = 0011, F = 1111. Die Bin�rdarstellung von AB3F ist daher 1010101100111111.

Umrechnung von Speichereinheiten:

Aufgabe: Ein Dateiserver hat eine Festplatte mit einer Kapazit�t von 2 Terabyte (TB). Konvertieren Sie diese Kapazit�t in Gigabyte (GB) und Megabyte (MB).
Erl�uterung: Um Terabyte in Gigabyte umzurechnen, multiplizieren Sie mit 1024, und um Gigabyte in Megabyte umzurechnen, multiplizieren Sie erneut mit 1024.
L�sung:
Umrechnung von Terabyte in Gigabyte: 2 TB * 1024 GB/TB = 2048 GB.
Umrechnung von Gigabyte in Megabyte: 2048 GB * 1024 MB/GB = 2097152 MB.
Umrechnung von Daten�bertragungsraten:

Aufgabe: Ein Internetanschluss hat eine maximale Downloadgeschwindigkeit von 100 Megabit pro Sekunde (Mbps). Konvertieren Sie diese Geschwindigkeit 
in Kilobit pro Sekunde (kbps) und Megabyte pro Sekunde (MB/s).
Erl�uterung: Um Megabit pro Sekunde in Kilobit pro Sekunde umzurechnen, multiplizieren Sie mit 1000, und um Megabit pro Sekunde in Megabyte pro Sekunde umzurechnen,
 teilen Sie durch 8.
L�sung:
Umrechnung von Megabit pro Sekunde in Kilobit pro Sekunde: 100 Mbps * 1000 kbps/Mbps = 100000 kbps.
Umrechnung von Megabit pro Sekunde in Megabyte pro Sekunde: 100 Mbps / 8 MB/Mbps = 12.5 MB/s.
Umrechnung von Zeiteinheiten:

Aufgabe: Ein Datenbankbackup dauert 3 Stunden und 45 Minuten. Konvertieren Sie diese Zeit in Minuten.
Erl�uterung: Um Stunden in Minuten umzurechnen, multiplizieren Sie mit 60, und addieren Sie die verbleibenden Minuten.
L�sung:
Umrechnung von Stunden in Minuten: 3 Stunden * 60 Minuten/Stunde + 45 Minuten = 180 Minuten + 45 Minuten = 225 Minuten.

SQL Fragen und Antworten:
Frage: Erkl�ren Sie den Unterschied zwischen INNER JOIN und LEFT JOIN in SQL.
Antwort:
INNER JOIN: Gibt nur Datens�tze zur�ck, die in beiden verkn�pften Tabellen vorhanden sind, basierend auf einer angegebenen Bedingung.
LEFT JOIN: Gibt alle Datens�tze aus der linken Tabelle und die �bereinstimmenden Datens�tze aus der rechten Tabelle zur�ck. Falls keine �bereinstimmung
 gefunden wird, werden NULL-Werte f�r die Spalten der rechten Tabelle zur�ckgegeben.
Frage: Schreiben Sie eine SQL-Abfrage, um die Anzahl der Mitarbeiter in jeder Abteilung zu ermitteln.
Antwort:
SELECT Abteilung, COUNT(*) AS Anzahl_Mitarbeiter
FROM Mitarbeiter
GROUP BY Abteilung;
Frage: Was versteht man unter Normalisierung in Bezug auf Datenbanken und warum ist sie wichtig?
Antwort:
Normalisierung ist der Prozess, durch den Datenbankdesigns in mehrere Tabellen aufgeteilt werden, um Redundanz zu minimieren und Datenintegrit�t zu gew�hrleisten.
Sie ist wichtig, um Anomalien wie Duplikate, Aktualisierungsanomalien und Einf�geanomalien zu vermeiden und die Effizienz bei der Abfrageausf�hrung zu verbessern.
Frage: Erl�utern Sie den Unterschied zwischen DELETE und TRUNCATE in SQL.
Antwort:
DELETE: L�scht einzelne Zeilen aus einer Tabelle unter Ber�cksichtigung der WHERE-Bedingung. Es l�st Trigger aus und hat eine h�here Auswirkung auf die Leistung.
TRUNCATE: L�scht alle Zeilen aus einer Tabelle ohne WHERE-Bedingung. Es ist schneller als DELETE, l�st jedoch keine Trigger aus und kann nicht r�ckg�ngig gemacht werden.
C++ Fragen und Antworten:
Frage: Was ist der Unterschied zwischen einer Referenz und einem Zeiger in C++?
Antwort:
Eine Referenz ist ein Alias f�r eine bereits existierende Variable und kann nicht neu zugewiesen werden.
Ein Zeiger ist eine Variable, die die Adresse einer anderen Variablen enth�lt und neu zugewiesen werden kann.
Frage: Erstellen Sie einen Pseudocode fuer die Berechnung der Fakultaet einer Zahl.
Antwort:
FUNKTION Fakult�t(n: INTEGER) : INTEGER
BEGIN
    WENN n == 0 DANN
        RETURN 1
    SONST
        RETURN n * Fakult�t(n - 1)
    ENDE WENN
END FUNKTION
Frage: Erstellen Sie ein Struktogram in ASCII-Art f�r eine Schleife, die von 1 bis 10 z�hlt und die Summe der Zahlen berechnet.
Antwort:
+----------+
|  START   |
+----------+
     |
     V
+----------+
|   i = 1  |
+----------+
     |
     V
+-------------+
|  WHILE i <= 10 |
+-------------+
     |
     V
+---------------+
|  sum = sum + i |
+---------------+
     |
     V
+-------------+
|   i = i + 1 |
+-------------+
     |
     V
+-------------------+
|  END WHILE   |
+-------------------+
Frage: Erstellen Sie ein PAP in ASCII-Art f�r die Berechnung des Durchschnitts einer Reihe von Zahlen.
Antwort:
Anfang
|
| Eingabe der Anzahl der Zahlen n
| Eingabe der n Zahlen
| Summe = 0, count = 0
| F�r i von 1 bis n
|   Summe = Summe + Zahl[i]
|   count = count + 1
| Durchschnitt = Summe / n
| Ausgabe des Durchschnitts
                                                                    0 - zuruck
)";
if (!(cin >> choice)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    continue;
}
switch (choice) {
case 0:
    running = false;
    break;
default:
    cout << "Ungueltige Auswahl. Bitte versuchen Sie es erneut." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    break;
}
if (_kbhit()) {
    char key = _getch();
    if (key == 27 || key == '0') {
        running = false;
    }
}
    } while (running);
}

void pruefungsfragen7() {
    bool running = true;
    do {
        system("cls");
        int choice;
        clearScreen();
        cout << R"(
Pruefungsfragen AP1 Fachinformatiker 


                                     1 -   0 - zurueck
)";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            continue;
        }
        switch (choice) {
        case 0:
            running = false;
            break;
        case 1:
            animateTransition();
            clearScreen();
            
            break;
        default:
            cout << "Ungueltige Auswahl. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }
        if (_kbhit()) {
            char key = _getch();
            if (key == 27 || key == '0') {
                running = false;
            }
        }
    } while (running);
}
void Fachbegriffe() {
    bool running = true;
    do {
        system("cls");
        int choice;
        clearScreen(); 
   cout << R"(

SQL-Fachwoerter:
INNER JOIN
LEFT JOIN
Normalisierung
DELETE
TRUNCATE
Datenbankdesign
Datenintegrit�t
Trigger
Redundanz
Aktualisierungsanomalien
Einf�geanomalien

C++-Fachwoerter:
Referenz
Zeiger
Pseudocode
Struktogram
PAP (Programmablaufplan)
Schleife
Variable
Funktion
Parameter
Fakultaet

Projektmanagement-Fachwoerter:
Wasserfallmodell
Agiles Projektmanagement
Phasenmodell
Projektphasen
Projektinitiierung
Projektplanung
Projekt�berwachung
Projektausf�hrung
Projektabschluss
Risikomanagement
Risikoanalyse
Risikobewertung
Ressourcenmanagement
Stakeholder
Kommunikationsplan
Meilenstein
Projektbericht
Projektdokumentation
Projektteam
Projektressourcen
Projektbudget
Projektzeitplan
Projektziele
Projektrisiken
Projektcontrolling
Projektsteuerung
Projektmanagement-Tools
Gantt-Diagramm
Critical Path Method (CPM)
Earned Value Management (EVM)
Work Breakdown Structure (WBS)
Change Management
Stakeholder-Management
Kommunikationsmanagement
Qualitaetsmanagement

Netzwerkgrundlagen-Fachwoerter:
OSI-Modell
TCP/IP-Protokoll
LAN (Local Area Network)
WAN (Wide Area Network)
WLAN (Wireless Local Area Network)
Router
Switch
Hub
IP-Adresse
Subnetz
DNS (Domain Name System)
DHCP (Dynamic Host Configuration Protocol)
Firewall
NAT (Network Address Translation)
Routing
ARP (Address Resolution Protocol)
VLAN (Virtual Local Area Network)
VPN (Virtual Private Network)
IPv4
IPv6
Ports
Ping
Traceroute
Bandbreite
Latenz = Verz�gerung

Betriebssystem-Fachw�rter:
Kernel
Benutzerschnittstelle
Dateisystem
Prozessverwaltung
Speicherverwaltung
Ein-/Ausgabeverwaltung
Multitasking
Multiprocessing
User Mode
Kernel Mode
Treiber
Booten
Dateirechte
Befehlszeile
GUI (Graphical User Interface)
Dateimanagement
Systemaufrufe
Dienste
Scheduling
Paging
Virtual Memory

IT-Sicherheit-Fachw�rter:
Verschl�sselung
Authentifizierung
Autorisierung
Firewalls
Antivirensoftware
Malware
Phishing
Spoofing
Biometrie
Zugriffskontrolle
Intrusion Detection System (IDS)
Intrusion Prevention System (IPS)
Verschl�sselungsalgorithmen
Public Key Infrastructure (PKI)
Zero-Day-Exploit
Patch-Management
Sicherheitsrichtlinien
Sicherheitsaudit
Datenschutz
Datensicherung
Incident Response
Penetrationstest = Test der Cybersecurity zum ueberpruefen wie sicher ein System ist zB. durch Hacken der Firewall
                                     1 - Weitere Definitionen  0 - zurueck
)";
if (!(cin >> choice)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    continue;
}
switch (choice) {
case 0:
    running = false;
    break;
case 1:
    animateTransition();
    clearScreen();
    defmain();
    break;
default:
    cout << "Ungueltige Auswahl. Bitte versuchen Sie es erneut." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    break;
}
if (_kbhit()) {
    char key = _getch();
    if (key == 27 || key == '0') {
        running = false;
    }
}
    } while (running);
}
void themengebiete() {
    bool running = true;
    do {
        system("cls");
        int choice;
        clearScreen();
    cout << R"(
 IHK Fachinformatiker Zwischenpruefung Teil 1 Einrichtung eines IT-gestuetzten Arbeitsplatz

                                                                                                                                                                                                                     
Diagramme
UML UnifiedModelingLanguage Diagramm 
Gantt Diagramm, Meilensteine, Projektphasen als Balken, Ressourcen Zuweisen, Vorg�nger , Vorwaertsplanung , Deadline 
Zeitplan  
Use-Case-Diagramm    User/Kunde -> Firma -> 
ERM Entity-Relation-Model  Entitaet-Attribut-Beziehung 1-n n-m chen-Notation
Klassendiagramm   Vererbung , Realisierung , Abhaengigkeit , Aggregation , Zusammensetzung , Beziehung 
Struktogramm    Kopf-Fu�gesteuerte Schleifen
PAP Programmablaufplan   Start->Eingabe->Verzweigungen->Vorgaenge->Ausgabe->Ende
Ablaufdiagramm 
Netzplan    Pufferzeit berechnen, kritischer Pfad

Projektmanagement  
Definition,Planung,Realisierung,Abschluss,Evaluation
Projektstrukturplan
Lastenheft/Pflichtenheft IST/SOLL Zustand Problemanalyse
Ereignisgesteuerte Prozesskette
Prokura, Unternehmensfuehrung
Stakeholder Management
Pareto Prinzip      80% in 20% der Zeit schaffen
Eisenhower-Matrix
Six-Sigma  
Total Quality Management    Kundenorientierung, Kontinuierliche Verbesserung, Prozessoptimierung
Workflow Management 
Change Management 
Geschaeftsprozesse Hauptprozesse:   Auftragseingang,Herstellung,Lieferung,Abrechnung Teilprozesse: Vorbereitung,Fertigung,Kontrolle
Anbietervergleich
Datenanalyse   ERP System 
Fehleranalyse: Ishikawa Diagramm Fishbone Architektur
KaiZen    stetige Ver�nderung zum Besseren
Lean Management
Bottleneck    wenn es mal Eng wird
PDCA Zyklus   Plan,do,check,act Demingkreis
AIDA Prinzip   Attention,Interest,Desire,Action
Wasserfallmodell   aufeinanderfolgende Phasen: Analyse->Entwurf->Implementation->Tests->Wartung
V-Modell
Spiralmodell
agiles Projektmanagement  -> Gegenteil vom Wasserfallmodell

Wirtschaft
Marktformen Oligopol (ein paar Anbieter),Polypol (viele Anbieter),Monopol (ein Anbieter)
Organisatiosstrukturen  Stablinien,Matrix,Hierarchisch,Prozessorientiert
Unternehmensformen GmbH , OHG , UG , AG , GbR, KG, eG
Arten von Guetern  materiel/immateriel/Konsum/investitions/verbrauchs -G�ter
Produktionsformen Primaer: Sekundaer Teritaer 
Vertragsrecht Oeffentliches / Privates Recht  
Vertragsarten Kauf,Schenkung,Tausch    Dienstvertrag->Leistung Werksvertrag->Werkstueck   
Miet, Pacht, Darlehen, Leih
(Kaufvertrag entsteht durch Antrag und Annahme)
Besitz/Eigentum  Uebertragung
Juristische Personen    Privatrecht: Gesellschaften,Vereine  �ffentliches Recht: Gemeinden,Universit�ten
Rechtsobjekte  -Rechte: Forderungen,Pfandrechte,Lizenz,Patent  -Sachen: mobil/immobil
Rechtsgesch�fte  -Willenserklaerung -Formvorschriften -Einseitig/Zweiseitig  -Holschuld/Bringschuld -Nichtigkeit
Geschaeftsf�higkeit  naja:1-7,bedingt: 7-17,voll: 18-...Jahre
Rentabilitaetsrechnung %=(Gewinn*100)/Kapital
Bilanzrechnung  Aktiva/Passiva 
Deckungsbeitragsberechnung

Qualitaetsmanagement  KVP 
SMART Optimierung   Spezifisch,Messbar,Akzeptiert,Realistisch,Terminiert
Nutzwertanalyse
SWOT Analyse   Strenghten Weaknesses Opportunities Threats
ABC Analyse   -wasistamwichtigsten?
Magisches Dreieck/Viereck   3Eck: Zeit&Kosten&Qualit�t / 4Eck:stabilerPreis&Beschaeftigte++&Gleichgewicht&Moneyflow
Flussdiagramm Eingabe->Prozessschritt1->Datei->Bedingung->Prozessschritt2->Ende
Bedarfsanalyse  was wollen die Leute?
Beduerfnispyramide  was brauchen die Leute?
Kundeninterview & Kundenberatung
Skonto & Rabatt & Bezugskosten & BreakEvenPoint berechnen  Dreisatz / Prozentrechnung
Datenschutz DSGVO BDSG  / Compliance 
Arbeitsschutz  -> Gesundheit, Ergonomie 

IT Security
CSI IT Grundschutz BSI Vertraulichkeit/Privatsphaere,Integritaet/Unverfaelscht,Verfuegbarkeit
IT Sicherheitsgesetz
IP Sec Protokoll in IPv6 integriert
Zugriff / Zugang
Maleware Arten Virus, Trojaner, Wurm,  Ransomware
Angriffsarten  ManintheMiddle,Phishing,SocialEngineering, Exploit, SQL Injection, Spoofing, DDOS, Cross-Site, BruteForce,
Kryptografie Chiffre / MD5
symetrische/asymetrische Verschluesselung / digitale Signatur / Hashwerte mit Pruefsumme  Absender privateKey Empfaenger public Key 
Penetrationstest Whitebox/Blackbox 

Hardware
Komponenten  Mainboard, CPU, Netzteil, Grafikkarte, HDD ,SSD, M2SSD
Desktop, Laptop, Thin Client, Tablet, Handy 
Bildschirmaufl�sung  4K , 8K 
Anschluesse: SATA,PCIexpress, HDMI,DisplayPort,Thunderbird,VGA,DVI,USBc3.0,LAN,Koaxial
Uebertragungsrate, Kabel LAN Cat.7   Single Mode /   MIMO 
Dateisysteme   NTFS, FAT32, ext4

Netzwerktechnik
Netzwerkplan WAN:DSL  LAN:Ethernet,WLAN - Firewall - Switch - Access Point - Router PAN: Bluetooth 
OSI Modell  7 Schichten  / TCP Modell 4 Schichten
Netzwerkprotokolle ARP �bersetzung IP-MAC , BGP ,DNS, DHCP, FTP, HTTP, SMTP, IP, TCP, UDP  Apipa
Netzwerktopologien  Stern,Ring,Bus,Linie,Baum,Vermascht 
3/4Way TCP/DHCP Handshake  4way: Dis,Offer,request,ack   3way: syn,ack,
IMAP,HTTPS,TCP,UDP,ICMP,DSL, WLAN, IPsec, MAC,  VPN
Port Forwarding
Lizenzmodelle GNU,OpenSource
Betriebssysteme: Linux,  R-W-X  sudo 
Windows Server/Client
Terminal
Serverarchitektur DHPC Server
Arten von Firewalls software&hardware 
IaaS,SaaS,PaaS Cloud   Public,Private,Hybrid
Active Directory: Userverzeichnis mit Gruppenrichtlinien   
Domain Controller 
RAID Systeme 
RAID1:Spiegelung RAID0:Streifen RAID5:Streifen mit Parit�t RAID6:Streifen mit doppelter Parit�t 
RAID10:Spiegelung und Streifen JBOD: JustABunchOfDiscs
NAS SAN DAS Server
Mesh Netzwerk
Subnetting   Subnetzmasken, CIDR (Classless Inter-Domain Routing), Netzwerkadressen
Praefix berechnen Netzwerk/Hostanteil /64
DNS   Funktionsweise, Forward Lookup, Reverse Lookup, Zonen, DNS-Suffix
VPN-Technologien   OpenVPN, IPSec, L2TP
Proxy-Server   Einsatz, Funktionen, Typen (Forward Proxy, Reverse Proxy)
IP-Konfiguration   IPv4/IPv6-Adressen, statische vs. dynamische Adressierung
Patch-Management   Softwareaktualisierungen, Sicherheits-Patches
Load Balancing    Verteilung von Netzwerk- oder Serverlasten
Virtualisierung   VMware, Hyper-V, Oracle VirtualBox

Elektrotechnik   
Reihenschaltung Parallelschaltung  Halbeiter Transistor 
P=U*I Leistung=Spannung*Stromstaerke Watt=Volt*Ampere
Schaltkreise XOR,OR,NAND,AND,NOR 
BIOS 16BitMBR / UEFI 32/64 Bit GPT    Secure Boot
USV unterbrechungsfreie Stromversorgung berechnen  Q= Ampere Laufzeit t=Q/I I=Strom t=Zeit 
Schutzklassen 1: Erdung und Anschluss an Schutzleiter / 2: doppelte Isolierung / 3: kleine Spannung 
Zahlensysteme Bin�r/Dezi/Hexa   Umrechnung-> Divisionsrest   
ASCI  UTF Zeichensatz  0-127 ueberall gleich  128-255  
Speicherplatz / Uebertragungsgeschwindigkeit berechnen
Umrechnung      1byte = 8 bit        Kilo,Mega,Giga,Terra,Penta - bit / byte 
Kibi/Mebi/byte *1028  -> KiB: 1024^1 2^10 , MiB: 1024^2 2^20 GiB: 1024^3 2^30  
Farbtiefe  dpi=  Pixel =   1 cm=2,54 inch    RGB= 24 bit pro Pixel
Dateiformate SVG, PDF , PNG , XML , PPT , WAV, TIFF , JPG , XLS , BMP , CSV, DLL , JSON
Englisch �bersetzen
Industrie 4.0 / BigData/AI SmartHome IoT
DIN ISO Normen   ISO/IEC-27001-Cybersec   ISO 9001-Qualitaetsmanagement  DIN-69901-Projektmanagement
EVA Prinzip  Eingabe/Verarbeitung/Ausgabe 

Programmiersprachen: 
IDE  VS Code, Notepad++   
C++   include <bibliotheken>  int main() { }  EOF rand()  index 
SQL -SELECT * FROM WHERE HAVING SUM() AVG() MAX() MIN() COUNT() GRUP BY
Alias LIKE>= <= != % ? ROLLBACK;   
1.-3. Normalform  Primary Key - Foreign Key DQL DDL DML 
MicrosoftVisualCode, 
bash PowerShell
PHP Scriptsprache
HTML Grundger�st einer Website 
CSS Corporate Design,  Responsive Design  
Java Script
Datentypen int, char, double, float, boolean, string, Array, void, struct
objektorientierte Programmierung:  Klassen mit Eigenschaften und Methoden / Hierarchische Vererbung 
Beziehung 1 : 0..n   0..n: 0..m  1:1
Datenbankstruktur  relational SQL / objektiv 
Pseudocode   Wiederhole solange <Bedingung> 
Schreibtischtest
                                  
                                 0 - zurueck
)";
    if (!(cin >> choice)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        continue;
    }
    switch (choice) {
    case 0:
        running = false;
        break;
    default:
        cout << "Ungueltige Auswahl. Bitte versuchen Sie es erneut." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        break;
    }
    if (_kbhit()) {
        char key = _getch();
        if (key == 27 || key == '0') {
            running = false;
        }
    }
} while (running);
}

int pruefungmain()
{

        bool running = true;
        do {
            system("cls");
            clearScreen();
            int choice;
            cout << R"(


                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |------------------------                               |  |     
                                                  |  | ' 1.  Pruefungsfragen1 |                              |  |    
                                                  |  | ' 2.  Pruefungsfragen2 |                              |  |     
                                                  |  | ' 3.  Pruefungsfragen3 |                              |  |     
                                                  |  | ' 4.  Pruefungsfragen4 |                              |  |     
                                                  |  | ' 5.  Pruefungsfragen5 |                              |  |    
                                                  |  | ' 6.  Pruefungsfragen6 |                              |  |     
                                                  |  | ' 7.  Pruefungsfragen7 |                              |  |     
                                                  |  | ' 8.  Themengebiete    |                              |  |     
                                                  |  | ' 9.  Fachbegriffe     |                              |  |     
                                                  |  | '                      |                              |  |     
                                                  |  | ' 0. zurueck           |                              |  |     
                                                  |  | @----------------------                               |  |     
                                                  |  |-------------------------------------------------------|  |
                                                  |__________________________________________________________|  /      
                                                    (__________________________________________________________/        
                                                ______/               [___________]                                     
                                               /                                                                        
                                              (__________________________________________________________________        
                                             / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __  
                                            /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # / (  )  
                                           /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /  (__)  
                                          /__________________________________________________________________/          

)";
            if (!(cin >> choice))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(1));
                continue;
            }
            switch (choice)
            {
            case 1:
                animateTransition();
                clearScreen();
                pruefungsfragen();
                break;
            case 2:
                animateTransition();
                clearScreen();
                pruefungsfragen2();
                break;
            case 3:
                animateTransition();
                clearScreen();
                pruefungsfragen3();
                break;
            case 4:
                animateTransition();
                clearScreen();
                pruefungsfragen4();
                break;
            case 5:
                animateTransition();
                clearScreen();
                pruefungsfragen5();
                break;
            case 6:
                animateTransition();
                clearScreen();
                pruefungsfragen6();
                break;
            case 7:
                animateTransition();
                clearScreen();
                pruefungsfragen7();
                break;
            case 8:
                animateTransition();
                clearScreen();
                themengebiete();
                break;
            case 9:
                animateTransition();
                clearScreen();
                Fachbegriffe();
            case 0:
                running = false;
                break;
            default:
                cout << "Ungueltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
            // �berpr�fen, ob die Escape-Taste oder die Null-Taste gedr�ckt wurde
            if (_kbhit()) {
                char key = _getch();
                if (key == 27 || key == '0') {
                    running = false;
                }
            }
        } while (running);
    return 0;
}