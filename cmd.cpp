#include "Mainframe.h"
using namespace std;
int cmdmain() {
	clearScreen();
	cout << R"(

Hier ist eine Liste mit einigen der am häufigsten verwendeten CMD-Befehle unter Windows und ihrer Bedeutung:

cd (Change Directory):

Bedeutung: Wechselt das aktuelle Verzeichnis.
Beispiel: cd Desktop wechselt zum Desktop-Verzeichnis.

dir (Directory Listing):
Bedeutung: Zeigt den Inhalt des aktuellen Verzeichnisses an.
Beispiel: dir zeigt die Liste der Dateien und Verzeichnisse im aktuellen Verzeichnis an.

mkdir (Make Directory):
Bedeutung: Erstellt ein neues Verzeichnis.
Beispiel: mkdir NeuerOrdner erstellt einen Ordner namens "NeuerOrdner".

del (Delete):
Bedeutung: Löscht eine oder mehrere Dateien.
Beispiel: del Datei.txt löscht die Datei "Datei.txt".

copy:
Bedeutung: Kopiert eine oder mehrere Dateien von einem Ort zum anderen.
Beispiel: copy Quelle\Datei.txt Ziel\ kopiert die Datei "Datei.txt" von "Quelle" nach "Ziel".

ren (Rename):
Bedeutung: Benennt eine Datei oder ein Verzeichnis um.
Beispiel: ren AlteDatei.txt NeueDatei.txt benennt die Datei "AlteDatei.txt" in "NeueDatei.txt" um.

ipconfig (IP Configuration):
Bedeutung: Zeigt Informationen zur Netzwerkkonfiguration an.
Beispiel: ipconfig zeigt Informationen zu IP-Adressen, Subnetzmasken und Gateways an.

ping:
Bedeutung: Überprüft die Erreichbarkeit eines Netzwerkziels.
Beispiel: ping www.google.com prüft die Erreichbarkeit der Website "www.google.com".

tasklist:
Bedeutung: Zeigt eine Liste aller laufenden Prozesse an.
Beispiel: tasklist zeigt eine Liste aller Prozesse mit ihren Prozess-IDs an.

taskkill:
Bedeutung: Beendet einen laufenden Prozess anhand seiner Prozess-ID.
Beispiel: taskkill /PID 1234 beendet den Prozess mit der ID 1234.

systeminfo:
Bedeutung: Zeigt detaillierte Informationen zum Betriebssystem an.
Beispiel: systeminfo zeigt Informationen wie Betriebssystemversion, Installationsdatum und Systemhersteller an.

cls (Clear Screen):
Bedeutung: Löscht den Bildschirminhalt.
Beispiel: cls löscht alle vorherigen Befehle und gibt einen sauberen Bildschirm aus.

echo:
Bedeutung: Gibt Text auf der Konsole aus oder aktiviert/deaktiviert die Ausgabe von Befehlen in einer Batch-Datei.
Beispiel: echo Hallo, Welt! gibt den Text "Hallo, Welt!" auf der Konsole aus.

attrib (Attribute):
Bedeutung: Zeigt oder ändert die Attribute (Schreibgeschützt, Versteckt, Archiv, usw.) von Dateien oder Verzeichnissen.
Beispiel: attrib +r Datei.txt setzt das Schreibschutzattribut für die Datei "Datei.txt".

xcopy:
Bedeutung: Kopiert Dateien und Verzeichnisse mit erweiterter Funktionalität im Vergleich zu copy.
Beispiel: xcopy Quelle\* Ziel\ /s /e kopiert alle Dateien und Unterverzeichnisse von "Quelle" nach "Ziel".

move:
Bedeutung: Verschiebt Dateien und Verzeichnisse an einen anderen Speicherort.
Beispiel: move Datei.txt Ziel\ verschiebt die Datei "Datei.txt" nach "Ziel".

shutdown:
Bedeutung: Fährt den Computer herunter oder startet ihn neu.
Beispiel: shutdown /s /t 0 fährt den Computer sofort herunter.

sfc (System File Checker):
Bedeutung: Überprüft und repariert geschädigte Systemdateien.
Beispiel: sfc /scannow führt eine Überprüfung der Systemdateien durch und repariert sie, falls erforderlich.

chkdsk (Check Disk):
Bedeutung: Überprüft und repariert Dateisystemfehler auf einer Festplatte.
Beispiel: chkdsk C: /f überprüft und repariert das Dateisystem auf Laufwerk C:.

netstat (Network Statistics):
Bedeutung: Zeigt Netzwerkverbindungen, Routingtabellen, Schnittstellenstatistiken, Maschinentabelle und vieles mehr an.
Beispiel: netstat -an zeigt alle aktiven Netzwerkverbindungen an.

gpupdate (Group Policy Update):
Bedeutung: Aktualisiert die Gruppenrichtlinien auf einem Computer.
Beispiel: gpupdate /force erzwingt eine sofortige Aktualisierung der Gruppenrichtlinien.

wmic (Windows Management Instrumentation Command-line):
Bedeutung: Bietet Zugriff auf das Windows-Verwaltungsinstrumentarium.
Beispiel: wmic os get Caption,Version gibt Informationen zum installierten Betriebssystem aus.

help:
Bedeutung: Zeigt eine Liste der verfügbaren CMD-Befehle und eine kurze Beschreibung für jeden Befehl an.
Beispiel: help zeigt eine Liste der verfügbaren Befehle an.

)";
	return 0;
}
