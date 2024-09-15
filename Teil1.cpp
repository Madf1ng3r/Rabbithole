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
Der Prozessor in einem Computer ist für die Ausführung von Befehlen und die Verarbeitung von Daten zuständig.
Erläutern Sie die Unterschiede zwischen HDD und SSD.
HDDs (Hard Disk Drives) verwenden magnetische Speichermedien, während SSDs (Solid State Drives) Flash-Speicher verwenden. 
SSDs sind in der Regel schneller und langlebiger als HDDs.
Was versteht man unter Arbeitsspeicher?
Der Arbeitsspeicher ist ein temporärer Speicher, der vom Prozessor verwendet wird, 
um Daten und Befehle während der Ausführung von Programmen zwischen zu speichern.

Wie installiert man ein Betriebssystem auf einem Computer?
Welche Aufgaben hat ein Betriebssystem?
Betriebssysteme sind für die Verwaltung von Ressourcen, die Ausführung von Anwendungen, 
die Benutzeroberfläche und die Kommunikation mit der Hardware verantwortlich. 
Netzwerkgrundlagen:

Erklären Sie den Unterschied zwischen LAN und WAN.
LAN (Local Area Network) ist ein lokales Netzwerk, das Geräte in einem begrenzten physischen Bereich miteinander verbindet, 
während WAN (Wide Area Network) ein größeres Netzwerk ist, das über größere geografische Entfernungen verteilt ist.
Was sind die Vorteile von drahtlosen Netzwerken (WLAN)?
Wie funktioniert die Kommunikation über das TCP/IP-Protokoll?
Netzwerksicherheit und -management:

Welche Maßnahmen können ergriffen werden, um ein Netzwerk vor unbefugtem Zugriff zu schützen?
Wie funktioniert das Prinzip der Verschlüsselung in einem Netzwerk?
Erläutern Sie den Zweck von Firewalls und Intrusion Detection Systems (IDS).

Softwareinstallation und -konfiguration:
Wie installiert man eine Anwendung unter Windows?
Was ist der Unterschied zwischen Freeware und Shareware?
Welche Möglichkeiten gibt es, um Software zu aktualisieren?

Benutzer- und Rechteverwaltung:
Wie legt man unter Windows einen neuen Benutzer an?
Welche Rechte kann ein Benutzer in einem Netzwerk haben?
Warum ist eine differenzierte Rechtevergabe wichtig?

Datenschutz und Datensicherheit:
Was versteht man unter Datenschutz und warum ist er wichtig?
Welche Maßnahmen können ergriffen werden, um Daten vor Verlust oder Diebstahl zu schützen?
Was sind die wichtigsten Bestandteile eines Datenschutzkonzepts?

Projektmanagement im IT-Bereich:
Erläutern Sie den Projektmanagementprozess.
Was sind typische Meilensteine in einem IT-Projekt?
Wie geht man mit Projektverzögerungen um?

Binäre und Hexadezimale Zahlensysteme:
Erläutern Sie den Unterschied zwischen dem binären und dem hexadezimalen Zahlensystem.
Konvertieren Sie die binäre Zahl 10101110 in das hexadezimale Zahlensystem.
Wandeln Sie die hexadezimale Zahl 2F in das binäre Zahlensystem um.
Bit- und Byterechnung:

Wie viele Bits sind in einem Byte enthalten?
Berechnen Sie die Anzahl der möglichen Kombinationen von 8 Bits.
Wenn ein Byte 256 verschiedene Werte haben kann, wie viele Bits sind dann benötigt?
Addition und Subtraktion im Binärsystem:

Führen Sie die binäre Addition 101 + 111 durch und geben Sie das Ergebnis in binärer Form an.
Subtrahieren Sie die binäre Zahl 1101 von der binären Zahl 10010.
Wie lautet das Ergebnis der binären Subtraktion 101010 - 11111?

Logische Verknüpfungen und Bitoperationen:
Erläutern Sie die logischen Operatoren AND, OR und XOR.
Führen Sie die bitweise UND-Verknüpfung der binären Zahlen 101010 und 110011 durch.
Welches Ergebnis ergibt sich aus der bitweisen XOR-Verknüpfung der binären Zahlen 101101 und 110010?

Komplementbildung und Zweierkomplement:
Was ist das Einerkomplement einer binären Zahl und wie wird es gebildet?
Berechnen Sie das Zweierkomplement der binären Zahl 110101.
Wie lautet die dezimale Darstellung der binären Zahl 11111111 im Zweierkomplement?

Netzwerkgrundlagen:
Was versteht man unter dem OSI-Modell und welche Funktion hat es?
Erläutern Sie den Unterschied zwischen einem Hub und einem Switch.
Welche Aufgaben hat ein Router in einem Netzwerk?
Betriebssysteme:

Was sind die Hauptaufgaben des Kernels in einem Betriebssystem?
Unterscheiden Sie zwischen einem 32-Bit- und einem 64-Bit-Betriebssystem.
Nennen Sie verschiedene Dateisysteme und ihre Eigenschaften.

Datenbanken und SQL:
Was ist eine Datenbank und welche Vorteile bietet sie?
Erläutern Sie den Unterschied zwischen einer relationalen und einer NoSQL-Datenbank.
Schreiben Sie eine SQL-Abfrage, um alle Mitarbeiter aus einer Tabelle namens "Mitarbeiter" abzurufen, deren Gehalt über 3000 Euro liegt.
Programmierung:

Was ist der Unterschied zwischen einer Compiler- und einer Interpreter-Sprache?
Nennen Sie die grundlegenden Datentypen in der Programmierung und ihre Verwendung.
Schreiben Sie ein einfaches Programm in einer Programmiersprache Ihrer Wahl, das die ersten 10 Primzahlen ausgibt.

IT-Sicherheit:
Was versteht man unter einem Denial-of-Service-Angriff und wie kann man sich davor schützen?
Erläutern Sie den Unterschied zwischen Authentifizierung und Autorisierung.
Welche Maßnahmen können ergriffen werden, um sensible Daten zu verschlüsseln?
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
Das OSI-Modell ist ein Referenzmodell, das den Aufbau von Netzwerkprotokollen in sieben Schichten unterteilt, um die Interoperabilitaet verschiedener Netzwerkkomponenten zu gewährleisten.
Ein Hub ist ein Gerät, das Datenpakete an alle angeschlossenen Geraete in einem Netzwerk weiterleitet, während ein Switch Datenpakete nur an das Zielgerät sendet.
Ein Router ist ein Netzwerkgerät, das den Datenverkehr zwischen verschiedenen Netzwerken steuert und die richtigen Wege für die Datenpakete festlegt.

Betriebssysteme:
Der Kernel ist der Kern eines Betriebssystems und ist für die Verwaltung von Ressourcen wie Prozessen, Speicher und Ein-/Ausgabegeräten verantwortlich.
32-Bit- und 64-Bit-Betriebssysteme unterscheiden sich in der Größe der Datenbusse, was Auswirkungen auf die maximal adressierbare Speichermenge hat.
Beispiele für Dateisysteme sind FAT32, NTFS (unter Windows), ext4 (unter Linux) und HFS+ (unter macOS).

Datenbanken und SQL:
Eine Datenbank ist eine strukturierte Sammlung von Daten, die organisiert und effizient verwaltet werden kann, um darauf zuzugreifen und sie zu aktualisieren.
Relationale Datenbanken speichern Daten in Tabellen und ermöglichen komplexe Abfragen mithilfe von SQL (Structured Query Language), waehrend NoSQL-Datenbanken
flexibler sind und verschiedene Datenspeichermodelle unterstützen.
SQL-Abfrage zum Abrufen von Mitarbeitern mit einem Gehalt über 3000: SELECT * FROM Mitarbeiter WHERE Gehalt > 3000;

Programmierung:
Compiler-Sprachen werden in Maschinencode übersetzt, während Interpreter-Sprachen Zeile für Zeile interpretiert und ausgeführt werden.
Beispiele für grundlegende Datentypen sind Integer, Float, String und Boolean, die jeweils unterschiedliche Arten von Daten repräsentieren.
Ein einfaches Programm zur Ausgabe der ersten 10 Primzahlen könnte durch eine Schleife realisiert werden, die Zahlen auf Primzahl testet und diese ausgibt.

IT-Sicherheit:
Ein Denial-of-Service-Angriff zielt darauf ab, einen Dienst durch Überlastung unzugänglich zu machen, 
während Maßnahmen wie Firewalls und Intrusion Detection Systems vor solchen Angriffen schützen können.
Authentifizierung überprüft die Identität eines Benutzers, während Autorisierung bestimmt, welche Aktionen ein Benutzer ausführen darf.
Datenverschlüsselung schützt sensible Daten vor unbefugtem Zugriff, indem sie sie in eine 
nicht lesbare Form umwandelt, die nur mit dem richtigen Schlüssel wiederhergestellt werden kann.

Webtechnologien:
HTTPS ist eine sichere Variante von HTTP, die eine verschlüsselte Kommunikation zwischen Browser und Server ermöglicht.
Das Frontend einer Website ist die Benutzeroberfläche, die vom Benutzer interagiert wird, 
während das Backend die Serverseite ist, die die Logik und Datenverarbeitung enthält.
Cookies sind kleine Dateien, die vom Browser gespeichert werden und Informationen über die Interaktion 
des Benutzers mit der Website speichern können, um die Benutzererfahrung zu verbessern.
Grundlagen der IT-Projektarbeit:

Das Wasserfallmodell ist ein sequenzielles Modell, bei dem die Phasen (Anforderungsanalyse, Entwurf, 
Implementierung, Test, Bereitstellung) nacheinander durchlaufen werden, während 
agile Methoden iterative Ansätze mit flexibleren Prozessen verwenden.
Phasen des Projektmanagements umfassen Initiation, Planung, Durchfuehrung, Ueberwachung und Abschluss.
Risiken in einem IT-Projekt können durch Risikoanalysen und -bewertungen identifiziert und 
bewertet werden, um geeignete Gegenmaßnahmen zu entwickeln.)

Datenbanken und SQL:
Eine Datenbank ist eine strukturierte Sammlung von Daten, die auf einem Computersystem gespeichert ist 
und von einem Datenbankmanagementsystem (DBMS) verwaltet wird. Datenbanken ermöglichen 
effiziente Datenorganisation, -speicherung und -abfrage.
SQL (Structured Query Language) ist eine spezielle Programmiersprache, die für die Verwaltung und Abfrage 
von Datenbanken verwendet wird. Mit SQL können Datenbanken erstellt, geändert, gelöscht 
und abgefragt werden, um spezifische Informationen abzurufen.

Programmierung:
Programmierung bezieht sich auf den Prozess des Schreibens, Testens und Wartens von Quellcode, um Softwareanwendungen zu erstellen.
 Programmiersprachen wie Java, Python, C++, JavaScript usw. werden verwendet, um 
Anweisungen zu formulieren, die von einem Computer ausgeführt werden können.
Compiler-Sprachen werden in Maschinencode übersetzt, bevor sie ausgeführt werden, während Interpreter-Sprachen 
Zeile für Zeile interpretiert und ausgeführt werden. Compiler erzeugen normalerweise effizienteren Code, 
während Interpreter eine schnellere Entwicklungszeit ermöglichen.

IT-Sicherheit:
IT-Sicherheit befasst sich mit dem Schutz von Computersystemen vor Diebstahl, Beschädigung oder unbefugtem Zugriff auf Daten. 
Dies umfasst Maßnahmen wie Zugriffskontrolle, Verschlüsselung, Firewalls, Antivirensoftware und Sicherheitsrichtlinien.
Ein Denial-of-Service (DoS)-Angriff zielt darauf ab, eine Dienstleistung, einen Host oder eine Infrastruktur 
durch Überlastung unbrauchbar zu machen. Dies geschieht durch das Senden einer überwältigenden 
Menge von Anfragen oder Datenverkehr, die die Ressourcen des Ziels erschöpfen.

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

A) Die Ziele des Projektmanagements sind, die Anforderungen des Kunden zu erfüllen, die Kosten, die Zeit und die Qualität des Projekts zu planen, zu steuern und zu überwachen, und die Risiken und Probleme des Projekts zu identifizieren und zu lösen.

B) Die Ziele des Projektmanagements sind, die eigenen Interessen zu verfolgen, die Kosten, die Zeit und die Qualität des Projekts zu ignorieren, und die Risiken und Probleme des Projekts zu vermeiden oder zu verschleiern.

C) Die Ziele des Projektmanagements sind, die Anforderungen des Kunden zu ändern, die Kosten, die Zeit und die Qualität des Projekts zu schätzen, zu kontrollieren und zu dokumentieren, und die Risiken und Probleme des Projekts zu analysieren und zu bewerten.

D) Die Ziele des Projektmanagements sind, die Anforderungen des Kunden zu verstehen, die Kosten, die Zeit und die Qualität des Projekts zu optimieren, und die Risiken und Probleme des Projekts zu minimieren und zu lösen.

Die richtige Antwort ist D)

Die Anforderungen des Kunden zu verstehen, die Kosten, die Zeit und die Qualität des Projekts zu optimieren, 
und die Risiken und Probleme des Projekts zu minimieren und zu loesen, sind die Ziele des Projektmanagements. 
Diese Ziele sollen dazu beitragen, dass das Projekt erfolgreich abgeschlossen wird und die Erwartungen 
des Kunden und der Stakeholder erfuellt oder uebertroffen werden.

Die Antwort A) ist teilweise richtig, aber nicht optimal, da sie nicht die Optimierung der Kosten, der Zeit und der Qualität des Projekts erwähnt.



Was sind die Phasen eines Projekts nach dem klassischen Wasserfallmodell?

A) Planung, Analyse, Design, Implementierung, Test, Einführung, Wartung

B) Planung, Design, Implementierung, Test, Einführung, Wartung, Abschluss

C) Planung, Analyse, Design, Implementierung, Test, Einführung, Abschluss

D) Planung, Analyse, Design, Implementierung, Test, Wartung, Abschluss

Die richtige Antwort ist C)

Die Phasen eines Projekts nach dem klassischen Wasserfallmodell sind Planung, Analyse, Design, Implementierung, Test, 
Einführung und Abschluss. In jeder Phase werden bestimmte Aktivitäten durchgeführt, die das Projekt voranbringen 
und die Ergebnisse dokumentieren. Die Phasen sind sequenziell angeordnet, das heißt, eine Phase beginnt erst, 
wenn die vorherige Phase abgeschlossen ist. Das Wasserfallmodell ist ein einfaches und uebersichtliches Vorgehensmodell, 
das sich für Projekte mit klaren Anforderungen und geringer Komplexität eignet.


Was sind die Vorteile des agilen Projektmanagements gegenüber dem klassischen Projektmanagement?

A) Die Vorteile des agilen Projektmanagements sind, dass es flexibler, kundenorientierter, teamorientierter, iterativer und adaptiver ist als das klassische Projektmanagement.

B) Die Vorteile des agilen Projektmanagements sind, dass es schneller, billiger, einfacher, linearer und statischer ist als das klassische Projektmanagement.

C) Die Vorteile des agilen Projektmanagements sind, dass es komplexer, unstrukturierter, chaotischer, riskanter und unvorhersehbarer ist als das klassische Projektmanagement.

D) Die Vorteile des agilen Projektmanagements sind, dass es kreativer, innovativer, experimenteller, lernender und verbessernder ist als das klassische Projektmanagement.

Die richtige Antwort ist A)

Die Vorteile des agilen Projektmanagements sind, dass es flexibler, kundenorientierter, teamorientierter, iterativer und adaptiver ist als das klassische Projektmanagement. Das bedeutet, dass es sich besser an die Veränderungen der Anforderungen, des Marktes, der Technologien und der Umstände anpassen kann, dass es die Bedürfnisse und die Zufriedenheit des Kunden stärker berücksichtigt, dass es die Zusammenarbeit und die Kommunikation des Teams fördert, dass es das Projekt in kleine und überschaubare Teile aufteilt, die regelmäßig überprüft und getestet werden, und dass es das Projekt kontinuierlich verbessert und optimiert. Das agile Projektmanagement eignet sich für Projekte mit hoher Komplexität, Dynamik und Unsicherheit.

Die Antwort B) ist falsch, da sie das agile Projektmanagement unrealistisch und unangemessen darstellt. Das agile Projektmanagement ist nicht unbedingt schneller, billiger oder einfacher als das klassische Projektmanagement, sondern erfordert mehr Aufwand, Zeit und Ressourcen für die Planung, die Abstimmung, die Qualitätssicherung und die Anpassung des Projekts. Das agile Projektmanagement ist auch nicht linear oder statisch, sondern zyklisch und veränderlich.

Die Antwort C) ist auch falsch, da sie das agile Projektmanagement negativ und abwertend darstellt. Das agile Projektmanagement ist nicht komplexer, unstrukturierter, chaotischer, riskanter oder unvorhersehbarer als das klassische Projektmanagement, sondern versucht, die Komplexität, die Struktur, das Chaos, das Risiko und die Vorhersehbarkeit des Projekts zu managen und zu reduzieren.

Die Antwort D) ist teilweise richtig, aber nicht vollständig, da sie einige wichtige Aspekte des agilen Projektmanagements auslässt. Das agile Projektmanagement ist zwar kreativer, innovativer, experimenteller, lernender und verbessernder als das klassische Projektmanagement, aber das sind nicht die einzigen oder die wichtigsten Vorteile. Das agile Projektmanagement ist auch flexibler, kundenorientierter, teamorientierter, iterativer und adaptiver, was für den Erfolg des Projekts entscheidend ist.



Was sind die wichtigsten Projektmanagementmethoden und -werkzeuge, die bei der Einrichtung eines IT-gestützten Arbeitsplatzes angewendet werden können?

A) Die wichtigsten Projektmanagementmethoden und -werkzeuge sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Ishikawa-Diagramm, die SWOT-Analyse und das Projektcontrolling.

B) Die wichtigsten Projektmanagementmethoden und -werkzeuge sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Pareto-Prinzip, die SWOT-Analyse und das Projektcontrolling.

C) Die wichtigsten Projektmanagementmethoden und -werkzeuge sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Ishikawa-Diagramm, die Balanced Scorecard und das Projektcontrolling.

D) Die wichtigsten Projektmanagementmethoden und -werkzeuge sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Ishikawa-Diagramm, die SWOT-Analyse und das Scrum-Framework.

Die richtige Antwort ist A)

Die wichtigsten Projektmanagementmethoden und -werkzeuge, die bei der Einrichtung eines IT-gestützten Arbeitsplatzes angewendet werden können, sind die SMART-Kriterien, die Stakeholderanalyse, die Anforderungsanalyse, der Projektstrukturplan, der Netzplan, das Gantt-Diagramm, das Ishikawa-Diagramm, die SWOT-Analyse und das Projektcontrolling. Diese Methoden und Werkzeuge helfen, das Projekt zu definieren, zu planen, zu steuern und zu überwachen, die Beteiligten zu identifizieren und zu berücksichtigen, die Anforderungen zu erheben und zu spezifizieren, die Aufgaben zu strukturieren und zu terminieren, die Ressourcen zu verwalten, die Fortschritte zu visualisieren, die Ursachen von Problemen zu analysieren, die Stärken, Schwächen, Chancen und Risiken des Projekts zu bewerten und die Qualität und den Erfolg des Projekts zu sichern.

Die Antwort B) ist falsch, da sie das Pareto-Prinzip anstelle des Ishikawa-Diagramms nennt. Das Pareto-Prinzip ist eine Regel, die besagt, dass 80 % der Ergebnisse aus 20 % der Ursachen stammen. Das Ishikawa-Diagramm ist ein Werkzeug, das die möglichen Ursachen eines Problems in Kategorien wie Material, Methode, Mensch, Maschine, Messung und Umwelt darstellt.

Die Antwort C) ist auch falsch, da sie die Balanced Scorecard anstelle der SWOT-Analyse nennt. Die Balanced Scorecard ist ein Werkzeug, das die Leistung eines Unternehmens oder einer Organisation anhand von vier Perspektiven misst: Finanzen, Kunden, Prozesse und Lernen. Die SWOT-Analyse ist ein Werkzeug, das die internen Stärken und Schwächen sowie die externen Chancen und Risiken eines Projekts oder einer Situation ermittelt.

Die Antwort D) ist ebenfalls falsch, da sie das Scrum-Framework anstelle des Projektcontrollings nennt. Das Scrum-Framework ist eine agile Projektmanagementmethode, die auf kurzen, iterativen und inkrementellen Entwicklungszyklen basiert, die Sprints genannt werden. Das Projektcontrolling ist ein Prozess, der die Planung, die Steuerung und die Überwachung des Projekts umfasst, um Abweichungen, Risiken und Probleme zu erkennen und zu beheben.



Was sind die Voraussetzungen für eine erfolgreiche Kommunikation im Projektteam und mit dem Kunden?

A) Die Voraussetzungen für eine erfolgreiche Kommunikation sind, dass man aktiv zuhört, verständlich und klar spricht oder schreibt, respektvoll und höflich ist, Feedback gibt und annimmt, Konflikte konstruktiv löst und die Kommunikationskanäle und -mittel angemessen auswählt.

B) Die Voraussetzungen für eine erfolgreiche Kommunikation sind, dass man viel redet, kompliziert und fachlich spricht oder schreibt, dominant und selbstbewusst ist, Kritik äußert und ignoriert, Konflikte provoziert und eskaliert und die Kommunikationskanäle und -mittel beliebig auswählt.

C) Die Voraussetzungen für eine erfolgreiche Kommunikation sind, dass man wenig redet, einfach und allgemein spricht oder schreibt, passiv und zurückhaltend ist, Lob gibt und erwartet, Konflikte vermeidet und verdrängt und die Kommunikationskanäle und -mittel zufällig auswählt.

D) Die Voraussetzungen für eine erfolgreiche Kommunikation sind, dass man abwechslungsreich redet, kreativ und originell spricht oder schreibt, humorvoll und unterhaltsam ist, Witze macht und lacht, Konflikte ironisch behandelt und entschärft und die Kommunikationskanäle und -mittel spielerisch auswählt.

Die richtige Antwort ist A)

Die Voraussetzungen für eine erfolgreiche Kommunikation sind, dass man aktiv zuhört, verständlich und klar spricht oder schreibt, respektvoll und höflich ist, Feedback gibt und annimmt, Konflikte konstruktiv löst und die Kommunikationskanäle und -mittel angemessen auswählt. Diese Voraussetzungen fördern das Verständnis, das Vertrauen, die Zusammenarbeit und die Zufriedenheit im Projektteam und mit dem Kunden. Sie helfen auch, Missverständnisse, Fehler, Verzögerungen und Unstimmigkeiten im Projekt zu vermeiden oder zu beheben.

Die Antwort B) ist falsch, da sie das Gegenteil von den Voraussetzungen für eine erfolgreiche Kommunikation darstellt. Diese Antwort beschreibt eine Kommunikation, die arrogant, verwirrend, unhöflich, abweisend, aggressiv und willkürlich ist. Diese Kommunikation schadet dem Verständnis, dem Vertrauen, der Zusammenarbeit und der Zufriedenheit im Projektteam und mit dem Kunden. Sie verursacht auch Missverständnisse, Fehler, Verzögerungen und Unstimmigkeiten im Projekt.

Die Antwort C) ist auch falsch, da sie eine Kommunikation beschreibt, die langweilig, ungenau, unterwürfig, bedürftig, ängstlich und planlos ist. Diese Kommunikation beeinträchtigt das Verständnis, das Vertrauen, die Zusammenarbeit und die Zufriedenheit im Projektteam und mit dem Kunden. Sie führt auch zu Missverständnissen, Fehlern, Verzögerungen und Unstimmigkeiten im Projekt.

Die Antwort D) ist ebenfalls falsch, da sie eine Kommunikation beschreibt, die unpassend, unprofessionell, albern, respektlos, unernst und unzuverlässig ist. Diese Kommunikation stört das Verständnis, das Vertrauen, die Zusammenarbeit und die Zufriedenheit im Projektteam und mit dem Kunden. Sie erzeugt auch Missverständnisse, Fehler, Verzögerungen und Unstimmigkeiten im Projekt.


)";
}

void pruefungsfragen3() {
    cout << R"(

Wie viele DVDs mit einer Kapazität von 4,7 GB kann man mit einem Blu-ray-Disc-Brenner mit einer Kapazität von 25 GB beschreiben?
A) 5 DVDs B) 6 DVDs C) 7 DVDs D) 8 DVDs

Die richtige Antwort ist B)

Um diese Aufgabe zu lösen, muss man die Kapazität des Blu-ray-Disc-Brenners durch die Kapazität einer DVD teilen. Das ergibt:

25 GB / 4,7GB ? 5,32
4,7 GB 25 GB? ? 5,32

Da man keine halben DVDs beschreiben kann, muss man die nächsthöhere ganze Zahl nehmen, also 6 DVDs. Das bedeutet, dass man mit einem Blu-ray-Disc-Brenner mit einer Kapazität von 25 GB sechs DVDs mit einer Kapazität von 4,7 GB beschreiben kann.


Wie viele Bytes sind in einem Terabyte enthalten?
A) 1.000.000.000 Bytes B) 1.024.000.000 Bytes C) 1.000.000.000.000 Bytes D) 1.099.511.627.776 Bytes

Die richtige Antwort ist D)

Um diese Aufgabe zu lösen, muss man wissen, dass ein Byte aus acht Bit besteht und dass ein Terabyte aus 1024 Gigabyte besteht. Ein Gigabyte besteht wiederum aus 1024 Megabyte, ein Megabyte aus 1024 Kilobyte und ein Kilobyte aus 1024 Byte. Das heißt, um von Terabyte zu Byte zu kommen, muss man mit 1024 viermal multiplizieren. Das ergibt:

1 TB=1 TB×1024 GB×1024 MB×1024 KB×1024 B=1.099.511.627.776 B
1 TB=1 TB×1024 GB×1024 MB×1024 KB×1024 B=1.099.511.627.776 B

Das bedeutet, dass ein Terabyte 1.099.511.627.776 Bytes enthält.


Wie viele Megabyte sind in einem Gigabit enthalten?
A) 0,125 Megabyte B) 8 Megabyte C) 125 Megabyte D) 1000 Megabyte

Die richtige Antwort ist B)

Um diese Aufgabe zu lösen, muss man wissen, dass ein Bit aus einem einzigen binären Wert (0 oder 1) besteht und dass ein Byte aus acht Bit besteht. Außerdem muss man wissen, dass ein Gigabit aus 1000 Megabit besteht und dass ein Megabit aus 1000 Kilobit besteht. Ein Kilobit besteht wiederum aus 1000 Bit. Das heißt, um von Gigabit zu Megabyte zu kommen, muss man mit 1000 dreimal multiplizieren und dann durch 8 teilen. Das ergibt:

1 Gb=1 Gb×1000 Mb×1000 Kb×1000 b=1.000.000.000 b
1 Gb=1 Gb×1000 Mb×1000 Kb×1000 b=1.000.000.000 b

1.000.000.000 b
8 b=125.000.000 B
8 b1.000.000.000 b?=125.000.000 B

125.000.000 B
1.000.000 B=125 MB1.000.000 B125.000.000 B?=125 MB

Das bedeutet, dass ein Gigabit 125 Megabyte enthält.


Wie groß ist die Leistung, die an einem Widerstand von 100 Ohm umgesetzt wird, wenn eine Spannung von 12 Volt anliegt?
A) 0,12 Watt B) 1,2 Watt C) 12 Watt D) 120 Watt

Die richtige Antwort ist B)

Um diese Aufgabe zu lösen, muss man die Formel für die elektrische Leistung kennen

P=RU2?
Dabei ist P die Leistung in Watt, U die Spannung in Volt und R der Widerstand in Ohm. Wenn man die gegebenen Werte einsetzt, erhält man:


122/100=144/100=1,44 Watt
P=100122?=100144?=1,44 Watt

Da die Antwortmöglichkeiten nur eine Nachkommastelle haben, muss man die Leistung auf eine Nachkommastelle runden. Das ergibt 1,2 Watt als richtige Antwort.


Wie lautet das Ergebnis der binären Multiplikation 1011 x 110?
A) 100010 B) 111110 C) 100110 D) 111010

Die richtige Antwort ist C)

Um diese Aufgabe zu lösen, muss man die binäre Multiplikation anwenden, die ähnlich wie die schriftliche Multiplikation im Dezimalsystem funktioniert. Dabei muss man beachten, dass die binäre Addition folgende Regeln hat:

0 + 0 = 0
0 + 1 = 1
1 + 0 = 1
1 + 1 = 10 (Übertrag 1)
Die binäre Multiplikation sieht dann so aus:

    1011
  x  110
  ------
    1011
   1011
+ 1011
  ------
  100110

Das bedeutet, dass das Ergebnis der binären Multiplikation 1011 x 110 gleich 100110 ist.


Wie lautet das Ergebnis der binären Subtraktion 1101 - 101?

A) 1000 B) 1001 C) 1010 D) 1011

Die richtige Antwort ist A)

Um diese Aufgabe zu lösen, muss man die binäre Subtraktion anwenden, die ähnlich wie die schriftliche Subtraktion im Dezimalsystem funktioniert. 
Dabei muss man beachten, dass die binaere Subtraktion folgende Regeln hat:

0 - 0 = 0
0 - 1 = 1 (Borrow 1)
1 - 0 = 1
1 - 1 = 0
Die binäre Subtraktion sieht dann so aus:
   1101
 -  101
 -----
   1000

Das bedeutet, dass das Ergebnis der binären Subtraktion 1101 - 101 gleich 1000 ist.


Wie viele Hosts können in einem Netzwerk mit der Subnetzmaske 255.255.255.192 maximal adressiert werden?
A) 62 B) 64 C) 126 D) 128

Die richtige Antwort ist A)

Um diese Aufgabe zu loesen, muss man wissen, wie die Subnetzmaske die Anzahl der möglichen Hosts in einem Netzwerk bestimmt. Die Subnetzmaske besteht aus 32 Bit, die in vier Oktette zu je acht Bit unterteilt sind. Jedes Bit kann entweder 0 oder 1 sein. Die Bits, die 1 sind, gehören zum Netzwerkanteil der IP-Adresse, die Bits, die 0 sind, gehören zum Hostanteil der IP-Adresse. Die Anzahl der möglichen Hosts in einem Netzwerk ist gleich 2 hoch der Anzahl der 0-Bits in der Subnetzmaske minus 2. Die 2 wird abgezogen, weil die erste und die letzte Adresse in einem Netzwerk für das Netzwerk selbst und den Broadcast reserviert sind und nicht für Hosts verwendet werden können.

Die Subnetzmaske 255.255.255.192 hat folgende binäre Darstellung:
11111111.11111111.11111111.11000000

Die Anzahl der 0-Bits in der Subnetzmaske ist 6. Die Anzahl der möglichen Hosts in einem Netzwerk mit dieser Subnetzmaske ist also:
26?2=64?2=62
26?2=64?2=62

Das bedeutet, dass in einem Netzwerk mit der Subnetzmaske 255.255.255.192 maximal 62 Hosts adressiert werden können.


Wie lautet das Ergebnis der binären Division 1000 : 10?
A) 10 B) 100 C) 101 D) 110

Die richtige Antwort ist B)
Um diese Aufgabe zu lösen, muss man die binäre Division anwenden, die ähnlich wie die schriftliche Division im Dezimalsystem funktioniert. Dabei muss man beachten, dass die binäre Subtraktion folgende Regeln hat:
0 - 0 = 0
0 - 1 = 1 (Borrow 1)
1 - 0 = 1
1 - 1 = 0
Die binäre Division sieht dann so aus:

  100
  ---
10|1000
  - 10
   ---
    100
   - 10
    ---
     00

Das bedeutet, dass das Ergebnis der binären Division 1000 : 10 gleich 100 ist.



Wie viele IP-Adressen stehen in einem Netzwerk mit der CIDR-Notation 192.168.1.0/24 zur Verfügung?
A) 256 B) 254 C) 128 D) 126

Die richtige Antwort ist B)

Um diese Aufgabe zu lösen, muss man wissen, wie die CIDR-Notation die Anzahl der möglichen IP-Adressen in einem Netzwerk bestimmt. Die CIDR-Notation besteht aus einer IP-Adresse und einem Präfix, der die Anzahl der Bits angibt, die zum Netzwerkanteil der Adresse gehören. Die restlichen Bits gehören zum Hostanteil der Adresse. Die Anzahl der möglichen IP-Adressen in einem Netzwerk ist gleich 2 hoch der Anzahl der Bits im Hostanteil minus 2. Die 2 wird abgezogen, weil die erste und die letzte Adresse in einem Netzwerk für das Netzwerk selbst und den Broadcast reserviert sind und nicht für Hosts verwendet werden können.

Die CIDR-Notation 192.168.1.0/24 hat folgende binäre Darstellung:

11000000.10101000.00000001.00000000 / 24

Die Anzahl der Bits im Netzwerkanteil ist 24, die Anzahl der Bits im Hostanteil ist 8. Die Anzahl der möglichen IP-Adressen in einem Netzwerk mit dieser CIDR-Notation ist also:

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

Das bedeutet, dass in einem Netzwerk mit der CIDR-Notation 192.168.1.0/24 254 IP-Adressen zur Verfügung stehen.



Was ist der Unterschied zwischen einem Switch und einem Hub in einem lokalen Netzwerk?

A) Ein Switch ist ein Gerät, das Datenpakete gezielt an die Empfänger weiterleitet, während ein Hub ein Gerät ist, das Datenpakete an alle angeschlossenen Geräte sendet.
B) Ein Switch ist ein Gerät, das Datenpakete an alle angeschlossenen Geräte sendet, während ein Hub ein Gerät ist, das Datenpakete gezielt an die Empfänger weiterleitet.
C) Ein Switch ist ein Gerät, das Datenpakete filtert und priorisiert, während ein Hub ein Gerät ist, das Datenpakete verstärkt und wiederholt.
D) Ein Switch ist ein Gerät, das Datenpakete verstärkt und wiederholt, während ein Hub ein Gerät ist, das Datenpakete filtert und priorisiert.

Die richtige Antwort ist A)

Ein Switch ist ein Gerät, das Datenpakete gezielt an die Empfänger weiterleitet, während ein Hub ein Gerät ist, das Datenpakete an alle angeschlossenen Geräte sendet. Das bedeutet, dass ein Switch die Netzwerkleistung verbessert, indem er den Datenverkehr reduziert und die Kollisionen vermeidet, während ein Hub die Netzwerkleistung verschlechtert, indem er den Datenverkehr erhöht und die Kollisionen fördert. Ein Switch ist daher ein intelligenteres und effizienteres Gerät als ein Hub.


)";
}

void pruefungsfragen5() {
 cout <<   R"(

Wie lautet der Pseudocode, um die Summe der ersten n natürlichen Zahlen zu berechnen?

A) sum = 0 for i = 1 to n sum = sum + i end for print sum
B) sum = 0 while i <= n sum = sum + i i = i + 1 end while print sum
C) sum = 0 repeat sum = sum + i i = i + 1 until i > n print sum
D) sum = 0 do sum = sum + i i = i + 1 while i <= n print sum

Die richtige Antwort ist A)

Der Pseudocode, um die Summe der ersten n natürlichen Zahlen zu berechnen, ist A). Dieser Pseudocode verwendet eine for-Schleife, die von 1 bis n läuft und bei jedem Durchlauf die Variable sum um den aktuellen Wert von i erhöht. Am Ende wird die Variable sum ausgegeben, die die gesuchte Summe enthält.

Die Antwort B) ist falsch, da sie eine while-Schleife verwendet, die eine zusätzliche Variable i benötigt, die vorher initialisiert werden muss. Außerdem muss die Variable i nach jedem Durchlauf um 1 erhöht werden, was einen zusätzlichen Schritt darstellt.

Die Antwort C) ist auch falsch, da sie eine repeat-until-Schleife verwendet, die ebenfalls eine zusätzliche Variable i benötigt, die vorher initialisiert werden muss. Außerdem wird die Bedingung am Ende der Schleife überprüft, was bedeutet, dass die Schleife mindestens einmal ausgeführt wird, auch wenn n gleich 0 ist.

Die Antwort D) ist ebenfalls falsch, da sie eine do-while-Schleife verwendet, die auch eine zusätzliche Variable i benötigt, die vorher initialisiert werden muss. Außerdem wird die Bedingung am Ende der Schleife überprüft, was bedeutet, dass die Schleife mindestens einmal ausgeführt wird, auch wenn n gleich 0 ist.



Wie lautet der Pseudocode, um die Fakultät einer natürlichen Zahl n zu berechnen?

A) fak = 1 for i = 1 to n fak = fak * i end for print fak
B) fak = 1 while n > 0 fak = fak * n n = n - 1 end while print fak
C) fak = 1 repeat fak = fak * n n = n - 1 until n = 0 print fak
D) fak = 1 do fak = fak * n n = n - 1 while n > 0 print fak

Die richtige Antwort ist B)

Der Pseudocode, um die Fakultät einer natürlichen Zahl n zu berechnen, ist B). Dieser Pseudocode verwendet eine while-Schleife, die so lange läuft, wie n größer als 0 ist. Bei jedem Durchlauf wird die Variable fak mit n multipliziert und n um 1 verringert. Am Ende wird die Variable fak ausgegeben, die die gesuchte Fakultät enthält.

Die Antwort A) ist falsch, da sie eine for-Schleife verwendet, die von 1 bis n läuft. Das bedeutet, dass die Variable fak mit 1 beginnt und dann mit allen Zahlen von 1 bis n multipliziert wird. Das ergibt aber nicht die Fakultät von n, sondern das Produkt aller natürlichen Zahlen bis n.

Die Antwort C) ist auch falsch, da sie eine repeat-until-Schleife verwendet, die die Bedingung am Ende der Schleife überprüft. Das bedeutet, dass die Schleife mindestens einmal ausgeführt wird, auch wenn n gleich 0 ist. Das führt zu einem falschen Ergebnis, da die Fakultät von 0 gleich 1 ist, aber die Variable fak mit 0 multipliziert wird.

Die Antwort D) ist ebenfalls falsch, da sie eine do-while-Schleife verwendet, die die Bedingung am Ende der Schleife überprüft. Das bedeutet, dass die Schleife mindestens einmal ausgeführt wird, auch wenn n gleich 0 ist. Das führt zu einem falschen Ergebnis, da die Fakultät von 0 gleich 1 ist, aber die Variable fak mit 0 multipliziert wird.


Wie lautet der Fachbegriff für die Eigenschaften oder Merkmale einer Entität, die in einem ER-Modell durch Spalten in einer Tabelle dargestellt werden?
A) Attribute B) Relationen C) Schlüssel D) Tupel

Die richtige Antwort ist A)

Die Eigenschaften oder Merkmale einer Entitaet, die in einem ER-Modell durch Spalten in einer Tabelle dargestellt werden, werden Attribute genannt. Attribute sind die Informationen, die eine Entität beschreiben oder identifizieren. Zum Beispiel kann eine Entität Student die Attribute Name, Matrikelnummer, Studiengang, E-Mail usw. haben.

Die Antwort B) ist falsch, da Relationen die Beziehungen zwischen Entitäten bezeichnen, die in einem ER-Modell durch Linien oder Rauten dargestellt werden. Relationen beschreiben, wie Entitäten miteinander in Verbindung stehen oder interagieren. Zum Beispiel kann eine Relation Einschreiben die Beziehung zwischen den Entitäten Student und Kurs darstellen.

Die Antwort C) ist auch falsch, da Schlüssel die Attribute sind, die eine Entität eindeutig identifizieren oder von anderen Entitäten unterscheiden. Schlüssel sind spezielle Attribute, die in einem ER-Modell durch Unterstreichung oder Fettdruck hervorgehoben werden. Zum Beispiel kann die Matrikelnummer ein Schlüssel für die Entität Student sein.

Die Antwort D) ist ebenfalls falsch, da Tupel die einzelnen Datensätze oder Zeilen in einer Tabelle darstellen, die eine Instanz einer Entität repräsentieren. Tupel sind die konkreten Werte, die den Attributen einer Entität zugewiesen werden. Zum Beispiel kann ein Tupel in der Tabelle Student die Werte Max, 123456, Informatik, max@uni.de für die Attribute Name, Matrikelnummer, Studiengang, E-Mail haben.

Welche der folgenden Aussagen über den Arbeitsspeicher (RAM) ist falsch?
A) Der Arbeitsspeicher ist ein flüchtiger Speicher, der die Daten verliert, wenn die Stromversorgung unterbrochen wird. B) Der Arbeitsspeicher ist ein schneller Speicher, der die Daten direkt an die CPU liefert, ohne auf die Festplatte zuzugreifen. C) Der Arbeitsspeicher ist ein erweiterbarer Speicher, der durch den Einbau von zusätzlichen Speichermodulen vergrößert werden kann. D) Der Arbeitsspeicher ist ein permanenter Speicher, der die Daten auch nach dem Ausschalten des Computers behält.

Die richtige Antwort ist D)

Die Aussage D) ist falsch, da der Arbeitsspeicher ein flüchtiger Speicher ist, der die Daten verliert, wenn die Stromversorgung unterbrochen wird. Der Arbeitsspeicher ist kein permanenter Speicher, der die Daten auch nach dem Ausschalten des Computers behält. Das ist die Eigenschaft von nichtflüchtigen Speichern wie Festplatten, SSDs oder USB-Sticks.

Die Aussagen A), B) und C) sind richtig, da sie die grundlegenden Eigenschaften und Funktionen des Arbeitsspeichers korrekt beschreiben. Der Arbeitsspeicher ist ein flüchtiger Speicher, der die Daten verliert, wenn die Stromversorgung unterbrochen wird. Das bedeutet, dass der Arbeitsspeicher nur die Daten speichert, die gerade vom Computer benötigt werden, und nicht die Daten, die dauerhaft gesichert werden sollen. Der Arbeitsspeicher ist ein schneller Speicher, der die Daten direkt an die CPU liefert, ohne auf die Festplatte zuzugreifen. Das bedeutet, dass der Arbeitsspeicher die Leistung und Geschwindigkeit des Computers erhöht, indem er die Zugriffszeiten auf die Daten verkürzt. Der Arbeitsspeicher ist ein erweiterbarer Speicher, der durch den Einbau von zusätzlichen Speichermodulen vergrößert werden kann. Das bedeutet, dass der Arbeitsspeicher an die Bedürfnisse und Anforderungen des Computers angepasst werden kann, indem mehr Speicherplatz hinzugefügt wird.

)";
}

void pruefungsfragen6() {
    cout << R"(

Wie viele Subnetze und wie viele Hosts pro Subnetz kann man mit der CIDR-Notation 10.0.0.0/20 bilden?

A) 16 Subnetze mit je 4094 Hosts B) 64 Subnetze mit je 1022 Hosts C) 256 Subnetze mit je 254 Hosts D) 1024 Subnetze mit je 62 Hosts

Die richtige Antwort ist B)
Um diese Aufgabe zu lösen, muss man wissen, wie die CIDR-Notation die Anzahl der möglichen Subnetze und Hosts in einem Netzwerk bestimmt. Die CIDR-Notation besteht aus einer IP-Adresse und einem Präfix, der die Anzahl der Bits angibt, die zum Netzwerkanteil der Adresse gehören. Die restlichen Bits gehören zum Subnetz- und Hostanteil der Adresse. Die Anzahl der möglichen Subnetze in einem Netzwerk ist gleich 2 hoch der Anzahl der Bits im Subnetzanteil. Die Anzahl der möglichen Hosts in einem Subnetz ist gleich 2 hoch der Anzahl der Bits im Hostanteil minus 2. Die 2 wird abgezogen, weil die erste und die letzte Adresse in einem Subnetz für das Subnetz selbst und den Broadcast reserviert sind und nicht für Hosts verwendet werden können.

Die CIDR-Notation 10.0.0.0/20 hat folgende binaere Darstellung:
00001010.00000000.0000|0000.00000000 / 20

Die Anzahl der Bits im Netzwerkanteil ist 20, die Anzahl der Bits im Subnetz- und Hostanteil ist 12. 
Um die Anzahl der Bits im Subnetz- und Hostanteil aufzuteilen, muss man die gewuenschte Subnetzmaske waehlen. 
Die Subnetzmaske ist eine Bitfolge, die angibt, welche Bits zum Subnetzanteil und welche zum Hostanteil gehoeren. 
Die Bits, die 1 sind, gehören zum Subnetzanteil, die Bits, die 0 sind, gehoeren zum Hostanteil. 
Die Subnetzmaske muss immer mit einer Reihe von 1 beginnen und mit einer Reihe von 0 enden. 
Die Laenge der Subnetzmaske muss gleich der Laenge des Praefixes plus der Länge des Subnetzanteils sein.
Um die Antwortmöglichkeiten zu ueberprüfen, muss man die Subnetzmaske für jede Option berechnen und die Anzahl der Subnetze und Hosts daraus ableiten. Das ergibt:

A) 16 Subnetze mit je 4094 Hosts

Die Subnetzmaske für diese Option ist 255.255.240.0, die folgende binaere Darstellung hat:

11111111.11111111.1111|0000.00000000 / 24
Die Anzahl der Bits im Subnetzanteil ist 4, die Anzahl der Bits im Hostanteil ist 8. Die Anzahl der möglichen Subnetze ist also:

2
4
=
16
24=16

Die Anzahl der möglichen Hosts pro Subnetz ist also:

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

Diese Option ist falsch, da die Anzahl der Hosts pro Subnetz nicht mit der Angabe übereinstimmt.

B) 64 Subnetze mit je 1022 Hosts

Die Subnetzmaske für diese Option ist 255.255.252.0, die folgende binäre Darstellung hat:
11111111.11111111.1111|1100.00000000 / 22
Die Anzahl der Bits im Subnetzanteil ist 6, die Anzahl der Bits im Hostanteil ist 6. Die Anzahl der möglichen Subnetze ist also:
2
6
=
64
26=64
Die Anzahl der möglichen Hosts pro Subnetz ist also:
26?2=64?2
=
62
26?2=64?2=62

Diese Option ist richtig, da die Anzahl der Subnetze und Hosts mit der Angabe übereinstimmt.

C) 256 Subnetze mit je 254 Hosts

Die Subnetzmaske für diese Option ist 255.255.255.0, die folgende binäre Darstellung hat:

11111111.11111111.1111|1111.00000000 / 28

Die Anzahl der Bits im Subnetzanteil ist 8, die Anzahl der Bits im Hostanteil ist 4. Die Anzahl der möglichen Subnetze ist also:
28=25628=256

Die Anzahl der möglichen Hosts pro Subnetz ist also:
24?2=16?2=14
24?2=16?2=14

Diese Option ist falsch, da die Anzahl der Hosts pro Subnetz nicht mit der Angabe übereinstimmt.

D) 1024 Subnetze mit je 62 Hosts

Die Subnetzmaske für diese Option ist 255.255.255.192, die folgende binäre Darstellung hat:

11111111.11111111.1111|1111.11000000 / 26

Die Anzahl der Bits im Subnetzanteil ist 10, die Anzahl der Bits im Hostanteil ist 2. Die Anzahl der möglichen Subnetze ist also:
210=1024210=1024

Die Anzahl der möglichen Hosts pro Subnetz ist also:
22?2=4?2=222?2=4?2=2

Diese Option ist falsch, da die Anzahl der Hosts pro Subnetz nicht mit der Angabe übereinstimmt.


Wie lautet die IP-Adresse des Netzwerks, wenn die IP-Adresse eines Hosts 192.168.12.34 und die Subnetzmaske 255.255.255.0 ist?
A) 192.168.12.0 B) 192.168.12.34 C) 192.168.0.0 D) 192.168.0.34

Die richtige Antwort ist A)

Um diese Aufgabe zu lösen, muss man wissen, wie die IP-Adresse eines Netzwerks aus der IP-Adresse eines Hosts und der Subnetzmaske berechnet wird. Die IP-Adresse und die Subnetzmaske bestehen aus 32 Bit, die in vier Oktette zu je acht Bit unterteilt sind. Jedes Bit kann entweder 0 oder 1 sein. Die Bits, die 1 sind, gehören zum Netzwerkanteil der IP-Adresse, die Bits, die 0 sind, gehören zum Hostanteil der IP-Adresse. Die IP-Adresse eines Netzwerks ist diejenige, die alle Bits im Netzwerkanteil beibehält und alle Bits im Hostanteil auf 0 setzt.

Die IP-Adresse eines Hosts 192.168.12.34 und die Subnetzmaske 255.255.255.0 haben folgende binäre Darstellung:

11000000.10101000.00001100.00100010 (IP-Adresse)
11111111.11111111.11111111.00000000 (Subnetzmaske)

Die Anzahl der Bits im Netzwerkanteil ist 24, die Anzahl der Bits im Hostanteil ist 8. Um die IP-Adresse des Netzwerks zu erhalten, muss man die IP-Adresse und die Subnetzmaske mit einer logischen UND-Operation verknüpfen. Das ergibt:

11000000.10101000.00001100.00100010
AND
11111111.11111111.11111111.00000000
-----------------------------------
11000000.10101000.00001100.00000000

Die IP-Adresse des Netzwerks ist also 11000000.10101000.00001100.00000000, die in dezimaler Schreibweise 192.168.12.0 ist.


Was ist der Unterschied zwischen TCP und UDP in Bezug auf die Übertragung von Datenpaketen im Internet?

A) TCP ist ein verbindungsorientiertes, zuverlässiges und geordnetes Protokoll, das eine Quittung für jedes gesendete Datenpaket erwartet, während UDP ein verbindungsloses, unzuverlässiges und ungeordnetes Protokoll ist, das keine Quittung für jedes gesendete Datenpaket erwartet.
B) TCP ist ein verbindungsloses, unzuverlässiges und ungeordnetes Protokoll, das keine Quittung für jedes gesendete Datenpaket erwartet, während UDP ein verbindungsorientiertes, zuverlässiges und geordnetes Protokoll ist, das eine Quittung für jedes gesendete Datenpaket erwartet.
C) TCP ist ein verbindungsorientiertes, unzuverlässiges und ungeordnetes Protokoll, das eine Quittung für jedes gesendete Datenpaket erwartet, während UDP ein verbindungsloses, zuverlässiges und geordnetes Protokoll ist, das keine Quittung für jedes gesendete Datenpaket erwartet.
D) TCP ist ein verbindungsloses, zuverlässiges und geordnetes Protokoll, das keine Quittung für jedes gesendete Datenpaket erwartet, während UDP ein verbindungsorientiertes, unzuverlässiges und ungeordnetes Protokoll ist, das eine Quittung für jedes gesendete Datenpaket erwartet.

Die richtige Antwort ist A)
TCP ist ein verbindungsorientiertes, zuverlässiges und geordnetes Protokoll, das eine Quittung für jedes gesendete Datenpaket erwartet, während UDP ein verbindungsloses, unzuverlässiges und ungeordnetes Protokoll ist, das keine Quittung für jedes gesendete Datenpaket erwartet. Das bedeutet, dass TCP eine Verbindung zwischen Sender und Empfänger aufbaut, bevor die Daten übertragen werden, und sicherstellt, dass die Daten vollständig, fehlerfrei und in der richtigen Reihenfolge ankommen, indem es die Pakete nummeriert, bestätigt und gegebenenfalls erneut sendet. UDP hingegen sendet die Daten ohne Verbindungsaufbau und ohne Garantie, dass die Daten ankommen, korrekt sind oder in der richtigen Reihenfolge sind, indem es die Pakete einfach an die Zieladresse schickt. TCP ist daher für Anwendungen geeignet, die eine hohe Zuverlässigkeit und Qualität der Datenübertragung erfordern, wie z.B. Webseiten, E-Mails oder Dateitransfers. UDP ist hingegen für Anwendungen geeignet, die eine hohe Geschwindigkeit und Effizienz der Datenübertragung erfordern, wie z.B. Sprach- oder Videotelefonie, Online-Spiele oder Streaming.


Wie viel Speicherplatz benoetigt man, um ein 15-minütiges Video in Full HD (1920 x 1080 Pixel) mit 30 Bildern pro Sekunde und einer Farbtiefe von 24 Bit zu speichern?
A) 1,2 GB B) 2,4 GB C) 3,6 GB D) 4,8 GB

Die richtige Antwort ist C)
Um diese Aufgabe zu lösen, muss man wissen, wie der Speicherbedarf eines Videos berechnet wird. Der Speicherbedarf eines Videos hängt von der Auflösung, der Bildrate, der Farbtiefe und der Länge des Videos ab. Die Formel lautet:

S=R×F×B×T
Dabei ist S der Speicherbedarf in Byte, R die Auflösung in Pixel, F die Bildrate in Bildern pro Sekunde, B die Farbtiefe in Bit und T die Länge des Videos in Sekunden. Wenn man die gegebenen Werte einsetzt, erhält man:

=1920×1080×30×24×15×60=3.597.721.600Byte
S=1920×1080×30×24×15×60=3.597.721.600 Byte

Um die Antwort in Gigabyte zu erhalten, muss man den Speicherbedarf durch 1024 hoch 3 teilen. Das ergibt:
3.597.721.600
102/43=3,35 GB
102433.597.721.600??3,35 GB

Da die Antwortmoeglichkeiten nur eine Nachkommastelle haben, muss man den Speicherbedarf auf eine Nachkommastelle runden. Das ergibt 3,6 GB als richtige Antwort.



Welche der folgenden Aussagen über das OSI-Modell ist falsch?

A) Das OSI-Modell besteht aus sieben Schichten, die jeweils eine bestimmte Funktion bei der Datenübertragung erfüllen.
B) Das OSI-Modell ist ein universeller Standard, der die Kommunikation zwischen verschiedenen Netzwerkgeräten und -protokollen ermöglicht.
C) Das OSI-Modell ist ein hierarchisches Modell, bei dem jede höhere Schicht auf den Diensten der darunterliegenden Schicht aufbaut.
D) Das OSI-Modell ist ein dynamisches Modell, bei dem die Schichten je nach Bedarf hinzugefügt oder entfernt werden können.

Die richtige Antwort ist D)

Die Aussage D) ist falsch, da das OSI-Modell ein statisches Modell ist, bei dem die Schichten fest definiert und nicht veränderbar sind. Das OSI-Modell ist ein theoretisches Referenzmodell, das die ideale Struktur und Funktion der Netzwerkkommunikation beschreibt, aber nicht die tatsächliche Implementierung widerspiegelt. Das OSI-Modell ist daher nicht anpassbar an die unterschiedlichen Anforderungen und Gegebenheiten der realen Netzwerke.

Die Aussagen A), B) und C) sind richtig, da sie die grundlegenden Eigenschaften und Ziele des OSI-Modells korrekt wiedergeben. Das OSI-Modell besteht aus sieben Schichten, die jeweils eine bestimmte Funktion bei der Datenübertragung erfüllen, wie z.B. die physikalische Übertragung, die Fehlerkontrolle, die Adressierung, die Verschlüsselung, die Anwendung usw. Das OSI-Modell ist ein universeller Standard, der die Kommunikation zwischen verschiedenen Netzwerkgeräten und -protokollen ermöglicht, indem es eine gemeinsame Sprache und ein gemeinsames Verständnis für die Datenübertragung schafft. Das OSI-Modell ist ein hierarchisches Modell, bei dem jede höhere Schicht auf den Diensten der darunterliegenden Schicht aufbaut, und bei dem die Daten von einer Schicht zur nächsten weitergegeben werden, wobei sie entsprechend verpackt, entpackt, umgewandelt oder interpretiert werden.



Wie lautet der SQL-Befehl, um alle Datensätze aus der Tabelle Kunden zu löschen, die in Berlin wohnen?
A) DELETE FROM Kunden WHERE Stadt = ‘Berlin’; B) DROP FROM Kunden WHERE Stadt = ‘Berlin’; 
C) REMOVE FROM Kunden WHERE Stadt = ‘Berlin’; D) TRUNCATE FROM Kunden WHERE Stadt = ‘Berlin’;

Die richtige Antwort ist A)

Der SQL-Befehl, um alle Datensätze aus der Tabelle Kunden zu löschen, die in Berlin wohnen, ist DELETE FROM Kunden WHERE Stadt = ‘Berlin’. 
Dieser Befehl entfernt alle Zeilen aus der Tabelle Kunden, die die Bedingung Stadt = ‘Berlin’ erfuellen.
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
 wenn das Ergebnis größer als eins ist.
Beispiel: Addieren wir die binaeren Zahlen 101 und 111:
  101
+ 111
-----
 1010
Lösung: Die Addition ergibt 1010 in binaerer Form.
Binaere Subtraktion:
Erlaeuterung: Bei der binaeren Subtraktion wird eine binaere Zahl von einer anderen subtrahiert. 
Uebertraege koennen auftreten, wenn das Subtrahend groeßer als der Minuend ist.
Beispiel: Subtrahieren wir die binäre Zahl 1101 von der binaeren Zahl 10010:
  10010
-  1101
-------
  1001
Lösung: Die Subtraktion ergibt 1001 in binaerer Form.
Bitweise UND-Verknuepfung:
Erläuterung: Die bitweise UND-Verknüpfung führt eine logische UND-Operation auf den entsprechenden Bits von zwei binaeren Zahlen durch.
Beispiel: Führen wir die bitweise UND-Verknüpfung der binaeren Zahlen 101010 und 110011 durch:
markdown
Copy code
  101010
& 110011
--------
  100010
Loesung: Das Ergebnis der bitweisen UND-Verknüpfung ist 100010 in binaerer Form.
Zweierkomplement:
Erläuterung: Das Zweierkomplement wird verwendet, um negative Zahlen im Binärsystem darzustellen. Es wird berechnet, indem man die Bitwerte invertiert und dann eins addiert.
Beispiel: Berechnen wir das Zweierkomplement der binaeren Zahl 110101:
Original:  110101
Inversion: 001010
+ 1
--------
Komplement: 001011
Loesung: Das Zweierkomplement von 110101 ist 001011 in binaerer Form.

Umrechnung von Dezimal zu Binär und Hexadezimal:

Aufgabe: Konvertieren Sie die Dezimalzahl 217 in das Binär- und Hexadezimalsystem.
Erläuterung: Um eine Dezimalzahl in das Binärsystem umzurechnen, führen Sie wiederholt Division durch 2 durch und notieren die Reste.
 Um eine Dezimalzahl in das Hexadezimalsystem umzurechnen, können Sie das Binärsystem als Zwischenschritt verwenden.
Lösung:
Dezimal zu Binär:
217 / 2 = 108 Rest 1
108 / 2 = 54 Rest 0
54 / 2 = 27 Rest 0
27 / 2 = 13 Rest 1
13 / 2 = 6 Rest 1
6 / 2 = 3 Rest 0
3 / 2 = 1 Rest 1
1 / 2 = 0 Rest 1
Das Binärgleichwert von 217 ist 11011001.
Binär zu Hexadezimal:
Die Binärzahl 11011001 in 4-Bit-Blöcke aufteilen: 1101 und 1001. Konvertieren Sie dann jeden 4-Bit-Block in seine entsprechende 
Hexadezimalzahl: D und 9. Die Hexadezimaldarstellung von 217 ist daher D9.
Umrechnung von Hexadezimal zu Dezimal und Binär:

Aufgabe: Konvertieren Sie die hexadezimale Zahl AB3F in das Dezimal- und Binärsystem.
Erläuterung: Um eine Hexadezimalzahl in das Dezimalsystem umzurechnen, multiplizieren Sie jeden Hexadezimalwert mit seiner entsprechenden 
Potenz von 16 und addieren die Ergebnisse. Um eine Hexadezimalzahl in das Binärsystem umzurechnen, konvertieren Sie jeden Hexadezimalwert in seine entsprechende 4-Bit-Binärzahl.
Lösung:
Hexadezimal zu Dezimal: AB3F = (A * 16^3) + (B * 16^2) + (3 * 16^1) + (F * 16^0) = (10 * 4096) + (11 * 256) + (3 * 16) + (15 * 1) = 43775.
Hexadezimal zu Binär:
A = 1010, B = 1011, 3 = 0011, F = 1111. Die Binärdarstellung von AB3F ist daher 1010101100111111.

Umrechnung von Speichereinheiten:

Aufgabe: Ein Dateiserver hat eine Festplatte mit einer Kapazität von 2 Terabyte (TB). Konvertieren Sie diese Kapazität in Gigabyte (GB) und Megabyte (MB).
Erläuterung: Um Terabyte in Gigabyte umzurechnen, multiplizieren Sie mit 1024, und um Gigabyte in Megabyte umzurechnen, multiplizieren Sie erneut mit 1024.
Lösung:
Umrechnung von Terabyte in Gigabyte: 2 TB * 1024 GB/TB = 2048 GB.
Umrechnung von Gigabyte in Megabyte: 2048 GB * 1024 MB/GB = 2097152 MB.
Umrechnung von Datenübertragungsraten:

Aufgabe: Ein Internetanschluss hat eine maximale Downloadgeschwindigkeit von 100 Megabit pro Sekunde (Mbps). Konvertieren Sie diese Geschwindigkeit 
in Kilobit pro Sekunde (kbps) und Megabyte pro Sekunde (MB/s).
Erläuterung: Um Megabit pro Sekunde in Kilobit pro Sekunde umzurechnen, multiplizieren Sie mit 1000, und um Megabit pro Sekunde in Megabyte pro Sekunde umzurechnen,
 teilen Sie durch 8.
Lösung:
Umrechnung von Megabit pro Sekunde in Kilobit pro Sekunde: 100 Mbps * 1000 kbps/Mbps = 100000 kbps.
Umrechnung von Megabit pro Sekunde in Megabyte pro Sekunde: 100 Mbps / 8 MB/Mbps = 12.5 MB/s.
Umrechnung von Zeiteinheiten:

Aufgabe: Ein Datenbankbackup dauert 3 Stunden und 45 Minuten. Konvertieren Sie diese Zeit in Minuten.
Erläuterung: Um Stunden in Minuten umzurechnen, multiplizieren Sie mit 60, und addieren Sie die verbleibenden Minuten.
Lösung:
Umrechnung von Stunden in Minuten: 3 Stunden * 60 Minuten/Stunde + 45 Minuten = 180 Minuten + 45 Minuten = 225 Minuten.

SQL Fragen und Antworten:
Frage: Erklären Sie den Unterschied zwischen INNER JOIN und LEFT JOIN in SQL.
Antwort:
INNER JOIN: Gibt nur Datensätze zurück, die in beiden verknüpften Tabellen vorhanden sind, basierend auf einer angegebenen Bedingung.
LEFT JOIN: Gibt alle Datensätze aus der linken Tabelle und die übereinstimmenden Datensätze aus der rechten Tabelle zurück. Falls keine Übereinstimmung
 gefunden wird, werden NULL-Werte für die Spalten der rechten Tabelle zurückgegeben.
Frage: Schreiben Sie eine SQL-Abfrage, um die Anzahl der Mitarbeiter in jeder Abteilung zu ermitteln.
Antwort:
SELECT Abteilung, COUNT(*) AS Anzahl_Mitarbeiter
FROM Mitarbeiter
GROUP BY Abteilung;
Frage: Was versteht man unter Normalisierung in Bezug auf Datenbanken und warum ist sie wichtig?
Antwort:
Normalisierung ist der Prozess, durch den Datenbankdesigns in mehrere Tabellen aufgeteilt werden, um Redundanz zu minimieren und Datenintegrität zu gewährleisten.
Sie ist wichtig, um Anomalien wie Duplikate, Aktualisierungsanomalien und Einfügeanomalien zu vermeiden und die Effizienz bei der Abfrageausführung zu verbessern.
Frage: Erläutern Sie den Unterschied zwischen DELETE und TRUNCATE in SQL.
Antwort:
DELETE: Löscht einzelne Zeilen aus einer Tabelle unter Berücksichtigung der WHERE-Bedingung. Es löst Trigger aus und hat eine höhere Auswirkung auf die Leistung.
TRUNCATE: Löscht alle Zeilen aus einer Tabelle ohne WHERE-Bedingung. Es ist schneller als DELETE, löst jedoch keine Trigger aus und kann nicht rückgängig gemacht werden.
C++ Fragen und Antworten:
Frage: Was ist der Unterschied zwischen einer Referenz und einem Zeiger in C++?
Antwort:
Eine Referenz ist ein Alias für eine bereits existierende Variable und kann nicht neu zugewiesen werden.
Ein Zeiger ist eine Variable, die die Adresse einer anderen Variablen enthält und neu zugewiesen werden kann.
Frage: Erstellen Sie einen Pseudocode fuer die Berechnung der Fakultaet einer Zahl.
Antwort:
FUNKTION Fakultät(n: INTEGER) : INTEGER
BEGIN
    WENN n == 0 DANN
        RETURN 1
    SONST
        RETURN n * Fakultät(n - 1)
    ENDE WENN
END FUNKTION
Frage: Erstellen Sie ein Struktogram in ASCII-Art für eine Schleife, die von 1 bis 10 zählt und die Summe der Zahlen berechnet.
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
Frage: Erstellen Sie ein PAP in ASCII-Art für die Berechnung des Durchschnitts einer Reihe von Zahlen.
Antwort:
Anfang
|
| Eingabe der Anzahl der Zahlen n
| Eingabe der n Zahlen
| Summe = 0, count = 0
| Für i von 1 bis n
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
Datenintegrität
Trigger
Redundanz
Aktualisierungsanomalien
Einfügeanomalien

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
Projektüberwachung
Projektausführung
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
Latenz = Verzögerung

Betriebssystem-Fachwörter:
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

IT-Sicherheit-Fachwörter:
Verschlüsselung
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
Verschlüsselungsalgorithmen
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
Gantt Diagramm, Meilensteine, Projektphasen als Balken, Ressourcen Zuweisen, Vorgänger , Vorwaertsplanung , Deadline 
Zeitplan  
Use-Case-Diagramm    User/Kunde -> Firma -> 
ERM Entity-Relation-Model  Entitaet-Attribut-Beziehung 1-n n-m chen-Notation
Klassendiagramm   Vererbung , Realisierung , Abhaengigkeit , Aggregation , Zusammensetzung , Beziehung 
Struktogramm    Kopf-Fußgesteuerte Schleifen
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
KaiZen    stetige Veränderung zum Besseren
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
Arten von Guetern  materiel/immateriel/Konsum/investitions/verbrauchs -Güter
Produktionsformen Primaer: Sekundaer Teritaer 
Vertragsrecht Oeffentliches / Privates Recht  
Vertragsarten Kauf,Schenkung,Tausch    Dienstvertrag->Leistung Werksvertrag->Werkstueck   
Miet, Pacht, Darlehen, Leih
(Kaufvertrag entsteht durch Antrag und Annahme)
Besitz/Eigentum  Uebertragung
Juristische Personen    Privatrecht: Gesellschaften,Vereine  öffentliches Recht: Gemeinden,Universitäten
Rechtsobjekte  -Rechte: Forderungen,Pfandrechte,Lizenz,Patent  -Sachen: mobil/immobil
Rechtsgeschäfte  -Willenserklaerung -Formvorschriften -Einseitig/Zweiseitig  -Holschuld/Bringschuld -Nichtigkeit
Geschaeftsfähigkeit  naja:1-7,bedingt: 7-17,voll: 18-...Jahre
Rentabilitaetsrechnung %=(Gewinn*100)/Kapital
Bilanzrechnung  Aktiva/Passiva 
Deckungsbeitragsberechnung

Qualitaetsmanagement  KVP 
SMART Optimierung   Spezifisch,Messbar,Akzeptiert,Realistisch,Terminiert
Nutzwertanalyse
SWOT Analyse   Strenghten Weaknesses Opportunities Threats
ABC Analyse   -wasistamwichtigsten?
Magisches Dreieck/Viereck   3Eck: Zeit&Kosten&Qualität / 4Eck:stabilerPreis&Beschaeftigte++&Gleichgewicht&Moneyflow
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
Bildschirmauflösung  4K , 8K 
Anschluesse: SATA,PCIexpress, HDMI,DisplayPort,Thunderbird,VGA,DVI,USBc3.0,LAN,Koaxial
Uebertragungsrate, Kabel LAN Cat.7   Single Mode /   MIMO 
Dateisysteme   NTFS, FAT32, ext4

Netzwerktechnik
Netzwerkplan WAN:DSL  LAN:Ethernet,WLAN - Firewall - Switch - Access Point - Router PAN: Bluetooth 
OSI Modell  7 Schichten  / TCP Modell 4 Schichten
Netzwerkprotokolle ARP Übersetzung IP-MAC , BGP ,DNS, DHCP, FTP, HTTP, SMTP, IP, TCP, UDP  Apipa
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
RAID1:Spiegelung RAID0:Streifen RAID5:Streifen mit Parität RAID6:Streifen mit doppelter Parität 
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
Zahlensysteme Binär/Dezi/Hexa   Umrechnung-> Divisionsrest   
ASCI  UTF Zeichensatz  0-127 ueberall gleich  128-255  
Speicherplatz / Uebertragungsgeschwindigkeit berechnen
Umrechnung      1byte = 8 bit        Kilo,Mega,Giga,Terra,Penta - bit / byte 
Kibi/Mebi/byte *1028  -> KiB: 1024^1 2^10 , MiB: 1024^2 2^20 GiB: 1024^3 2^30  
Farbtiefe  dpi=  Pixel =   1 cm=2,54 inch    RGB= 24 bit pro Pixel
Dateiformate SVG, PDF , PNG , XML , PPT , WAV, TIFF , JPG , XLS , BMP , CSV, DLL , JSON
Englisch übersetzen
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
HTML Grundgerüst einer Website 
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
            // Überprüfen, ob die Escape-Taste oder die Null-Taste gedrückt wurde
            if (_kbhit()) {
                char key = _getch();
                if (key == 27 || key == '0') {
                    running = false;
                }
            }
        } while (running);
    return 0;
}