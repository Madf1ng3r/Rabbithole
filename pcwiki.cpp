#include <iostream>
#include "Mainframe.h"
#include <thread>	
#include <chrono>
#include <string>
#include <vector>
#include <algorithm>
#include "pcwiki.h"

using namespace std;

void showraidzero() {
 cout <<   R"(
RAID 0 (Striping):

Ziel: Verbesserte Leistung durch Aufteilen von Daten auf mehrere Laufwerke.
Funktionsweise: Die Daten werden über mehrere Laufwerke gestreut, was zu schnellerem 
Datenzugriff führt. Es gibt jedoch keine Redundanz, daher führt der Ausfall eines Laufwerks zum Datenverlust.
)";
}

void showraidone() {
cout <<	R"(
RAID 1 (Mirroring):

Ziel: Datenredundanz für höhere Datensicherheit.
Funktionsweise: Alle Daten werden gleichzeitig auf zwei Festplatten gespiegelt. 
Wenn eine Festplatte ausfällt, sind die Daten auf der anderen Festplatte weiterhin verfügbar.
)";
}

void showraidfive() {
cout <<	R"(
RAID 5 (Block-Level Striping mit Parität):

Ziel: Kombination aus Leistung und Redundanz.
Funktionsweise: Daten werden auf mehreren Laufwerken gestreut, und Paritätsinformationen werden für Redundanz verwendet. 
Wenn eine Festplatte ausfällt, können die Daten durch Berechnung der Parität wiederhergestellt werden.
)";
}

void showraidsix() {
cout <<	R"(
RAID 6 (Block-Level Striping mit doppelter Parität):

Ziel: Höhere Datensicherheit durch doppelte Parität.
Funktionsweise: Ähnlich wie RAID 5, aber mit zusätzlicher Paritätsinformation. 
Es können zwei Festplatten ausfallen, ohne Datenverlust zu verursachen.
)";
}

void showraidten() {
cout <<	R"(
RAID 10 (RAID 1+0 oder Mirrored Stripes):

Ziel: Kombination aus RAID 1 und RAID 0 für Leistung und Redundanz.
Funktionsweise: Daten werden gespiegelt (RAID 1) und dann gestreut (RAID 0). 
Bietet hohe Leistung und Datensicherheit, erfordert jedoch mehr Festplatten.
)";
}

void showraidfifty() {
cout <<	R"(
RAID 50 (Combining RAID 5 and RAID 0):

Ziel: Kombination von RAID 5 für Redundanz und RAID 0 für Leistung.
Funktionsweise: Es werden mehrere RAID-5-Arrays kombiniert und über ein RAID-0-Array gestreut.
)";
}

void showraid()
{
    cout << R"(   
RAID steht für "Redundant Array of Independent Disks" und bezeichnet eine Technologie, 
bei der mehrere Festplatten zusammenarbeiten, um die Leistung, Zuverlässigkeit oder beides zu verbessern. 
Hier sind einige der gängigsten RAID-Level:
)";
    int choice;
    while (true)
    {
        cout << "1. RAID 0 " << endl;
        cout << "2. RAID 1" << endl;
        cout << "3. RAID 5" << endl;
        cout << "4. RAID 6" << endl;
        cout << "5. RAID 10" << endl;
        cout << "6. RAID 50" << endl;
        cout << "0. Zurück zum Hauptmenü" << endl;
        cout << "Wählen Sie eine Option: ";
        if (!(cin >> choice))
        {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2)); // Delay for 2 seconds
            continue;
        }
        switch (choice)
        {
        case 1:
            clearScreen();
            showraidzero();
            break;
        case 2:
            clearScreen();
            showraidone();
            break;
        case 3:
            clearScreen();
            showraidfive();
            break;
        case 4:
            clearScreen();
            showraidsix();
            break;
        case 5:
            clearScreen();
            showraidten();
            break;
        case 6:
            clearScreen();
            showraidfifty();
            break;
        case 0:
            return; // Zurück zum Hauptmenü
        default:
            cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2)); // Delay for 2 seconds
            break;
        }
    }
}

    void showandg() 
    {
         cout <<   R"(  
AND - Gate :
Das Ausgangssignal ist nur dann logisch 1 (wahr), wenn beide Eingangssignale logisch 1 sind.
            A AND B = Q 
___________
A | B | Q |
0 | 0 | 0 |
0 | 1 | 0 |
1 | 0 | 0 |
1 | 1 | 1 |
-----------
)";
    }

    void shownandg()
    {
       cout << R"(
NAND-Gate (NOT-UND):
Das Ausgangssignal ist nur dann logisch 0, wenn beide Eingangssignale logisch 1 sind.
A NAND B = Q
___________
A | B | Q |
0 | 0 = 1 |
0 | 1 = 1 |
1 | 0 = 1 |
1 | 1 = 0 |
-----------
)";
	}


    void showxorg()
	{
    cout <<    R"(
XOR-Gate (Exklusiv-ODER):
Das Ausgangssignal ist logisch 1, wenn die Eingangssignale unterschiedlich sind.
A XOR B = Q
__________
A	B = Q
0	0 = 0
0	1 = 1
1	0 = 1
1	1 = 0
----------
)";
	}

    void showorg()
    {
        cout << R"(
ODER-Gate (OR):
Das Ausgangssignal ist logisch 1, wenn mindestens eines der Eingangssignale logisch 1 ist.
A OR B = Q
__________
A	B = Q
0	0 = 0
0	1 = 1
1	0 = 1
1	1 = 1
----------
)";
 }

    void shownorg()
    {
     cout <<   R"(
NOR-Gate (NOT-ODER):
Das Ausgangssignal ist logisch 0, wenn mindestens eines der Eingangssignale logisch 1 ist.
A NOR B = Q
A	B	Q
0	0	1
0	1	0
1	0	0
1	1	0
)";
    }

    void shownotg()
    {
      cout <<  R"(
NICHT-Gate (NOT):
Das Ausgangssignal ist das Gegenteil des Eingangssignals.
NOT A = Q
A	Q
0	1
1	0
)";
    }

    void showlogicgate()
    {
        cout << R"(   
Logische Gates sind elektronische Bausteine, die in der digitalen Schaltungstechnik verwendet werden, 
um logische Operationen durchzuführen. Hier sind die grundlegenden logischen Gates:
)";
        int choice;
        while (true)
        {
            cout << "1. AND-Gate" << endl;
            cout << "2. NAND-Gate" << endl;
            cout << "3. XOR-Gate" << endl;
            cout << "4. OR-Gate" << endl;
            cout << "5. NOR-Gate" << endl;
            cout << "6. NOT-Gate" << endl;
            cout << "0. Zurück zum Hauptmenü" << endl;
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
                clearScreen();
                showandg();
                break;
            case 2:
                clearScreen();
                shownandg();
                break;
            case 3:
                clearScreen();
                showxorg();
                break;
            case 4:
                clearScreen();
                showorg();
                break;
            case 5:
                clearScreen();
                shownorg();
                break;
            case 6:
                clearScreen();
                shownotg();
                break;
            case 0:
                return;
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

	void showosi1()
	{
        cout << R"(
Schicht 1: Bitübertragungsschicht (Physical Layer)
Die Bitübertragungsschicht beschreibt die elektrische, mechanische und funktionale 
Schnittstelle zum Übertragungsmedium. Einfacher gesagt: Sie beinhaltet die Datenübertragung 
der beteiligten physischen Geräte wie Kabel und Schalter. 
)";
	}

	void showosi2()
	{
		cout << R"(
Schicht 2: Sicherungsschicht (Data Link Layer)
Die Sicherungsschicht ermöglicht eine zuverlässige und funktionierende Verbindung zwischen 
Endgerät und Übertragungsmedium. Sie sorgt für den Datentransfer zwischen zwei Geräten 
im selben Netzwerk. Dabei nimmt der data link layer Pakete vom network layer auf 
und zerlegt sie in kleinere Teile, den sogenannten Frames. 
)";
	}

	void showosi3()
	{
		cout << R"(
Schicht 3: Vermittlungsschicht (Network Layer)
Die Vermittlungsschicht reguliert den Datentransfer zwischen zwei verschiedenen Netzwerken. 
Im Falle der Kommunikation innerhalb eines Netzwerks fällt diese Schicht weg. 
Auch hier teilen sich die Segmente auf dem Sendergerät von dem Transport Layer in Fragmente auf 
und fügen diese Pakete auf dem Empfängergerät wieder zusammen.
)";
	}

	void showosi4()
	{
		cout << R"(
Schicht 4: Transportschicht (Transport Layer)
Die Transportschicht ist für die End-to-End-Kommunikation zwischen zwei Geräten zuständig. 
Sie gilt also als Bindeglied zwischen den transportorientierten und anwendungsorientierten Schichten. 
Zur Datenübertragung wird das Gesamtpaket in kleinere Bestandteile zerlegt. 
)";
	}

	void showosi5()
	{
		cout << R"(
Schicht 5: Kommunikationsschicht (Session Layer)
Die Kommunikationsschicht ermöglicht die Verbindungen zwischen den Endsystemen. 
Die Zeit zwischen dem Öffnen und Schließen der Kommunikation bezeichnest du dabei als Sitzung (Session).
Darüber hinaus wird durch die session layer sichergestellt, dass die Sitzung lange genug 
geöffnet bleibt, um alle auszutauschenden Daten zu übertragen. Im Anschluss daran 
schließt sich die Sitzung, um Ressourcenverschwendung zu vermeiden.
)";
	}

	void showosi6()
	{
		cout << R"(
Schicht 6: Darstellungsschicht (Presentation Layer)
Die Darstellungsschicht bereitet die Daten so auf, dass sie dem Nutzer angezeigt werden können. 
In diesem Fall ist es üblich, dass zwei verschiedene Anwendungen die gleiche Kodierung verwenden.
Die Kommunikation mit einem Webserver über HTTPS (hypertext transfer protocol secure) 
ist verschlüsselt, weshalb die Daten erst entschlüsselt werden müssen. 
)";
	}

	void showosi7()
	{
		cout << R"(
Schicht 7: Anwendungsschicht (Application Layer)
Die Anwendungsschicht stellt Funktionen für Anwendungen bereit. 
Außerdem ermöglicht sie die Verbindung zu den unteren Schichten. 
Auf dieser Ebene findet auch die Dateneingabe und -ausgabe statt. 
)";
	}

    void showosi()
    {
        cout << R"(   
OSI steht für Open-Systems-Interconnection und wurde von der ISO (International Organization for Standardization)
entwickelt. Das Modell ermöglicht die standardisierte Kommunikation zwischen verschiedenen Computersystemen
und besteht aus 7 Level:
)";
        int choice;
        while (true)
        {
            cout << "1. Bitübertragungsschicht" << endl;
            cout << "2. Sicherungsschicht" << endl;
            cout << "3. Vermittlungsschicht" << endl;
            cout << "4. Transportschicht" << endl;
            cout << "5. Kommunikationsschicht" << endl;
            cout << "6. Darstellungsschicht" << endl;
			cout << "7. Anwendungsschicht" << endl;
            cout << "0. Zurück zum Hauptmenü" << endl;
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
                clearScreen();
                showosi1();
                break;
            case 2:
                clearScreen();
                showosi2();
                break;
            case 3:
                clearScreen();
                showosi3();
                break;
            case 4:
                clearScreen();
                showosi4();
                break;
            case 5:
                clearScreen();
                showosi5();
                break;
            case 6:
                clearScreen();
                showosi6();
                break;
			case 7:
				clearScreen();
				showosi7();
				break;
            case 0:
                return; 
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

	void shownetwork1()
	{
        cout << R"(
TCP/IP (Transmission Control Protocol/Internet Protocol):

Beschreibung: TCP/IP ist das grundlegende Protokoll, das das Internet antreibt. 
Es besteht aus zwei Hauptprotokollen: TCP, das für die zuverlässige Übertragung 
von Daten verantwortlich ist, und IP, das die Adressierung 
und das Routing von Paketen im Netzwerk ermöglicht.
Anwendungsbereich: Es bildet das Grundgerüst des Internets und wird für die 
meisten Internetanwendungen wie Webseitenzugriff, E-Mail, 
Dateiübertragungen und mehr verwendet.
)";
	}

	void shownetwork2()
	{
		cout << R"(
HTTP/HTTPS (Hypertext Transfer Protocol/Secure):

Beschreibung: HTTP ist ein Protokoll zur Übertragung von Hypertext über das Internet. 
HTTPS ist die sichere Variante von HTTP, die eine verschlüsselte Verbindung für zusätzliche Sicherheit bietet.
Anwendungsbereich: HTTP wird für den Austausch von Informationen auf Websites verwendet. 
HTTPS wird speziell für sichere Transaktionen und den geschützten Datenaustausch verwendet.
)";
	}

	void shownetwork3()
	{
		cout << R"(
FTP (File Transfer Protocol):

Beschreibung: FTP ermöglicht die Übertragung von Dateien zwischen einem Client und einem Server über ein Netzwerk.
Anwendungsbereich: Es wird oft für den Austausch von Dateien zwischen einem Benutzer 
und einem Server verwendet, beispielsweise beim Hochladen von Dateien auf eine Website.
)";
	}

	void shownetwork4()
	{
		cout << R"(
SMTP/POP/IMAP (Simple Mail Transfer Protocol/Post Office Protocol/Internet Message Access Protocol):

Beschreibung: SMTP wird verwendet, um E-Mails zu senden, während POP und IMAP dazu dienen, 
E-Mails auf einem Server abzurufen. POP lädt E-Mails herunter und löscht 
sie vom Server, während IMAP die E-Mails auf dem Server belässt.
Anwendungsbereich: Diese Protokolle werden für die Übertragung und den Abruf von E-Mails verwendet.
)";
	}

	void shownetwork5()
	{
		cout << R"(
DNS (Domain Name System):

Beschreibung: DNS übersetzt menschenlesbare Domainnamen in IP-Adressen, 
um die Kommunikation im Internet zu erleichtern. 
Anwendungsbereich: Jedes Mal, wenn Sie eine Website besuchen, wird DNS verwendet, 
um den Domainnamen in die entsprechende IP-Adresse umzuwandeln.
)";
	}

	void shownetwork6()
	{
		cout << R"(
UDP (User Datagram Protocol):

Beschreibung: UDP ist ein einfaches, verbindungsloses Protokoll, das für die 
Übertragung von Daten ohne Sicherheits- oder Integritätsprüfungen verwendet wird.
Anwendungsbereich: Es wird für Anwendungen verwendet, bei denen geringe Latenz wichtiger
ist als die Zuverlässigkeit der Datenübertragung, wie bei Videostreaming oder Online-Spielen.
)";
	}

	void shownetwork7()
	{
		cout << R"(
SSH (Secure Shell):

Beschreibung: SSH bietet eine sichere Möglichkeit, auf entfernte Systeme zuzugreifen 
und Befehle auszuführen. Es verschlüsselt die Kommunikation zwischen dem Client und dem Server.
Anwendungsbereich: SSH wird häufig für die Fernadministration von Servern und sichere Dateiübertragungen verwendet.
)";
	}

    void shownetworkp()
    {
        cout << R"(   
Ein Netzwerkprotokoll ist ein Kommunikationsprotokoll für den Austausch 
von Daten zwischen Computern bzw. Prozessen, die in einem Rechnernetz miteinander verbunden sind. 
Die Vereinbarung besteht aus einem Satz von Regeln und Formaten (Syntax), 
die das Kommunikationsverhalten der kommunizierenden Instanzen in den Computern bestimmen (Semantik).
Hier sind einige wichtige Netzwerkprotokolle:
)";
        int choice;
        while (true)
        {
            cout << "1. TCP/IP " << endl;
            cout << "2. HTTP/HTTPS" << endl;
            cout << "3. FTP" << endl;
            cout << "4. SMTP/POP/IMAP" << endl;
            cout << "5. DNS " << endl;
            cout << "6. UDP" << endl;
            cout << "7. SSH" << endl;
            cout << "0. Zurück zum Hauptmenü" << endl;
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
                clearScreen();
                shownetwork1();
                break;
            case 2:
                clearScreen();
                shownetwork2();
                break;
            case 3:
                clearScreen();
                shownetwork3();
                break;
            case 4:
                clearScreen();
                shownetwork4();
                break;
            case 5:
                clearScreen();
                shownetwork5();
                break;
            case 6:
                clearScreen();
                shownetwork6();
                break;
            case 7:
                clearScreen();
                shownetwork7();
                break;
            case 0:
                return; 
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2)); 
                break;
            }
        }
    }

    void showkabel1() 
    {
    cout <<    R"(
Netzwerkverkabelung:
Ethernet-Kabel:
Anwendung: Übertragung von Netzwerksignalen.
Typen:
Cat5: Übertragungsgeschwindigkeit: Bis zu 100 MHz.
Cat5e (Cat5 Enhanced):
Übertragungsgeschwindigkeit: Bis zu 1 Gbit/s (1000BASE-T).
Verbesserte Version von Cat5, die Gigabit Ethernet unterstützt und weniger Störungen aufweist.
Cat6: Übertragungsgeschwindigkeit: Bis zu 250 MHz.
Geeignet für 1 Gbit/s und 10 Gbit/s Ethernet (10GBASE-T) über kurze Strecken.
Cat6a (Cat6 Augmented): Übertragungsgeschwindigkeit: Bis zu 500 MHz.
Unterstützt 10 Gbit/s Ethernet über längere Entfernungen als Cat6.
Cat7: Übertragungsgeschwindigkeit: Bis zu 600 MHz.
Entwickelt, um 10 Gbit/s und 40 Gbit/s Ethernet zu unterstützen. Geschirmt für verbesserte Leistung und Schutz gegen Störungen.
Cat8: Übertragungsgeschwindigkeit: Bis zu 2000 MHz.
Unterstützt 25 Gbit/s und 40 Gbit/s Ethernet über kurze Entfernungen.
Fiber-Optic-Kabel:
Anwendung: Hochgeschwindigkeitsdatenübertragung über große Entfernungen.
Typen: Single-Mode-Faser, Multi-Mode-Faser.
)";
    }

    void showkabel2() 
    {
      cout <<  R"(
Netzkabel:
Anwendung: Übertragung von Strom zwischen Netzsteckdose und Geräten.
Typen: Schuko, C13/C14, C5/C6, C7/C8.
Stromkabel:
    versorgen Komponenten mit Strom.
    Molex-Stecker:
    Funktion: Bietet Stromversorgung für ältere Komponenten 
    wie Lüfter oder einige Laufwerke.
)";
    }

    void showkabel3() 
    {
       cout << R"(
Audio- und Videoverbindungen:
HDMI-Kabel:
Anwendung: Übertragung von Audio- und Videosignalen zwischen Geräten.
Typen: HDMI 1.4, HDMI 2.0, HDMI 2.1.
DisplayPort-Kabel:
Anwendung: Hochauflösende Video- und Audioübertragung.
Typen: DisplayPort 1.2, DisplayPort 1.4.
Audio-Kabel:
Anwendung: Übertragung von Audiosignalen zwischen Geräten.
Typen: 3,5-mm-Klinkenstecker, 6,35-mm-Klinkenstecker.
)";
    }

    void showkabel4() 
    {
     cout <<   R"(
Speicher- und Datenverbindungen:
USB-Kabel:
Anwendung: Datenübertragung zwischen Computern und Peripheriegeräten.
USB 2.0: Übertragungsgeschwindigkeit: Bis zu 480 Mbit/s.
Standard für viele Jahre. Verbindung von Peripheriegeräten, externen Festplatten, Kameras usw.
USB 3.0 (auch als USB 3.1 Gen 1 bekannt): Übertragungsgeschwindigkeit: Bis zu 5 Gbit/s.
Schnellere Datenübertragung für externe Festplatten, SSDs und andere datenintensive Anwendungen.
USB 3.1 Gen 2: Übertragungsgeschwindigkeit: Bis zu 10 Gbit/s.
Noch schnellere Datenübertragung. Verwendet denselben physikalischen Stecker wie USB 3.0.
USB 3.2: Übertragungsgeschwindigkeit: Bis zu 20 Gbit/s 
Erhöhte Bandbreite für schnellere Datenübertragung, insbesondere bei USB-C-Verbindungen.
USB 4: Übertragungsgeschwindigkeit: Bis zu 40 Gbit/s.
Neuester Standard, der Funktionen von Thunderbolt 3 übernimmt. Verwendet den USB-C-Stecker.
USB-C: Merkmale: Kleinere, reversibel einsteckbare Steckverbindung.
Universeller Steckertyp, unterstützt USB 2.0, USB 3.0, USB 3.1, USB 3.2 und USB4.
SATA-Kabel:
Anwendung: Verbindung von Festplatten und optischen Laufwerken.
Typen: SATA I Bis zu 1,5 Gbit/s , SATA II Bis zu 3 Gbit/s , SATA III Bis zu 6 Gbit/s
Thunderbolt-Kabel:
Anwendung: Hochgeschwindigkeitsdatenübertragung und Displayverbindung.
Typen: Thunderbolt 2 Mini DisplayPort-Stecker, Thunderbolt 3  USB Type-C-Stecker
)";
    }

    void showkabel5() 
    {
      cout <<  R"(
Verbindung von Peripheriegeräten:
VGA-Kabel:
Anwendung: Übertragung von Video zwischen Computern und Monitoren (veraltet).
DVI-Kabel:
Anwendung: Übertragung von digitalen Videosignalen zwischen Computern und Monitoren.
PS/2-Kabel:
Anwendung: Verbindung von Tastaturen und Mäusen mit älteren Computern.
)";
    }

    void showkabel6()
    {
        cout << R"(
14  Frontpanel-Kabel:

    Funktion: Verbindet die Tasten, LEDs und Audioanschlüsse an der Vorderseite des Gehäuses mit dem Motherboard.

    Spezifikationen:
    - Header-Typen: Die Art der Anschlüsse am Motherboard, z.B. USB-Header, Audio-Header.
)";

    }

    void showkabeli()
    {
        cout << R"(   
Es gibt eine Vielzahl von Kabeln, die in der Computer- und Netzwerktechnologie verwendet werden, 
und sie dienen verschiedenen Zwecken. Hier ist eine Liste der häufig verwendeten Kabel, 
unterteilt nach verschiedenen Anwendungsbereichen:
)";
        int choice;
        while (true)
        {
            cout << "1. Netzwerkverkabelung" << endl;
            cout << "2. Stromversorgung" << endl;
            cout << "3. Audio- und Videoverbindungen" << endl;
            cout << "4. Speicher- und Datenverbindungen" << endl;
            cout << "5. Verbindung von Peripheriegeräten" << endl;
            cout << "6. Frontpanel Kabel" << endl;
            cout << "0. Zurück zum Hauptmenü" << endl;
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
                clearScreen();
                showkabel1();
                break;
            case 2:
                clearScreen();
                showkabel2();
                break;
            case 3:
                clearScreen();
                showkabel3();
                break;
            case 4:
                clearScreen();
                showkabel4();
                break;
            case 5:
                clearScreen();
                showkabel5();
                break;
            case 6:
                clearScreen();
                showkabel6();
                break;
            case 0:
                return;
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showhwinfo1()
    {
        cout << R"(
1  Zentrale Verarbeitungseinheit (CPU):

   Funktion: Führt Anweisungen aus und ist das "Gehirn" des Computers.

   Spezifikationen:
   - Anzahl der Kerne: Die CPU kann einen oder mehrere Prozessorkerne haben, 
                      die gleichzeitig Aufgaben verarbeiten können.
   - Taktfrequenz: Die Geschwindigkeit, mit der die CPU Anweisungen ausführt, 
                   gemessen in Hertz (Hz) oder Gigahertz (GHz).
   - Cache: Schneller Speicher, der für den schnellen Zugriff auf häufig 
            verwendete Daten verwendet wird.
   - Architektur: Die Designphilosophie der CPU, z. B. x86, ARM, oder AMD64.
   - Hyper-Threading: Eine Technologie, die die Anzahl der logischen Prozessoren erhöht 
                     und die parallele Verarbeitung verbessert.
)";

    }

    void showhwinfo2()
    {
        cout << R"(
2  Arbeitsspeicher (RAM):

   Funktion: Speichert temporäre Daten und ermöglicht schnellen Zugriff für laufende Programme.

   Spezifikationen:
   - Kapazität: Die Menge an Daten, die der RAM speichern kann, gemessen in Gigabyte (GB) oder Terabyte (TB).
   - Geschwindigkeit: Die Rate, mit der der RAM Daten lesen oder schreiben kann, gemessen in Megahertz (MHz) oder 
                      Gigahertz (GHz).
   - Typ: Es gibt verschiedene Arten von RAM wie DDR3, DDR4, DDR5 mit unterschiedlichen Geschwindigkeiten und 
          Energieeffizienz.
   - Latenz: Die Verzögerung zwischen der Anforderung und der Ausführung einer Datenoperation im RAM.
   - Dual Channel / Quad Channel: Technologien, die die Datenübertragungsrate zwischen RAM und CPU erhöhen können.
)";

    }

    void showhwinfo3()
    {
        cout << R"(
3  Netzteil:

   Funktion: Versorgt den Computer mit elektrischer Energie.

   Spezifikationen:
   - Leistung: Gemessen in Watt (W), gibt die maximale Energiemenge an, die das Netzteil liefern kann.
   - Effizienz: Der Wirkungsgrad des Netzteils, der angibt, wie gut es Energie in nutzbare Leistung umwandelt.
   - Anschlüsse: Verschiedene Steckertypen für die Stromversorgung von Komponenten wie CPU, GPU, Festplatten, usw.
   - Modularität: Ein modulares Netzteil ermöglicht es, nur die benötigten Kabel anzuschließen, was die Kabelführung 
                  und Luftzirkulation verbessern kann.
)";

    }

    void showhwinfo4()
    {
        cout << R"(
4  Festplatte oder Solid State Drive (HDD/SSD):

   Funktion: Speichert dauerhafte Daten wie das Betriebssystem, Anwendungen und Dateien.

   Spezifikationen:
   - Typ: HDDs bieten mehr Speicherplatz zu niedrigeren Kosten, SSDs sind schneller und zuverlässiger, 
          oft mit geringerer Kapazität.
   - Kapazität: Die Menge an Speicherplatz, gemessen in Gigabyte (GB) oder Terabyte (TB).
   - Schnittstelle: Die Verbindung zum Motherboard, z.B. SATA oder NVMe für SSDs.
   - RPM (Umdrehungen pro Minute): Die Geschwindigkeit, mit der sich die Platten in einer HDD drehen.
   - MTBF (Mean Time Between Failures): Die durchschnittliche Zeit zwischen Ausfällen.
)";

    }

    void showhwinfo5()
    {
        cout << R"(
5  Grafikkarte (GPU):

   Funktion: Verarbeitet grafische Daten und ist verantwortlich für die Anzeige von Bildern auf dem Bildschirm.

   Spezifikationen:
   - Grafikchip: Der Hauptprozessor der Grafikkarte.
   - VRAM (Video Random Access Memory): Speicher, der für die Verarbeitung von Grafikdaten verwendet wird.
   - CUDA-Kerne (bei NVIDIA GPUs): Parallele Verarbeitungseinheiten für allgemeine Berechnungen.
   - DirectX / OpenGL / Vulkan-Unterstützung: API-Unterstützung für Grafikanwendungen und Spiele.
)";

    }

	void showmainboard1()
	{
		cout << R"(
CPU-Sockel:

Der CPU-Sockel ist der physische Steckplatz auf dem Motherboard, in den die Zentrale Verarbeitungseinheit (CPU) eingesteckt wird.
Der Sockel stellt nicht nur die mechanische Verbindung zur Verfügung, sondern auch elektrische Pins, die die CPU mit dem Rest des Systems verbinden.
Es ermöglicht den Datenaustausch zwischen der CPU und anderen Komponenten auf dem Motherboard.
)";
	}

	void showmainboard2()
	{
		cout << R"(
RAM-Steckplätze:

Die RAM-Steckplätze sind die Anschlüsse, in die die Arbeitsspeichermodule (RAM) eingesteckt werden.
Sie ermöglichen es dem RAM, temporäre Daten schnell zu speichern und darauf zuzugreifen, was die Leistung des Systems bei laufenden Programmen verbessert.
Die Anzahl und der Typ der RAM-Steckplätze variieren je nach Motherboard und beeinflussen die maximale unterstützte RAM-Kapazität und Geschwindigkeit.
)";
	}

	void showmainboard3()
	{
		cout << R"(
PCIe-Steckplätze:

PCIe (Peripheral Component Interconnect Express) -Steckplätze sind für die Verbindung von Erweiterungskarten wie Grafikkarten, SSDs, Soundkarten und Netzwerkkarten verantwortlich.
Jeder PCIe-Steckplatz bietet hohe Datenübertragungsraten und ermöglicht die Kommunikation zwischen der Hauptplatine und den Erweiterungskarten.
Die Anzahl und Art der PCIe-Steckplätze variieren je nach Motherboard-Modell.
)";
	}

	void showmainboard4()
	{
		cout << R"(
Anschlüsse:

Das Motherboard verfügt über verschiedene Anschlüsse, darunter USB, HDMI, Audioanschlüsse, LAN-Ports und weitere.
USB-Anschlüsse ermöglichen den Anschluss von Peripheriegeräten wie Tastaturen, Mäusen und Druckern.
HDMI-Anschlüsse dienen zur Verbindung mit Bildschirmen und anderen Anzeigegeräten.
Audioanschlüsse unterstützen den Anschluss von Lautsprechern, Kopfhörern und Mikrofonen.
LAN-Ports ermöglichen die Verbindung mit einem Netzwerk für Internetzugang oder lokale Netzwerkkommunikation.
)";
	}

	void showmainboard5()
	{
		cout << R"(
BIOS/UEFI:

Das Basic Input/Output System (BIOS) oder das Unified Extensible Firmware Interface (UEFI) ist auf dem Motherboard eingebettet und ermöglicht grundlegende Systeminitialisierung und -konfiguration.
Es handelt sich um eine Firmware, die vor dem Start des Betriebssystems ausgeführt wird und grundlegende Einstellungen wie Bootreihenfolge und Hardwarekonfiguration speichert.
)";
	}

	void showmainboard6()
	{
		cout << R"(
Chipsatz:

Der Chipsatz ist ein entscheidender Bestandteil des Motherboards, der die Kommunikation zwischen CPU, RAM, Erweiterungskarten und anderen Komponenten koordiniert.
Er bietet auch Funktionen wie USB-Controller, SATA-Controller und weitere Schnittstellen.
)";
	}

	void showmainboard7()
	{
		cout << R"(
Stromversorgung:

Das Motherboard verfügt über Anschlüsse für die Stromversorgung, einschließlich eines Hauptstromanschlusses (24-Pin ATX) und eines zusätzlichen CPU-Stromanschlusses (4-Pin oder 8-Pin EPS).
Diese liefern die benötigte Energie für den Betrieb der Komponenten.
)";
	}

    void showhwinfo6()
    {
        cout << R"(
6  Motherboard (Hauptplatine):

   Funktion: Verbindet alle Hardwarekomponenten miteinander und ermöglicht die Kommunikation zwischen ihnen.

)";
        int choice;
        while (true)
        {
            cout << "1. CPU Sockel" << endl;
            cout << "2. RAM Steckplatz" << endl;
            cout << "3. PCIe Steckplatz" << endl;
            cout << "4. Anschlüsse" << endl;
            cout << "5. BIOS/UEFI" << endl;
            cout << "6. Chipsatz" << endl;
            cout << "7. Stromversorgung" << endl;
            cout << "0. Zurück zum Hauptmenü" << endl;
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
                clearScreen();
                showmainboard1();
                break;
            case 2:
                clearScreen();
                showmainboard2();
                break;
            case 3:
                clearScreen();
                showmainboard3();
                break;
            case 4:
                clearScreen();
                showmainboard4();
                break;
            case 5:
                clearScreen();
                showmainboard5();
                break;
            case 6:
                clearScreen();
                showmainboard6();
                break;
            case 7:
                clearScreen();
                showmainboard7();
                break;
            case 0:
                return;
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showhwinfo7()
    {
        cout << R"(
7  Kühlsystem:

   Funktion: Hält die Temperatur der CPU und GPU auf einem sicheren Niveau, um Überhitzung zu verhindern.

   Spezifikationen:
   - Lüfter / Kühlkörper: Mechanismen zur Wärmeableitung von CPU und GPU.
   - Kühlmethoden: Luftkühlung oder Wasserkühlung.
   - Lüftergeschwindigkeit: Die Umdrehungen pro Minute des Lüfters.
   - Geräuschpegel: Die Lautstärke des Kühlsystems während des Betriebs.
)";

    }

    void showhwinfo8()
    {
        cout << R"(
8  Soundkarte:

   Funktion: Verarbeitet Audioinhalte und ermöglicht die Wiedergabe von Sound.

   Spezifikationen:
   - Audiocodec: Der Chip, der für die Verarbeitung von Audio verantwortlich ist.
   - Kanäle: Die Anzahl der Audioausgangs- und -eingangskanäle, z.B. 2.1, 5.1, 7.1.
   - Abtastrate: Die Anzahl der Samples pro Sekunde, gemessen in Hertz (Hz).
)";

    }

    void showhwinfo9()
    {
        cout << R"(
9  Laufwerke (optisch):

   Funktion: Lesen und Schreiben von CDs, DVDs oder Blu-ray-Discs.

   Spezifikationen:
   - Unterstützte Formate: Welche Arten von optischen Medien das Laufwerk lesen und schreiben kann.
   - Lesegeschwindigkeit: Die Geschwindigkeit, mit der das Laufwerk Daten von der Disc liest.
   - Schreibgeschwindigkeit: Die Geschwindigkeit, mit der das Laufwerk Daten auf eine leere Disc schreibt.
)";

    }

    void showhwinfo10()
    {
        cout << R"(
10  Gehäuse:

    Funktion: Bietet Schutz für die internen Komponenten und 
    beinhaltet Anschlüsse für externe Geräte.

    Spezifikationen:
    - Formfaktor: Die Größe und Bauform des Gehäuses, z.B. Tower, Mini-Tower, Desktop.
    - Erweiterungsschächte: Platz für zusätzliche Komponenten wie Festplatten oder SSDs.
    - Frontanschlüsse: USB-Ports, Audioanschlüsse, Power-Taste, usw.
)";

    }

    void showhwinfo12()
    {
        cout << R"(
15  BIOS-Batterie:

    Funktion: Versorgt das BIOS (Basic Input/Output System) mit Strom, 
    um grundlegende Einstellungen zu speichern.

    Spezifikationen:
    - Batterietyp: 3V CR-2032 Knopfzelle
    - Lebensdauer: Die geschätzte Lebensdauer der Batterie: ca. 3-5 Jahre
)";

    }

    void showhwinfo()
    {
        cout << R"(   
Computerhardware / alle physischen Teile oder Komponenten, die zu einem Computersystem gehören:
)";
        int choice;
        while (true)
        {
            cout << "1. CPU" << endl;
            cout << "2. Arbeitsspeicher" << endl;
            cout << "3. Netzteil" << endl;
            cout << "4. Festplatten" << endl;
            cout << "5. Grafikkarte" << endl;
            cout << "6. Mainboard" << endl;
            cout << "7. Kühlsystem" << endl;
			cout << "8. Soundkarte" << endl;
			cout << "9. Optische Laufwerke" << endl;
			cout << "10. Gehäuse" << endl;
			cout << "11. Kabel" << endl;
			cout << "12. BIOS Batterie" << endl;
            cout << "0. Zurück zum Hauptmenü" << endl;
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
                clearScreen();
                showhwinfo1();
                break;
            case 2:
                clearScreen();
                showhwinfo2();
                break;
            case 3:
                clearScreen();
                showhwinfo3();
                break;
            case 4:
                clearScreen();
                showhwinfo4();
                break;
            case 5:
                clearScreen();
                showhwinfo5();
                break;
            case 6:
                clearScreen();
                showhwinfo6();
                break;
            case 7:
                clearScreen();
                showhwinfo7();
                break;
			case 8:
				clearScreen();
				showhwinfo8();
				break;
			case 9:
				clearScreen();
				showhwinfo9();
				break;
			case 10:
				clearScreen();
				showhwinfo10();
				break;
			case 11:
				clearScreen();
				showkabeli();
				break;
			case 12:
				clearScreen();
				showhwinfo12();
				break;
            case 0:
                return;
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showad1() {
        cout << R"(
Verzeichnisdienst:

AD ist ein hierarchisches Verzeichnisdienstsystem, das Informationen über Objekte im Netzwerk speichert. 
Diese Objekte können Benutzer, Gruppen, Computer, Drucker, Anwendungen und andere Ressourcen sein.
Die Informationen werden in einer Baumstruktur organisiert, die als "Verzeichnisbaum" oder 
"Domänenbaum" bezeichnet wird. Die Grundstruktur ist das "Verzeichnis", 
das wiederum in "Domänen" unterteilt ist.
)";
    }
    void showad2() {
        cout << R"(
Domänen:

Eine Domäne ist eine logische Organisationseinheit in einem AD-Netzwerk. 
Sie enthält Benutzer, Gruppen und Computerobjekte, die zentral verwaltet werden können.
Jede Domäne hat eine eindeutige Bezeichnung, die als Domänenname bezeichnet wird. 
Domänen können auch hierarchisch organisiert werden.
)";
    }

    void showad3() {
        cout << R"(
Domänencontroller:

Ein Domänencontroller (DC) ist ein Server, der die AD-Datenbank enthält und 
Authentifizierungsanfragen sowie Anfragen zum Zugriff auf Ressourcen verarbeitet.
Es gibt mindestens einen primären Domänencontroller (PDC) pro Domäne, 
aber zusätzliche Domänencontroller können vorhanden sein, um die Last zu verteilen 
und die Ausfallsicherheit zu verbessern.
)";
    }

    void showad4() {
        cout << R"(
Active Directory-Datenbank:

Die AD-Datenbank speichert Informationen über Objekte im Netzwerk. Dies umfasst 
Attribute wie Benutzernamen, Passwörter, Gruppenmitgliedschaften und mehr.
Die Datenbank wird repliziert, um sicherzustellen, dass Änderungen auf allen 
Domänencontrollern in einer Domäne synchronisiert werden.
)";
    }

    void showad5() {
        cout << R"(
Organizational Units (OU):

OUs sind Container innerhalb von Domänen, die es Administratoren ermöglichen, 
Objekte zu organisieren und zu verwalten. Sie bieten eine flexible Möglichkeit, 
Gruppenrichtlinien und Berechtigungen auf bestimmte Gruppen von Objekten anzuwenden.
)";
    }

    void showad6() {
        cout << R"(
Gruppenrichtlinien:

Gruppenrichtlinien ermöglichen es Administratoren, Einstellungen auf Benutzer- und Computerebene
zu konfigurieren. Dies reicht von Sicherheitseinstellungen bis hin zu Desktop-Hintergrundbildern.
)";
    }

    void showad7() {
        cout << R"(
Sicherheit:

Active Directory implementiert Sicherheitsmechanismen, um den Zugriff auf Ressourcen zu steuern. 
Dies erfolgt durch die Vergabe von Berechtigungen und die Anwendung von Sicherheitsrichtlinien.
)";
    }

    void showad8() {
        cout << R"(
DNS-Integration:

Active Directory ist stark mit dem Domain Name System (DNS) integriert. 
DNS wird verwendet, um die Namen von Netzwerkressourcen in IP-Adressen aufzulösen.
)";
    }

    void showad()
    {
        cout << R"(   
 Active Directory (AD) ist ein von Microsoft entwickelter Verzeichnisdienst, der in Windows-basierten 
Netzwerken eingesetzt wird. Es bietet eine zentrale Datenbank und einen Satz von Diensten, die es 
Netzwerkadministratoren ermöglichen, Ressourcen wie Computer, Benutzer, Drucker und andere 
Netzwerkobjekte zu organisieren, zu verwalten und zu sichern. 
Die Verwendung von Active Directory erleichtert die Verwaltung von Netzwerkressourcen, 
erhöht die Sicherheit und ermöglicht eine effiziente Organisation von Benutzern und Ressourcen 
in Unternehmen. Es ist ein zentraler Bestandteil der Windows-Netzwerkumgebung und spielt eine 
Schlüsselrolle bei der Authentifizierung und Autorisierung von Benutzern.
Hier sind die wichtigsten Komponenten und Funktionen von Active Directory:
)";
        int choice;
        while (true)
        {
            cout << "1. Verzeichnisdienst" << endl;
            cout << "2. Domain" << endl;
            cout << "3. Domaincontroller" << endl;
            cout << "4. Datenbank" << endl;
            cout << "5. Organisation Units (OU)" << endl;
            cout << "6. Gruppenrichtlinien" << endl;
            cout << "7. Sicherheit" << endl;
            cout << "8. DNS Integration" << endl;
            cout << "0. Zurück zum Hauptmenü" << endl;
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
                clearScreen();
                showad1();
                break;
            case 2:
                clearScreen();
                showad2();
                break;
            case 3:
                clearScreen();
                showad3();
                break;
            case 4:
                clearScreen();
                showad4();
                break;
            case 5:
                clearScreen();
                showad5();
                break;
            case 6:
                clearScreen();
                showad6();
                break;
            case 7:
                clearScreen();
                showad7();
                break;
            case 8:
                clearScreen();
                showad8();
                break;
            case 0:
                return;
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showusv1() {
     cout <<   R"(
Batteriesicherung: Die USV verfügt über eine interne Batterie, die bei 
einem Stromausfall aktiviert wird. Diese Batterie versorgt die angeschlossenen 
Geräte mit Strom, bis die Hauptstromversorgung wiederhergestellt ist.
)";
    }

    void showusv2() {
     cout <<   R"(
Automatische Spannungsregelung (AVR): Viele USV-Modelle verfügen über AVR, 
um Schwankungen in der Netzspannung auszugleichen und eine stabile Stromversorgung sicherzustellen.
)";
    }

    void showusv3() {
     cout <<   R"(
Online-, Offline- und Line-Interactive-Modelle: USV-Geräte gibt es in verschiedenen Konfigurationen. 
Online-USV-Geräte bieten die höchste Schutzniveau, da sie die angeschlossenen Geräte kontinuierlich 
über die Batterie versorgen. Offline- und Line-Interactive-Modelle schalten die Batterie nur bei 
Bedarf ein.Online-, Offline- und Line-Interactive-Modelle: USV-Geräte gibt es in verschiedenen 
Konfigurationen. Online-USV-Geräte bieten die höchste Schutzniveau, da sie die angeschlossenen 
Geräte kontinuierlich über die Batterie versorgen. Offline- und Line-Interactive-Modelle 
schalten die Batterie nur bei Bedarf ein.
)";
    }

    void showusv4() {
    cout <<    R"(
Überspannungsschutz: USV-Geräte bieten oft Schutz vor Überspannungen, 
die durch Blitzeinschläge oder andere elektrische Störungen verursacht werden können.
)";
    }

    void showusv5() {
     cout <<   R"(
Schnittstellen: Viele moderne USV-Geräte verfügen über Schnittstellen wie USB oder Netzwerkanschlüsse, 
um mit Computern oder Netzwerken zu kommunizieren. Dies ermöglicht es der USV, den Status zu überwachen 
und automatisch herunterzufahren, wenn die Batterieleistung kritisch wird.
)";
    }

    void showusv6() {
        cout << R"(
Kapazität und Laufzeit:

Die Kapazität einer USV wird in Voltampere (VA) oder Watt (W) gemessen und gibt an, 
wie viel Last sie unterstützen kann. Die Laufzeit der USV hängt von der Kapazität und 
der angeschlossenen Last ab. Größere Kapazitäten und Batterien ermöglichen längere Laufzeiten.
)";
    }

    void showusv()
    {
        cout << R"(   
 Eine unterbrechungsfreie Stromversorgung (USV) ist eine elektronische Vorrichtung, 
die dazu dient, kritische elektronische Geräte vor Stromausfällen, 
Spannungsschwankungen und anderen Stromproblemen zu schützen. Die Hauptfunktion einer USV besteht darin, 
eine zeitweise Energiequelle bereitzustellen, wenn die Hauptstromversorgung ausfällt. 
Dies ermöglicht es den angeschlossenen Geräten, nahtlos und ohne Unterbrechung weiterzuarbeiten.
)";
        int choice;
        while (true)
        {
            cout << "1. Batteriesicherung" << endl;
            cout << "2. Automatische Spannungsregelung (AVR)" << endl;
            cout << "3. Online-, Offline- Standby- Eco- Modell" << endl;
            cout << "4. Überspannungsschutz" << endl;
            cout << "5. Schnittstellen" << endl;
            cout << "6. Kapazität und Laufzeit" << endl;
            cout << "0. Zurück zum Hauptmenü" << endl;
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
                clearScreen();
                showusv1();
                break;
            case 2:
                clearScreen();
                showusv2();
                break;
            case 3:
                clearScreen();
                showusv3();
                break;
            case 4:
                clearScreen();
                showusv4();
                break;
            case 5:
                clearScreen();
                showusv5();
                break;
            case 6:
                clearScreen();
                showusv6();
                break;
            case 0:
                return;
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showpcwikitwo()
    {
        cout << R"(   
Zweite Seite:
)";
        int choice;
        while (true)
        {
            cout << R"(


                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |------------------------                               |  |     
                                                  |  | ' 1.                   |                              |  |    
                                                  |  | ' 2.                   |                              |  |     
                                                  |  | ' 3.                   |                              |  |     
                                                  |  | ' 4. USV               |                              |  |     
                                                  |  | ' 5.                   |                              |  |    
                                                  |  | ' 6.                   |                              |  |     
                                                  |  | ' 7. Active Directory  |                              |  |     
                                                  |  | ' 8.                   |                              |  |     
                                                  |  | ' 9.                   |                              |  |     
                                                  |  | '10.                   |                              |  |     
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
                animateTransition();
                clearScreen();
              
                break;
            case 3:
                animateTransition();
                clearScreen();
               
                break;
            case 4:
                animateTransition();
                clearScreen();
                showusv();
                break;
            case 5:
                animateTransition();
                clearScreen();
             
                break;
            case 6:
                animateTransition();
                clearScreen();
              
                break;
            case 7:
                animateTransition();
                clearScreen();
                showad();
                break;
            case 8:
                animateTransition();
                clearScreen();
             
                break;
            case 9:
                animateTransition();
                clearScreen();
             
                break;
            case 10:
                animateTransition();
                clearScreen();
               
                break;
            case 0:
                return;
            default:
                cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    int pcwikimain()
    {
        bool running = true;
        int choice;
        while (running)
        {
			system("cls");
			clearScreen();
            cout << "Wählen Sie eine Option: ";
          cout <<  R"(


                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |------------------------                               |  |     
                                                  |  | ' 1.  Logic Gates      |                              |  |    
                                                  |  | ' 2.                   |                              |  |     
                                                  |  | ' 3.  PC Komponenten   |                              |  |     
                                                  |  | ' 4.                   |                              |  |     
                                                  |  | ' 5.                   |                              |  |    
                                                  |  | ' 6. RAID Systeme      |                              |  |     
                                                  |  | ' 7. OSI Modell        |                              |  |     
                                                  |  | ' 8. Netzwerkprotokoll |                              |  |     
                                                  |  | ' 9. Links             |                              |  |     
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
                this_thread::sleep_for(chrono::seconds(2)); 
                 continue;
             }
             switch (choice)
            {
            case 1:
                animateTransition();
				clearScreen();
                showlogicgate();
                break;
            case 2:
                animateTransition();
				clearScreen();

                break;
            case 3:
				animateTransition();
				clearScreen();
                showhwinfo();
                break;
            case 4:
				animateTransition();
				clearScreen();

                break;
			case 5:
				animateTransition();
				clearScreen();
           
				break;
			case 6:
				animateTransition();
				clearScreen();
				showraid();
				break;
			case 7:
				animateTransition();
				clearScreen();
                showosi();
				break;
			case 8:
				animateTransition();
				clearScreen();
                shownetworkp();
				break;
			case 9:
				animateTransition();
				clearScreen();
                infolinkmain();
				break;
            case 10:
                animateTransition();
                clearScreen();
                showpcwikitwo();
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