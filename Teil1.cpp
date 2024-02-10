#include "Mainframe.h"
#include "Wiki.h"
#include "Definitionen.h"
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
Erl�utern Sie die Unterschiede zwischen HDD und SSD.
Was versteht man unter Arbeitsspeicher und welche Arten gibt es?
Betriebssysteme:

Wie installiert man ein Betriebssystem auf einem Computer?
Welche Aufgaben hat ein Betriebssystem?
Nennen Sie verschiedene Betriebssysteme und ihre Einsatzgebiete.
Netzwerkgrundlagen:

Erkl�ren Sie den Unterschied zwischen LAN und WAN.
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
Erl�utern Sie den Unterschied zwischen Frontend und Backend in der Webentwicklung.
Welche Rolle spielen Cookies in der Webentwicklung und wie funktionieren sie?
Grundlagen der IT-Projektarbeit:

Was versteht man unter dem Wasserfallmodell und dem agilen Projektmanagement?
Nennen Sie die Phasen des Projektmanagements und beschreiben Sie deren Aufgaben.
Wie kann man Risiken in einem IT-Projekt identifizieren und bewerten?

(L�sung:
Netzwerkgrundlagen:

Das OSI-Modell ist ein Referenzmodell, das den Aufbau von Netzwerkprotokollen in sieben Schichten unterteilt, um die Interoperabilit�t verschiedener Netzwerkkomponenten zu gew�hrleisten.
Ein Hub ist ein Ger�t, das Datenpakete an alle angeschlossenen Ger�te in einem Netzwerk weiterleitet, w�hrend ein Switch Datenpakete nur an das Zielger�t sendet.
Ein Router ist ein Netzwerkger�t, das den Datenverkehr zwischen verschiedenen Netzwerken steuert und die richtigen Wege f�r die Datenpakete festlegt.
Betriebssysteme:

Der Kernel ist der Kern eines Betriebssystems und ist f�r die Verwaltung von Ressourcen wie Prozessen, Speicher und Ein-/Ausgabeger�ten verantwortlich.
32-Bit- und 64-Bit-Betriebssysteme unterscheiden sich in der Gr��e der Datenbusse, was Auswirkungen auf die maximal adressierbare Speichermenge hat.
Beispiele f�r Dateisysteme sind FAT32, NTFS (unter Windows), ext4 (unter Linux) und HFS+ (unter macOS).
Datenbanken und SQL:

Eine Datenbank ist eine strukturierte Sammlung von Daten, die organisiert und effizient verwaltet werden kann, um darauf zuzugreifen und sie zu aktualisieren.
Relationale Datenbanken speichern Daten in Tabellen und erm�glichen komplexe Abfragen mithilfe von SQL (Structured Query Language), w�hrend NoSQL-Datenbanken flexibler sind und verschiedene Datenspeichermodelle unterst�tzen.
Eine SQL-Abfrage zum Abrufen von Mitarbeitern mit einem Gehalt �ber 3000 Euro k�nnte wie folgt aussehen: SELECT * FROM Mitarbeiter WHERE Gehalt > 3000;
Programmierung:

Compiler-Sprachen werden in Maschinencode �bersetzt, w�hrend Interpreter-Sprachen Zeile f�r Zeile interpretiert und ausgef�hrt werden.
Beispiele f�r grundlegende Datentypen sind Integer, Float, String und Boolean, die jeweils unterschiedliche Arten von Daten repr�sentieren.
Ein einfaches Programm zur Ausgabe der ersten 10 Primzahlen k�nnte durch eine Schleife realisiert werden, die Zahlen auf Primzahl testet und diese ausgibt.
IT-Sicherheit:

Ein Denial-of-Service-Angriff zielt darauf ab, einen Dienst durch �berlastung unzug�nglich zu machen, w�hrend Ma�nahmen wie Firewalls und Intrusion Detection Systems vor solchen Angriffen sch�tzen k�nnen.
Authentifizierung �berpr�ft die Identit�t eines Benutzers, w�hrend Autorisierung bestimmt, welche Aktionen ein Benutzer ausf�hren darf.
Datenverschl�sselung sch�tzt sensible Daten vor unbefugtem Zugriff, indem sie sie in eine nicht lesbare Form umwandelt, die nur mit dem richtigen Schl�ssel wiederhergestellt werden kann.
Webtechnologien:

HTTPS ist eine sichere Variante von HTTP, die eine verschl�sselte Kommunikation zwischen Browser und Server erm�glicht.
Das Frontend einer Website ist die Benutzeroberfl�che, die vom Benutzer interagiert wird, w�hrend das Backend die Serverseite ist, die die Logik und Datenverarbeitung enth�lt.
Cookies sind kleine Dateien, die vom Browser gespeichert werden und Informationen �ber die Interaktion des Benutzers mit der Website speichern k�nnen, um die Benutzererfahrung zu verbessern.
Grundlagen der IT-Projektarbeit:

Das Wasserfallmodell ist ein sequenzielles Modell, bei dem die Phasen (Anforderungsanalyse, Entwurf, Implementierung, Test, Bereitstellung) nacheinander durchlaufen werden, w�hrend agile Methoden iterative Ans�tze mit flexibleren Prozessen verwenden.
Phasen des Projektmanagements umfassen Initiation, Planung, Durchf�hrung, �berwachung und Abschluss.
Risiken in einem IT-Projekt k�nnen durch Risikoanalysen und -bewertungen identifiziert und bewertet werden, um geeignete Gegenma�nahmen zu entwickeln.)
Datenbanken und SQL:

Eine Datenbank ist eine strukturierte Sammlung von Daten, die auf einem Computersystem gespeichert ist und von einem Datenbankmanagementsystem (DBMS) verwaltet wird. Datenbanken erm�glichen effiziente Datenorganisation, -speicherung und -abfrage.
SQL (Structured Query Language) ist eine spezielle Programmiersprache, die f�r die Verwaltung und Abfrage von Datenbanken verwendet wird. Mit SQL k�nnen Datenbanken erstellt, ge�ndert, gel�scht und abgefragt werden, um spezifische Informationen abzurufen.
Programmierung:

Programmierung bezieht sich auf den Prozess des Schreibens, Testens und Wartens von Quellcode, um Softwareanwendungen zu erstellen. Programmiersprachen wie Java, Python, C++, JavaScript usw. werden verwendet, um Anweisungen zu formulieren, die von einem Computer ausgef�hrt werden k�nnen.
Compiler-Sprachen werden in Maschinencode �bersetzt, bevor sie ausgef�hrt werden, w�hrend Interpreter-Sprachen Zeile f�r Zeile interpretiert und ausgef�hrt werden. Compiler erzeugen normalerweise effizienteren Code, w�hrend Interpreter eine schnellere Entwicklungszeit erm�glichen.
IT-Sicherheit:

IT-Sicherheit befasst sich mit dem Schutz von Computersystemen vor Diebstahl, Besch�digung oder unbefugtem Zugriff auf Daten. Dies umfasst Ma�nahmen wie Zugriffskontrolle, Verschl�sselung, Firewalls, Antivirensoftware und Sicherheitsrichtlinien.
Ein Denial-of-Service (DoS)-Angriff zielt darauf ab, eine Dienstleistung, einen Host oder eine Infrastruktur durch �berlastung unbrauchbar zu machen. Dies geschieht durch das Senden einer �berw�ltigenden Menge von Anfragen oder Datenverkehr, die die Ressourcen des Ziels ersch�pfen.

                                                                         0 - zur�ck zum Men� 
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
            cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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

void pruefungsfragen2() {
    bool running = true;
    do {
        system("cls");
        int choice;
        clearScreen();
 cout <<   R"(

Bin�re Addition:
Erl�uterung: Bei der bin�ren Addition werden zwei bin�re Zahlen zusammengez�hlt, �hnlich wie bei der Dezimaladdition. �bertr�ge k�nnen auftreten, wenn das Ergebnis gr��er als eins ist.
Beispiel: Addieren wir die bin�ren Zahlen 101 und 111:
  101
+ 111
-----
 1010
L�sung: Die Addition ergibt 1010 in bin�rer Form.
Bin�re Subtraktion:
Erl�uterung: Bei der bin�ren Subtraktion wird eine bin�re Zahl von einer anderen subtrahiert. �bertr�ge k�nnen auftreten, wenn das Subtrahend gr��er als der Minuend ist.
Beispiel: Subtrahieren wir die bin�re Zahl 1101 von der bin�ren Zahl 10010:
  10010
-  1101
-------
  1001
L�sung: Die Subtraktion ergibt 1001 in bin�rer Form.
Bitweise UND-Verkn�pfung:
Erl�uterung: Die bitweise UND-Verkn�pfung f�hrt eine logische UND-Operation auf den entsprechenden Bits von zwei bin�ren Zahlen durch.
Beispiel: F�hren wir die bitweise UND-Verkn�pfung der bin�ren Zahlen 101010 und 110011 durch:
markdown
Copy code
  101010
& 110011
--------
  100010
L�sung: Das Ergebnis der bitweisen UND-Verkn�pfung ist 100010 in bin�rer Form.
Zweierkomplement:
Erl�uterung: Das Zweierkomplement wird verwendet, um negative Zahlen im Bin�rsystem darzustellen. Es wird berechnet, indem man die Bitwerte invertiert und dann eins addiert.
Beispiel: Berechnen wir das Zweierkomplement der bin�ren Zahl 110101:
Original:  110101
Inversion: 001010
+ 1
--------
Komplement: 001011
L�sung: Das Zweierkomplement von 110101 ist 001011 in bin�rer Form.

Umrechnung von Dezimal zu Bin�r und Hexadezimal:

Aufgabe: Konvertieren Sie die Dezimalzahl 217 in das Bin�r- und Hexadezimalsystem.
Erl�uterung: Um eine Dezimalzahl in das Bin�rsystem umzurechnen, f�hren Sie wiederholt Division durch 2 durch und notieren die Reste. Um eine Dezimalzahl in das Hexadezimalsystem umzurechnen, k�nnen Sie das Bin�rsystem als Zwischenschritt verwenden.
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
Die Bin�rzahl 11011001 in 4-Bit-Bl�cke aufteilen: 1101 und 1001. Konvertieren Sie dann jeden 4-Bit-Block in seine entsprechende Hexadezimalzahl: D und 9. Die Hexadezimaldarstellung von 217 ist daher D9.
Umrechnung von Hexadezimal zu Dezimal und Bin�r:

Aufgabe: Konvertieren Sie die hexadezimale Zahl AB3F in das Dezimal- und Bin�rsystem.
Erl�uterung: Um eine Hexadezimalzahl in das Dezimalsystem umzurechnen, multiplizieren Sie jeden Hexadezimalwert mit seiner entsprechenden Potenz von 16 und addieren die Ergebnisse. Um eine Hexadezimalzahl in das Bin�rsystem umzurechnen, konvertieren Sie jeden Hexadezimalwert in seine entsprechende 4-Bit-Bin�rzahl.
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

Aufgabe: Ein Internetanschluss hat eine maximale Downloadgeschwindigkeit von 100 Megabit pro Sekunde (Mbps). Konvertieren Sie diese Geschwindigkeit in Kilobit pro Sekunde (kbps) und Megabyte pro Sekunde (MB/s).
Erl�uterung: Um Megabit pro Sekunde in Kilobit pro Sekunde umzurechnen, multiplizieren Sie mit 1000, und um Megabit pro Sekunde in Megabyte pro Sekunde umzurechnen, teilen Sie durch 8.
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
LEFT JOIN: Gibt alle Datens�tze aus der linken Tabelle und die �bereinstimmenden Datens�tze aus der rechten Tabelle zur�ck. Falls keine �bereinstimmung gefunden wird, werden NULL-Werte f�r die Spalten der rechten Tabelle zur�ckgegeben.
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
Frage: Erstellen Sie einen Pseudocode f�r die Berechnung der Fakult�t einer Zahl.
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
|
| Eingabe der Anzahl der Zahlen n
| Eingabe der n Zahlen
| Summe = 0, count = 0
|
| F�r i von 1 bis n
|   Summe = Summe + Zahl[i]
|   count = count + 1
|
| Durchschnitt = Summe / n
| Ausgabe des Durchschnitts
                                                                    0 - zur�ck zum Men�
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
    cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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

SQL-Fachw�rter:
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

C++-Fachw�rter:
Referenz
Zeiger
Pseudocode
Struktogram
PAP (Programmablaufplan)
Schleife
Variable
Funktion
Parameter
Fakult�t

Projektmanagement-Fachw�rter:
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
Scope Management
Stakeholder-Management
Kommunikationsmanagement
Qualit�tsmanagement

Netzwerkgrundlagen-Fachw�rter:
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
Penetrationstest = Test der Cybersecurity zum �berpr�fen wie sicher ein System ist zB. durch Hacken der Firewall
                                     1 - Weitere Definitionen  0 - zur�ck zum Men�
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
    cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
 IHK Fachinformatiker Zwischenpr�fung Teil 1 Einrichtung eines IT-gest�tzten Arbeitsplatz

Themenbereiche:

Hardwarekomponenten eines Computers (z.B. Prozessor, Arbeitsspeicher, Festplatte)
Betriebssysteme ( Windows, Linux, macOS )
Installation und Konfiguration von Betriebssystemen
Netzwerkgrundlagen (z.B. LAN, WAN, WLAN)
TCP/IP-Protokollsuite
Netzwerktopologien und -architekturen
Netzwerksicherheit und -management
Datensicherung und Wiederherstellung
Grundlagen der Virtualisierung
Softwareinstallation und -konfiguration
Benutzer- und Rechteverwaltung
Troubleshooting von Hardware- und Softwareproblemen
Remotezugriff und Fernwartung
Datenschutz und Datensicherheit
Grundlagen der IT-Sicherheit (z.B. Firewalls, Virenscanner)
Systemmonitoring und -optimierung
Mobile Ger�te und Mobile Device Management (MDM)
Cloud Computing und seine Anwendungen
Projektmanagement im IT-Bereich
Dokumentation und Reporting
                                                           0 - zur�ck zum Men�
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
        cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
                                                  |  | ' 1.  Pr�fungsfragen   |                              |  |    
                                                  |  | ' 2.  Pr�fungsfragen   |                              |  |     
                                                  |  | ' 3.  Themengebiete    |                              |  |     
                                                  |  | ' 4.  Fachbegriffe     |                              |  |     
                                                  |  | ' 5.                   |                              |  |    
                                                  |  | ' 6.                   |                              |  |     
                                                  |  | ' 7.                   |                              |  |     
                                                  |  | ' 8.                   |                              |  |     
                                                  |  | ' 9.                   |                              |  |     
                                                  |  | '10. n�chste Seite     |                              |  |     
                                                  |  | ' 0. zur�ck            |                              |  |     
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
                themengebiete();
                break;
            case 4:
                animateTransition();
                clearScreen();
                Fachbegriffe();
                break;
            case 0:
                running = false;
                break;
            default:
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
            // �berpr�fen Sie, ob die Escape-Taste oder die Null-Taste gedr�ckt wurde
            if (_kbhit()) {
                char key = _getch();
                if (key == 27 || key == '0') {
                    running = false;
                }
            }
        } while (running);
    return 0;
}
