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
Erläutern Sie die Unterschiede zwischen HDD und SSD.
Was versteht man unter Arbeitsspeicher und welche Arten gibt es?
Betriebssysteme:

Wie installiert man ein Betriebssystem auf einem Computer?
Welche Aufgaben hat ein Betriebssystem?
Nennen Sie verschiedene Betriebssysteme und ihre Einsatzgebiete.
Netzwerkgrundlagen:

Erklären Sie den Unterschied zwischen LAN und WAN.
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
Erläutern Sie den Unterschied zwischen Frontend und Backend in der Webentwicklung.
Welche Rolle spielen Cookies in der Webentwicklung und wie funktionieren sie?
Grundlagen der IT-Projektarbeit:

Was versteht man unter dem Wasserfallmodell und dem agilen Projektmanagement?
Nennen Sie die Phasen des Projektmanagements und beschreiben Sie deren Aufgaben.
Wie kann man Risiken in einem IT-Projekt identifizieren und bewerten?

(Lösung:
Netzwerkgrundlagen:

Das OSI-Modell ist ein Referenzmodell, das den Aufbau von Netzwerkprotokollen in sieben Schichten unterteilt, um die Interoperabilität verschiedener Netzwerkkomponenten zu gewährleisten.
Ein Hub ist ein Gerät, das Datenpakete an alle angeschlossenen Geräte in einem Netzwerk weiterleitet, während ein Switch Datenpakete nur an das Zielgerät sendet.
Ein Router ist ein Netzwerkgerät, das den Datenverkehr zwischen verschiedenen Netzwerken steuert und die richtigen Wege für die Datenpakete festlegt.
Betriebssysteme:

Der Kernel ist der Kern eines Betriebssystems und ist für die Verwaltung von Ressourcen wie Prozessen, Speicher und Ein-/Ausgabegeräten verantwortlich.
32-Bit- und 64-Bit-Betriebssysteme unterscheiden sich in der Größe der Datenbusse, was Auswirkungen auf die maximal adressierbare Speichermenge hat.
Beispiele für Dateisysteme sind FAT32, NTFS (unter Windows), ext4 (unter Linux) und HFS+ (unter macOS).
Datenbanken und SQL:

Eine Datenbank ist eine strukturierte Sammlung von Daten, die organisiert und effizient verwaltet werden kann, um darauf zuzugreifen und sie zu aktualisieren.
Relationale Datenbanken speichern Daten in Tabellen und ermöglichen komplexe Abfragen mithilfe von SQL (Structured Query Language), während NoSQL-Datenbanken flexibler sind und verschiedene Datenspeichermodelle unterstützen.
Eine SQL-Abfrage zum Abrufen von Mitarbeitern mit einem Gehalt über 3000 Euro könnte wie folgt aussehen: SELECT * FROM Mitarbeiter WHERE Gehalt > 3000;
Programmierung:

Compiler-Sprachen werden in Maschinencode übersetzt, während Interpreter-Sprachen Zeile für Zeile interpretiert und ausgeführt werden.
Beispiele für grundlegende Datentypen sind Integer, Float, String und Boolean, die jeweils unterschiedliche Arten von Daten repräsentieren.
Ein einfaches Programm zur Ausgabe der ersten 10 Primzahlen könnte durch eine Schleife realisiert werden, die Zahlen auf Primzahl testet und diese ausgibt.
IT-Sicherheit:

Ein Denial-of-Service-Angriff zielt darauf ab, einen Dienst durch Überlastung unzugänglich zu machen, während Maßnahmen wie Firewalls und Intrusion Detection Systems vor solchen Angriffen schützen können.
Authentifizierung überprüft die Identität eines Benutzers, während Autorisierung bestimmt, welche Aktionen ein Benutzer ausführen darf.
Datenverschlüsselung schützt sensible Daten vor unbefugtem Zugriff, indem sie sie in eine nicht lesbare Form umwandelt, die nur mit dem richtigen Schlüssel wiederhergestellt werden kann.
Webtechnologien:

HTTPS ist eine sichere Variante von HTTP, die eine verschlüsselte Kommunikation zwischen Browser und Server ermöglicht.
Das Frontend einer Website ist die Benutzeroberfläche, die vom Benutzer interagiert wird, während das Backend die Serverseite ist, die die Logik und Datenverarbeitung enthält.
Cookies sind kleine Dateien, die vom Browser gespeichert werden und Informationen über die Interaktion des Benutzers mit der Website speichern können, um die Benutzererfahrung zu verbessern.
Grundlagen der IT-Projektarbeit:

Das Wasserfallmodell ist ein sequenzielles Modell, bei dem die Phasen (Anforderungsanalyse, Entwurf, Implementierung, Test, Bereitstellung) nacheinander durchlaufen werden, während agile Methoden iterative Ansätze mit flexibleren Prozessen verwenden.
Phasen des Projektmanagements umfassen Initiation, Planung, Durchführung, Überwachung und Abschluss.
Risiken in einem IT-Projekt können durch Risikoanalysen und -bewertungen identifiziert und bewertet werden, um geeignete Gegenmaßnahmen zu entwickeln.)
Datenbanken und SQL:

Eine Datenbank ist eine strukturierte Sammlung von Daten, die auf einem Computersystem gespeichert ist und von einem Datenbankmanagementsystem (DBMS) verwaltet wird. Datenbanken ermöglichen effiziente Datenorganisation, -speicherung und -abfrage.
SQL (Structured Query Language) ist eine spezielle Programmiersprache, die für die Verwaltung und Abfrage von Datenbanken verwendet wird. Mit SQL können Datenbanken erstellt, geändert, gelöscht und abgefragt werden, um spezifische Informationen abzurufen.
Programmierung:

Programmierung bezieht sich auf den Prozess des Schreibens, Testens und Wartens von Quellcode, um Softwareanwendungen zu erstellen. Programmiersprachen wie Java, Python, C++, JavaScript usw. werden verwendet, um Anweisungen zu formulieren, die von einem Computer ausgeführt werden können.
Compiler-Sprachen werden in Maschinencode übersetzt, bevor sie ausgeführt werden, während Interpreter-Sprachen Zeile für Zeile interpretiert und ausgeführt werden. Compiler erzeugen normalerweise effizienteren Code, während Interpreter eine schnellere Entwicklungszeit ermöglichen.
IT-Sicherheit:

IT-Sicherheit befasst sich mit dem Schutz von Computersystemen vor Diebstahl, Beschädigung oder unbefugtem Zugriff auf Daten. Dies umfasst Maßnahmen wie Zugriffskontrolle, Verschlüsselung, Firewalls, Antivirensoftware und Sicherheitsrichtlinien.
Ein Denial-of-Service (DoS)-Angriff zielt darauf ab, eine Dienstleistung, einen Host oder eine Infrastruktur durch Überlastung unbrauchbar zu machen. Dies geschieht durch das Senden einer überwältigenden Menge von Anfragen oder Datenverkehr, die die Ressourcen des Ziels erschöpfen.

                                                                         0 - zurück zum Menü 
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
            cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
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

Binäre Addition:
Erläuterung: Bei der binären Addition werden zwei binäre Zahlen zusammengezählt, ähnlich wie bei der Dezimaladdition. Überträge können auftreten, wenn das Ergebnis größer als eins ist.
Beispiel: Addieren wir die binären Zahlen 101 und 111:
  101
+ 111
-----
 1010
Lösung: Die Addition ergibt 1010 in binärer Form.
Binäre Subtraktion:
Erläuterung: Bei der binären Subtraktion wird eine binäre Zahl von einer anderen subtrahiert. Überträge können auftreten, wenn das Subtrahend größer als der Minuend ist.
Beispiel: Subtrahieren wir die binäre Zahl 1101 von der binären Zahl 10010:
  10010
-  1101
-------
  1001
Lösung: Die Subtraktion ergibt 1001 in binärer Form.
Bitweise UND-Verknüpfung:
Erläuterung: Die bitweise UND-Verknüpfung führt eine logische UND-Operation auf den entsprechenden Bits von zwei binären Zahlen durch.
Beispiel: Führen wir die bitweise UND-Verknüpfung der binären Zahlen 101010 und 110011 durch:
markdown
Copy code
  101010
& 110011
--------
  100010
Lösung: Das Ergebnis der bitweisen UND-Verknüpfung ist 100010 in binärer Form.
Zweierkomplement:
Erläuterung: Das Zweierkomplement wird verwendet, um negative Zahlen im Binärsystem darzustellen. Es wird berechnet, indem man die Bitwerte invertiert und dann eins addiert.
Beispiel: Berechnen wir das Zweierkomplement der binären Zahl 110101:
Original:  110101
Inversion: 001010
+ 1
--------
Komplement: 001011
Lösung: Das Zweierkomplement von 110101 ist 001011 in binärer Form.

Umrechnung von Dezimal zu Binär und Hexadezimal:

Aufgabe: Konvertieren Sie die Dezimalzahl 217 in das Binär- und Hexadezimalsystem.
Erläuterung: Um eine Dezimalzahl in das Binärsystem umzurechnen, führen Sie wiederholt Division durch 2 durch und notieren die Reste. Um eine Dezimalzahl in das Hexadezimalsystem umzurechnen, können Sie das Binärsystem als Zwischenschritt verwenden.
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
Die Binärzahl 11011001 in 4-Bit-Blöcke aufteilen: 1101 und 1001. Konvertieren Sie dann jeden 4-Bit-Block in seine entsprechende Hexadezimalzahl: D und 9. Die Hexadezimaldarstellung von 217 ist daher D9.
Umrechnung von Hexadezimal zu Dezimal und Binär:

Aufgabe: Konvertieren Sie die hexadezimale Zahl AB3F in das Dezimal- und Binärsystem.
Erläuterung: Um eine Hexadezimalzahl in das Dezimalsystem umzurechnen, multiplizieren Sie jeden Hexadezimalwert mit seiner entsprechenden Potenz von 16 und addieren die Ergebnisse. Um eine Hexadezimalzahl in das Binärsystem umzurechnen, konvertieren Sie jeden Hexadezimalwert in seine entsprechende 4-Bit-Binärzahl.
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

Aufgabe: Ein Internetanschluss hat eine maximale Downloadgeschwindigkeit von 100 Megabit pro Sekunde (Mbps). Konvertieren Sie diese Geschwindigkeit in Kilobit pro Sekunde (kbps) und Megabyte pro Sekunde (MB/s).
Erläuterung: Um Megabit pro Sekunde in Kilobit pro Sekunde umzurechnen, multiplizieren Sie mit 1000, und um Megabit pro Sekunde in Megabyte pro Sekunde umzurechnen, teilen Sie durch 8.
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
LEFT JOIN: Gibt alle Datensätze aus der linken Tabelle und die übereinstimmenden Datensätze aus der rechten Tabelle zurück. Falls keine Übereinstimmung gefunden wird, werden NULL-Werte für die Spalten der rechten Tabelle zurückgegeben.
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
Frage: Erstellen Sie einen Pseudocode für die Berechnung der Fakultät einer Zahl.
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
|
| Eingabe der Anzahl der Zahlen n
| Eingabe der n Zahlen
| Summe = 0, count = 0
|
| Für i von 1 bis n
|   Summe = Summe + Zahl[i]
|   count = count + 1
|
| Durchschnitt = Summe / n
| Ausgabe des Durchschnitts
                                                                    0 - zurück zum Menü
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
    cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
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

SQL-Fachwörter:
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

C++-Fachwörter:
Referenz
Zeiger
Pseudocode
Struktogram
PAP (Programmablaufplan)
Schleife
Variable
Funktion
Parameter
Fakultät

Projektmanagement-Fachwörter:
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
Scope Management
Stakeholder-Management
Kommunikationsmanagement
Qualitätsmanagement

Netzwerkgrundlagen-Fachwörter:
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
Penetrationstest = Test der Cybersecurity zum überprüfen wie sicher ein System ist zB. durch Hacken der Firewall
                                     1 - Weitere Definitionen  0 - zurück zum Menü
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
    cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
 IHK Fachinformatiker Zwischenprüfung Teil 1 Einrichtung eines IT-gestützten Arbeitsplatz

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
Mobile Geräte und Mobile Device Management (MDM)
Cloud Computing und seine Anwendungen
Projektmanagement im IT-Bereich
Dokumentation und Reporting
                                                           0 - zurück zum Menü
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
        cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
                                                  |  | ' 1.  Prüfungsfragen   |                              |  |    
                                                  |  | ' 2.  Prüfungsfragen   |                              |  |     
                                                  |  | ' 3.  Themengebiete    |                              |  |     
                                                  |  | ' 4.  Fachbegriffe     |                              |  |     
                                                  |  | ' 5.                   |                              |  |    
                                                  |  | ' 6.                   |                              |  |     
                                                  |  | ' 7.                   |                              |  |     
                                                  |  | ' 8.                   |                              |  |     
                                                  |  | ' 9.                   |                              |  |     
                                                  |  | '10. nächste Seite     |                              |  |     
                                                  |  | ' 0. zurück            |                              |  |     
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
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
            // Überprüfen Sie, ob die Escape-Taste oder die Null-Taste gedrückt wurde
            if (_kbhit()) {
                char key = _getch();
                if (key == 27 || key == '0') {
                    running = false;
                }
            }
        } while (running);
    return 0;
}
