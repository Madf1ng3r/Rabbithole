#include "Mainframe.h"
using namespace std;
int cmdmain() {
	clearScreen();
	cout << R"(

Hier ist eine Liste mit einigen der am h�ufigsten verwendeten CMD-Befehle unter Windows und ihrer Bedeutung:

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
Bedeutung: L�scht eine oder mehrere Dateien.
Beispiel: del Datei.txt l�scht die Datei "Datei.txt".

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
Bedeutung: �berpr�ft die Erreichbarkeit eines Netzwerkziels.
Beispiel: ping www.google.com pr�ft die Erreichbarkeit der Website "www.google.com".

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
Bedeutung: L�scht den Bildschirminhalt.
Beispiel: cls l�scht alle vorherigen Befehle und gibt einen sauberen Bildschirm aus.

echo:
Bedeutung: Gibt Text auf der Konsole aus oder aktiviert/deaktiviert die Ausgabe von Befehlen in einer Batch-Datei.
Beispiel: echo Hallo, Welt! gibt den Text "Hallo, Welt!" auf der Konsole aus.

attrib (Attribute):
Bedeutung: Zeigt oder �ndert die Attribute (Schreibgesch�tzt, Versteckt, Archiv, usw.) von Dateien oder Verzeichnissen.
Beispiel: attrib +r Datei.txt setzt das Schreibschutzattribut f�r die Datei "Datei.txt".

xcopy:
Bedeutung: Kopiert Dateien und Verzeichnisse mit erweiterter Funktionalit�t im Vergleich zu copy.
Beispiel: xcopy Quelle\* Ziel\ /s /e kopiert alle Dateien und Unterverzeichnisse von "Quelle" nach "Ziel".

move:
Bedeutung: Verschiebt Dateien und Verzeichnisse an einen anderen Speicherort.
Beispiel: move Datei.txt Ziel\ verschiebt die Datei "Datei.txt" nach "Ziel".

shutdown:
Bedeutung: F�hrt den Computer herunter oder startet ihn neu.
Beispiel: shutdown /s /t 0 f�hrt den Computer sofort herunter.

sfc (System File Checker):
Bedeutung: �berpr�ft und repariert gesch�digte Systemdateien.
Beispiel: sfc /scannow f�hrt eine �berpr�fung der Systemdateien durch und repariert sie, falls erforderlich.

chkdsk (Check Disk):
Bedeutung: �berpr�ft und repariert Dateisystemfehler auf einer Festplatte.
Beispiel: chkdsk C: /f �berpr�ft und repariert das Dateisystem auf Laufwerk C:.

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
Bedeutung: Zeigt eine Liste der verf�gbaren CMD-Befehle und eine kurze Beschreibung f�r jeden Befehl an.
Beispiel: help zeigt eine Liste der verf�gbaren Befehle an.

)";
	return 0;
}
