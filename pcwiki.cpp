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
Funktionsweise: Die Daten werden �ber mehrere Laufwerke gestreut, was zu schnellerem 
Datenzugriff f�hrt. Es gibt jedoch keine Redundanz, daher f�hrt der Ausfall eines Laufwerks zum Datenverlust.
)";
}

void showraidone() {
cout <<	R"(
RAID 1 (Mirroring):

Ziel: Datenredundanz f�r h�here Datensicherheit.
Funktionsweise: Alle Daten werden gleichzeitig auf zwei Festplatten gespiegelt. 
Wenn eine Festplatte ausf�llt, sind die Daten auf der anderen Festplatte weiterhin verf�gbar.
)";
}

void showraidfive() {
cout <<	R"(
RAID 5 (Block-Level Striping mit Parit�t):

Ziel: Kombination aus Leistung und Redundanz.
Funktionsweise: Daten werden auf mehreren Laufwerken gestreut, und Parit�tsinformationen werden f�r Redundanz verwendet. 
Wenn eine Festplatte ausf�llt, k�nnen die Daten durch Berechnung der Parit�t wiederhergestellt werden.
)";
}

void showraidsix() {
cout <<	R"(
RAID 6 (Block-Level Striping mit doppelter Parit�t):

Ziel: H�here Datensicherheit durch doppelte Parit�t.
Funktionsweise: �hnlich wie RAID 5, aber mit zus�tzlicher Parit�tsinformation. 
Es k�nnen zwei Festplatten ausfallen, ohne Datenverlust zu verursachen.
)";
}

void showraidten() {
cout <<	R"(
RAID 10 (RAID 1+0 oder Mirrored Stripes):

Ziel: Kombination aus RAID 1 und RAID 0 f�r Leistung und Redundanz.
Funktionsweise: Daten werden gespiegelt (RAID 1) und dann gestreut (RAID 0). 
Bietet hohe Leistung und Datensicherheit, erfordert jedoch mehr Festplatten.
)";
}

void showraidfifty() {
cout <<	R"(
RAID 50 (Combining RAID 5 and RAID 0):

Ziel: Kombination von RAID 5 f�r Redundanz und RAID 0 f�r Leistung.
Funktionsweise: Es werden mehrere RAID-5-Arrays kombiniert und �ber ein RAID-0-Array gestreut.
)";
}

void showraid()
{
    cout << R"(   
RAID steht f�r "Redundant Array of Independent Disks" und bezeichnet eine Technologie, 
bei der mehrere Festplatten zusammenarbeiten, um die Leistung, Zuverl�ssigkeit oder beides zu verbessern. 
Hier sind einige der g�ngigsten RAID-Level:
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
        cout << "0. Zur�ck zum Hauptmen�" << endl;
        cout << "W�hlen Sie eine Option: ";
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
            return; // Zur�ck zum Hauptmen�
        default:
            cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
um logische Operationen durchzuf�hren. Hier sind die grundlegenden logischen Gates:
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
            cout << "0. Zur�ck zum Hauptmen�" << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

	void showosi1()
	{
        cout << R"(
Schicht 1: Bit�bertragungsschicht (Physical Layer)
Die Bit�bertragungsschicht beschreibt die elektrische, mechanische und funktionale 
Schnittstelle zum �bertragungsmedium. Einfacher gesagt: Sie beinhaltet die Daten�bertragung 
der beteiligten physischen Ger�te wie Kabel und Schalter. 
)";
	}

	void showosi2()
	{
		cout << R"(
Schicht 2: Sicherungsschicht (Data Link Layer)
Die Sicherungsschicht erm�glicht eine zuverl�ssige und funktionierende Verbindung zwischen 
Endger�t und �bertragungsmedium. Sie sorgt f�r den Datentransfer zwischen zwei Ger�ten 
im selben Netzwerk. Dabei nimmt der data link layer Pakete vom network layer auf 
und zerlegt sie in kleinere Teile, den sogenannten Frames. 
)";
	}

	void showosi3()
	{
		cout << R"(
Schicht 3: Vermittlungsschicht (Network Layer)
Die Vermittlungsschicht reguliert den Datentransfer zwischen zwei verschiedenen Netzwerken. 
Im Falle der Kommunikation innerhalb eines Netzwerks f�llt diese Schicht weg. 
Auch hier teilen sich die Segmente auf dem Senderger�t von dem Transport Layer in Fragmente auf 
und f�gen diese Pakete auf dem Empf�ngerger�t wieder zusammen.
)";
	}

	void showosi4()
	{
		cout << R"(
Schicht 4: Transportschicht (Transport Layer)
Die Transportschicht ist f�r die End-to-End-Kommunikation zwischen zwei Ger�ten zust�ndig. 
Sie gilt also als Bindeglied zwischen den transportorientierten und anwendungsorientierten Schichten. 
Zur Daten�bertragung wird das Gesamtpaket in kleinere Bestandteile zerlegt. 
)";
	}

	void showosi5()
	{
		cout << R"(
Schicht 5: Kommunikationsschicht (Session Layer)
Die Kommunikationsschicht erm�glicht die Verbindungen zwischen den Endsystemen. 
Die Zeit zwischen dem �ffnen und Schlie�en der Kommunikation bezeichnest du dabei als Sitzung (Session).
Dar�ber hinaus wird durch die session layer sichergestellt, dass die Sitzung lange genug 
ge�ffnet bleibt, um alle auszutauschenden Daten zu �bertragen. Im Anschluss daran 
schlie�t sich die Sitzung, um Ressourcenverschwendung zu vermeiden.
)";
	}

	void showosi6()
	{
		cout << R"(
Schicht 6: Darstellungsschicht (Presentation Layer)
Die Darstellungsschicht bereitet die Daten so auf, dass sie dem Nutzer angezeigt werden k�nnen. 
In diesem Fall ist es �blich, dass zwei verschiedene Anwendungen die gleiche Kodierung verwenden.
Die Kommunikation mit einem Webserver �ber HTTPS (hypertext transfer protocol secure) 
ist verschl�sselt, weshalb die Daten erst entschl�sselt werden m�ssen. 
)";
	}

	void showosi7()
	{
		cout << R"(
Schicht 7: Anwendungsschicht (Application Layer)
Die Anwendungsschicht stellt Funktionen f�r Anwendungen bereit. 
Au�erdem erm�glicht sie die Verbindung zu den unteren Schichten. 
Auf dieser Ebene findet auch die Dateneingabe und -ausgabe statt. 
)";
	}

    void showosi()
    {
        cout << R"(   
OSI steht f�r Open-Systems-Interconnection und wurde von der ISO (International Organization for Standardization)
entwickelt. Das Modell erm�glicht die standardisierte Kommunikation zwischen verschiedenen Computersystemen
und besteht aus 7 Level:
)";
        int choice;
        while (true)
        {
            cout << "1. Bit�bertragungsschicht" << endl;
            cout << "2. Sicherungsschicht" << endl;
            cout << "3. Vermittlungsschicht" << endl;
            cout << "4. Transportschicht" << endl;
            cout << "5. Kommunikationsschicht" << endl;
            cout << "6. Darstellungsschicht" << endl;
			cout << "7. Anwendungsschicht" << endl;
            cout << "0. Zur�ck zum Hauptmen�" << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
Es besteht aus zwei Hauptprotokollen: TCP, das f�r die zuverl�ssige �bertragung 
von Daten verantwortlich ist, und IP, das die Adressierung 
und das Routing von Paketen im Netzwerk erm�glicht.
Anwendungsbereich: Es bildet das Grundger�st des Internets und wird f�r die 
meisten Internetanwendungen wie Webseitenzugriff, E-Mail, 
Datei�bertragungen und mehr verwendet.
)";
	}

	void shownetwork2()
	{
		cout << R"(
HTTP/HTTPS (Hypertext Transfer Protocol/Secure):

Beschreibung: HTTP ist ein Protokoll zur �bertragung von Hypertext �ber das Internet. 
HTTPS ist die sichere Variante von HTTP, die eine verschl�sselte Verbindung f�r zus�tzliche Sicherheit bietet.
Anwendungsbereich: HTTP wird f�r den Austausch von Informationen auf Websites verwendet. 
HTTPS wird speziell f�r sichere Transaktionen und den gesch�tzten Datenaustausch verwendet.
)";
	}

	void shownetwork3()
	{
		cout << R"(
FTP (File Transfer Protocol):

Beschreibung: FTP erm�glicht die �bertragung von Dateien zwischen einem Client und einem Server �ber ein Netzwerk.
Anwendungsbereich: Es wird oft f�r den Austausch von Dateien zwischen einem Benutzer 
und einem Server verwendet, beispielsweise beim Hochladen von Dateien auf eine Website.
)";
	}

	void shownetwork4()
	{
		cout << R"(
SMTP/POP/IMAP (Simple Mail Transfer Protocol/Post Office Protocol/Internet Message Access Protocol):

Beschreibung: SMTP wird verwendet, um E-Mails zu senden, w�hrend POP und IMAP dazu dienen, 
E-Mails auf einem Server abzurufen. POP l�dt E-Mails herunter und l�scht 
sie vom Server, w�hrend IMAP die E-Mails auf dem Server bel�sst.
Anwendungsbereich: Diese Protokolle werden f�r die �bertragung und den Abruf von E-Mails verwendet.
)";
	}

	void shownetwork5()
	{
		cout << R"(
DNS (Domain Name System):

Beschreibung: DNS �bersetzt menschenlesbare Domainnamen in IP-Adressen, 
um die Kommunikation im Internet zu erleichtern. 
Anwendungsbereich: Jedes Mal, wenn Sie eine Website besuchen, wird DNS verwendet, 
um den Domainnamen in die entsprechende IP-Adresse umzuwandeln.
)";
	}

	void shownetwork6()
	{
		cout << R"(
UDP (User Datagram Protocol):

Beschreibung: UDP ist ein einfaches, verbindungsloses Protokoll, das f�r die 
�bertragung von Daten ohne Sicherheits- oder Integrit�tspr�fungen verwendet wird.
Anwendungsbereich: Es wird f�r Anwendungen verwendet, bei denen geringe Latenz wichtiger
ist als die Zuverl�ssigkeit der Daten�bertragung, wie bei Videostreaming oder Online-Spielen.
)";
	}

	void shownetwork7()
	{
		cout << R"(
SSH (Secure Shell):

Beschreibung: SSH bietet eine sichere M�glichkeit, auf entfernte Systeme zuzugreifen 
und Befehle auszuf�hren. Es verschl�sselt die Kommunikation zwischen dem Client und dem Server.
Anwendungsbereich: SSH wird h�ufig f�r die Fernadministration von Servern und sichere Datei�bertragungen verwendet.
)";
	}

    void shownetworkp()
    {
        cout << R"(   
Ein Netzwerkprotokoll ist ein Kommunikationsprotokoll f�r den Austausch 
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
            cout << "0. Zur�ck zum Hauptmen�" << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
Anwendung: �bertragung von Netzwerksignalen.
Typen:
Cat5: �bertragungsgeschwindigkeit: Bis zu 100 MHz.
Cat5e (Cat5 Enhanced):
�bertragungsgeschwindigkeit: Bis zu 1 Gbit/s (1000BASE-T).
Verbesserte Version von Cat5, die Gigabit Ethernet unterst�tzt und weniger St�rungen aufweist.
Cat6: �bertragungsgeschwindigkeit: Bis zu 250 MHz.
Geeignet f�r 1 Gbit/s und 10 Gbit/s Ethernet (10GBASE-T) �ber kurze Strecken.
Cat6a (Cat6 Augmented): �bertragungsgeschwindigkeit: Bis zu 500 MHz.
Unterst�tzt 10 Gbit/s Ethernet �ber l�ngere Entfernungen als Cat6.
Cat7: �bertragungsgeschwindigkeit: Bis zu 600 MHz.
Entwickelt, um 10 Gbit/s und 40 Gbit/s Ethernet zu unterst�tzen. Geschirmt f�r verbesserte Leistung und Schutz gegen St�rungen.
Cat8: �bertragungsgeschwindigkeit: Bis zu 2000 MHz.
Unterst�tzt 25 Gbit/s und 40 Gbit/s Ethernet �ber kurze Entfernungen.
Fiber-Optic-Kabel:
Anwendung: Hochgeschwindigkeitsdaten�bertragung �ber gro�e Entfernungen.
Typen: Single-Mode-Faser, Multi-Mode-Faser.
)";
    }

    void showkabel2() 
    {
      cout <<  R"(
Netzkabel:
Anwendung: �bertragung von Strom zwischen Netzsteckdose und Ger�ten.
Typen: Schuko, C13/C14, C5/C6, C7/C8.
Stromkabel:
    versorgen Komponenten mit Strom.
    Molex-Stecker:
    Funktion: Bietet Stromversorgung f�r �ltere Komponenten 
    wie L�fter oder einige Laufwerke.
)";
    }

    void showkabel3() 
    {
       cout << R"(
Audio- und Videoverbindungen:
HDMI-Kabel:
Anwendung: �bertragung von Audio- und Videosignalen zwischen Ger�ten.
Typen: HDMI 1.4, HDMI 2.0, HDMI 2.1.
DisplayPort-Kabel:
Anwendung: Hochaufl�sende Video- und Audio�bertragung.
Typen: DisplayPort 1.2, DisplayPort 1.4.
Audio-Kabel:
Anwendung: �bertragung von Audiosignalen zwischen Ger�ten.
Typen: 3,5-mm-Klinkenstecker, 6,35-mm-Klinkenstecker.
)";
    }

    void showkabel4() 
    {
     cout <<   R"(
Speicher- und Datenverbindungen:
USB-Kabel:
Anwendung: Daten�bertragung zwischen Computern und Peripherieger�ten.
USB 2.0: �bertragungsgeschwindigkeit: Bis zu 480 Mbit/s.
Standard f�r viele Jahre. Verbindung von Peripherieger�ten, externen Festplatten, Kameras usw.
USB 3.0 (auch als USB 3.1 Gen 1 bekannt): �bertragungsgeschwindigkeit: Bis zu 5 Gbit/s.
Schnellere Daten�bertragung f�r externe Festplatten, SSDs und andere datenintensive Anwendungen.
USB 3.1 Gen 2: �bertragungsgeschwindigkeit: Bis zu 10 Gbit/s.
Noch schnellere Daten�bertragung. Verwendet denselben physikalischen Stecker wie USB 3.0.
USB 3.2: �bertragungsgeschwindigkeit: Bis zu 20 Gbit/s 
Erh�hte Bandbreite f�r schnellere Daten�bertragung, insbesondere bei USB-C-Verbindungen.
USB 4: �bertragungsgeschwindigkeit: Bis zu 40 Gbit/s.
Neuester Standard, der Funktionen von Thunderbolt 3 �bernimmt. Verwendet den USB-C-Stecker.
USB-C: Merkmale: Kleinere, reversibel einsteckbare Steckverbindung.
Universeller Steckertyp, unterst�tzt USB 2.0, USB 3.0, USB 3.1, USB 3.2 und USB4.
SATA-Kabel:
Anwendung: Verbindung von Festplatten und optischen Laufwerken.
Typen: SATA I Bis zu 1,5 Gbit/s , SATA II Bis zu 3 Gbit/s , SATA III Bis zu 6 Gbit/s
Thunderbolt-Kabel:
Anwendung: Hochgeschwindigkeitsdaten�bertragung und Displayverbindung.
Typen: Thunderbolt 2 Mini DisplayPort-Stecker, Thunderbolt 3  USB Type-C-Stecker
)";
    }

    void showkabel5() 
    {
      cout <<  R"(
Verbindung von Peripherieger�ten:
VGA-Kabel:
Anwendung: �bertragung von Video zwischen Computern und Monitoren (veraltet).
DVI-Kabel:
Anwendung: �bertragung von digitalen Videosignalen zwischen Computern und Monitoren.
PS/2-Kabel:
Anwendung: Verbindung von Tastaturen und M�usen mit �lteren Computern.
)";
    }

    void showkabel6()
    {
        cout << R"(
14  Frontpanel-Kabel:

    Funktion: Verbindet die Tasten, LEDs und Audioanschl�sse an der Vorderseite des Geh�uses mit dem Motherboard.

    Spezifikationen:
    - Header-Typen: Die Art der Anschl�sse am Motherboard, z.B. USB-Header, Audio-Header.
)";

    }

    void showkabeli()
    {
        cout << R"(   
Es gibt eine Vielzahl von Kabeln, die in der Computer- und Netzwerktechnologie verwendet werden, 
und sie dienen verschiedenen Zwecken. Hier ist eine Liste der h�ufig verwendeten Kabel, 
unterteilt nach verschiedenen Anwendungsbereichen:
)";
        int choice;
        while (true)
        {
            cout << "1. Netzwerkverkabelung" << endl;
            cout << "2. Stromversorgung" << endl;
            cout << "3. Audio- und Videoverbindungen" << endl;
            cout << "4. Speicher- und Datenverbindungen" << endl;
            cout << "5. Verbindung von Peripherieger�ten" << endl;
            cout << "6. Frontpanel Kabel" << endl;
            cout << "0. Zur�ck zum Hauptmen�" << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showhwinfo1()
    {
        cout << R"(
1  Zentrale Verarbeitungseinheit (CPU):

   Funktion: F�hrt Anweisungen aus und ist das "Gehirn" des Computers.

   Spezifikationen:
   - Anzahl der Kerne: Die CPU kann einen oder mehrere Prozessorkerne haben, 
                      die gleichzeitig Aufgaben verarbeiten k�nnen.
   - Taktfrequenz: Die Geschwindigkeit, mit der die CPU Anweisungen ausf�hrt, 
                   gemessen in Hertz (Hz) oder Gigahertz (GHz).
   - Cache: Schneller Speicher, der f�r den schnellen Zugriff auf h�ufig 
            verwendete Daten verwendet wird.
   - Architektur: Die Designphilosophie der CPU, z. B. x86, ARM, oder AMD64.
   - Hyper-Threading: Eine Technologie, die die Anzahl der logischen Prozessoren erh�ht 
                     und die parallele Verarbeitung verbessert.
)";

    }

    void showhwinfo2()
    {
        cout << R"(
2  Arbeitsspeicher (RAM):

   Funktion: Speichert tempor�re Daten und erm�glicht schnellen Zugriff f�r laufende Programme.

   Spezifikationen:
   - Kapazit�t: Die Menge an Daten, die der RAM speichern kann, gemessen in Gigabyte (GB) oder Terabyte (TB).
   - Geschwindigkeit: Die Rate, mit der der RAM Daten lesen oder schreiben kann, gemessen in Megahertz (MHz) oder 
                      Gigahertz (GHz).
   - Typ: Es gibt verschiedene Arten von RAM wie DDR3, DDR4, DDR5 mit unterschiedlichen Geschwindigkeiten und 
          Energieeffizienz.
   - Latenz: Die Verz�gerung zwischen der Anforderung und der Ausf�hrung einer Datenoperation im RAM.
   - Dual Channel / Quad Channel: Technologien, die die Daten�bertragungsrate zwischen RAM und CPU erh�hen k�nnen.
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
   - Anschl�sse: Verschiedene Steckertypen f�r die Stromversorgung von Komponenten wie CPU, GPU, Festplatten, usw.
   - Modularit�t: Ein modulares Netzteil erm�glicht es, nur die ben�tigten Kabel anzuschlie�en, was die Kabelf�hrung 
                  und Luftzirkulation verbessern kann.
)";

    }

    void showhwinfo4()
    {
        cout << R"(
4  Festplatte oder Solid State Drive (HDD/SSD):

   Funktion: Speichert dauerhafte Daten wie das Betriebssystem, Anwendungen und Dateien.

   Spezifikationen:
   - Typ: HDDs bieten mehr Speicherplatz zu niedrigeren Kosten, SSDs sind schneller und zuverl�ssiger, 
          oft mit geringerer Kapazit�t.
   - Kapazit�t: Die Menge an Speicherplatz, gemessen in Gigabyte (GB) oder Terabyte (TB).
   - Schnittstelle: Die Verbindung zum Motherboard, z.B. SATA oder NVMe f�r SSDs.
   - RPM (Umdrehungen pro Minute): Die Geschwindigkeit, mit der sich die Platten in einer HDD drehen.
   - MTBF (Mean Time Between Failures): Die durchschnittliche Zeit zwischen Ausf�llen.
)";

    }

    void showhwinfo5()
    {
        cout << R"(
5  Grafikkarte (GPU):

   Funktion: Verarbeitet grafische Daten und ist verantwortlich f�r die Anzeige von Bildern auf dem Bildschirm.

   Spezifikationen:
   - Grafikchip: Der Hauptprozessor der Grafikkarte.
   - VRAM (Video Random Access Memory): Speicher, der f�r die Verarbeitung von Grafikdaten verwendet wird.
   - CUDA-Kerne (bei NVIDIA GPUs): Parallele Verarbeitungseinheiten f�r allgemeine Berechnungen.
   - DirectX / OpenGL / Vulkan-Unterst�tzung: API-Unterst�tzung f�r Grafikanwendungen und Spiele.
)";

    }

	void showmainboard1()
	{
		cout << R"(
CPU-Sockel:

Der CPU-Sockel ist der physische Steckplatz auf dem Motherboard, in den die Zentrale Verarbeitungseinheit (CPU) eingesteckt wird.
Der Sockel stellt nicht nur die mechanische Verbindung zur Verf�gung, sondern auch elektrische Pins, die die CPU mit dem Rest des Systems verbinden.
Es erm�glicht den Datenaustausch zwischen der CPU und anderen Komponenten auf dem Motherboard.
)";
	}

	void showmainboard2()
	{
		cout << R"(
RAM-Steckpl�tze:

Die RAM-Steckpl�tze sind die Anschl�sse, in die die Arbeitsspeichermodule (RAM) eingesteckt werden.
Sie erm�glichen es dem RAM, tempor�re Daten schnell zu speichern und darauf zuzugreifen, was die Leistung des Systems bei laufenden Programmen verbessert.
Die Anzahl und der Typ der RAM-Steckpl�tze variieren je nach Motherboard und beeinflussen die maximale unterst�tzte RAM-Kapazit�t und Geschwindigkeit.
)";
	}

	void showmainboard3()
	{
		cout << R"(
PCIe-Steckpl�tze:

PCIe (Peripheral Component Interconnect Express) -Steckpl�tze sind f�r die Verbindung von Erweiterungskarten wie Grafikkarten, SSDs, Soundkarten und Netzwerkkarten verantwortlich.
Jeder PCIe-Steckplatz bietet hohe Daten�bertragungsraten und erm�glicht die Kommunikation zwischen der Hauptplatine und den Erweiterungskarten.
Die Anzahl und Art der PCIe-Steckpl�tze variieren je nach Motherboard-Modell.
)";
	}

	void showmainboard4()
	{
		cout << R"(
Anschl�sse:

Das Motherboard verf�gt �ber verschiedene Anschl�sse, darunter USB, HDMI, Audioanschl�sse, LAN-Ports und weitere.
USB-Anschl�sse erm�glichen den Anschluss von Peripherieger�ten wie Tastaturen, M�usen und Druckern.
HDMI-Anschl�sse dienen zur Verbindung mit Bildschirmen und anderen Anzeigeger�ten.
Audioanschl�sse unterst�tzen den Anschluss von Lautsprechern, Kopfh�rern und Mikrofonen.
LAN-Ports erm�glichen die Verbindung mit einem Netzwerk f�r Internetzugang oder lokale Netzwerkkommunikation.
)";
	}

	void showmainboard5()
	{
		cout << R"(
BIOS/UEFI:

Das Basic Input/Output System (BIOS) oder das Unified Extensible Firmware Interface (UEFI) ist auf dem Motherboard eingebettet und erm�glicht grundlegende Systeminitialisierung und -konfiguration.
Es handelt sich um eine Firmware, die vor dem Start des Betriebssystems ausgef�hrt wird und grundlegende Einstellungen wie Bootreihenfolge und Hardwarekonfiguration speichert.
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

Das Motherboard verf�gt �ber Anschl�sse f�r die Stromversorgung, einschlie�lich eines Hauptstromanschlusses (24-Pin ATX) und eines zus�tzlichen CPU-Stromanschlusses (4-Pin oder 8-Pin EPS).
Diese liefern die ben�tigte Energie f�r den Betrieb der Komponenten.
)";
	}

    void showhwinfo6()
    {
        cout << R"(
6  Motherboard (Hauptplatine):

   Funktion: Verbindet alle Hardwarekomponenten miteinander und erm�glicht die Kommunikation zwischen ihnen.

)";
        int choice;
        while (true)
        {
            cout << "1. CPU Sockel" << endl;
            cout << "2. RAM Steckplatz" << endl;
            cout << "3. PCIe Steckplatz" << endl;
            cout << "4. Anschl�sse" << endl;
            cout << "5. BIOS/UEFI" << endl;
            cout << "6. Chipsatz" << endl;
            cout << "7. Stromversorgung" << endl;
            cout << "0. Zur�ck zum Hauptmen�" << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showhwinfo7()
    {
        cout << R"(
7  K�hlsystem:

   Funktion: H�lt die Temperatur der CPU und GPU auf einem sicheren Niveau, um �berhitzung zu verhindern.

   Spezifikationen:
   - L�fter / K�hlk�rper: Mechanismen zur W�rmeableitung von CPU und GPU.
   - K�hlmethoden: Luftk�hlung oder Wasserk�hlung.
   - L�ftergeschwindigkeit: Die Umdrehungen pro Minute des L�fters.
   - Ger�uschpegel: Die Lautst�rke des K�hlsystems w�hrend des Betriebs.
)";

    }

    void showhwinfo8()
    {
        cout << R"(
8  Soundkarte:

   Funktion: Verarbeitet Audioinhalte und erm�glicht die Wiedergabe von Sound.

   Spezifikationen:
   - Audiocodec: Der Chip, der f�r die Verarbeitung von Audio verantwortlich ist.
   - Kan�le: Die Anzahl der Audioausgangs- und -eingangskan�le, z.B. 2.1, 5.1, 7.1.
   - Abtastrate: Die Anzahl der Samples pro Sekunde, gemessen in Hertz (Hz).
)";

    }

    void showhwinfo9()
    {
        cout << R"(
9  Laufwerke (optisch):

   Funktion: Lesen und Schreiben von CDs, DVDs oder Blu-ray-Discs.

   Spezifikationen:
   - Unterst�tzte Formate: Welche Arten von optischen Medien das Laufwerk lesen und schreiben kann.
   - Lesegeschwindigkeit: Die Geschwindigkeit, mit der das Laufwerk Daten von der Disc liest.
   - Schreibgeschwindigkeit: Die Geschwindigkeit, mit der das Laufwerk Daten auf eine leere Disc schreibt.
)";

    }

    void showhwinfo10()
    {
        cout << R"(
10  Geh�use:

    Funktion: Bietet Schutz f�r die internen Komponenten und 
    beinhaltet Anschl�sse f�r externe Ger�te.

    Spezifikationen:
    - Formfaktor: Die Gr��e und Bauform des Geh�uses, z.B. Tower, Mini-Tower, Desktop.
    - Erweiterungssch�chte: Platz f�r zus�tzliche Komponenten wie Festplatten oder SSDs.
    - Frontanschl�sse: USB-Ports, Audioanschl�sse, Power-Taste, usw.
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
    - Lebensdauer: Die gesch�tzte Lebensdauer der Batterie: ca. 3-5 Jahre
)";

    }

    void showhwinfo()
    {
        cout << R"(   
Computerhardware / alle physischen Teile oder Komponenten, die zu einem Computersystem geh�ren:
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
            cout << "7. K�hlsystem" << endl;
			cout << "8. Soundkarte" << endl;
			cout << "9. Optische Laufwerke" << endl;
			cout << "10. Geh�use" << endl;
			cout << "11. Kabel" << endl;
			cout << "12. BIOS Batterie" << endl;
            cout << "0. Zur�ck zum Hauptmen�" << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showad1() {
        cout << R"(
Verzeichnisdienst:

AD ist ein hierarchisches Verzeichnisdienstsystem, das Informationen �ber Objekte im Netzwerk speichert. 
Diese Objekte k�nnen Benutzer, Gruppen, Computer, Drucker, Anwendungen und andere Ressourcen sein.
Die Informationen werden in einer Baumstruktur organisiert, die als "Verzeichnisbaum" oder 
"Dom�nenbaum" bezeichnet wird. Die Grundstruktur ist das "Verzeichnis", 
das wiederum in "Dom�nen" unterteilt ist.
)";
    }
    void showad2() {
        cout << R"(
Dom�nen:

Eine Dom�ne ist eine logische Organisationseinheit in einem AD-Netzwerk. 
Sie enth�lt Benutzer, Gruppen und Computerobjekte, die zentral verwaltet werden k�nnen.
Jede Dom�ne hat eine eindeutige Bezeichnung, die als Dom�nenname bezeichnet wird. 
Dom�nen k�nnen auch hierarchisch organisiert werden.
)";
    }

    void showad3() {
        cout << R"(
Dom�nencontroller:

Ein Dom�nencontroller (DC) ist ein Server, der die AD-Datenbank enth�lt und 
Authentifizierungsanfragen sowie Anfragen zum Zugriff auf Ressourcen verarbeitet.
Es gibt mindestens einen prim�ren Dom�nencontroller (PDC) pro Dom�ne, 
aber zus�tzliche Dom�nencontroller k�nnen vorhanden sein, um die Last zu verteilen 
und die Ausfallsicherheit zu verbessern.
)";
    }

    void showad4() {
        cout << R"(
Active Directory-Datenbank:

Die AD-Datenbank speichert Informationen �ber Objekte im Netzwerk. Dies umfasst 
Attribute wie Benutzernamen, Passw�rter, Gruppenmitgliedschaften und mehr.
Die Datenbank wird repliziert, um sicherzustellen, dass �nderungen auf allen 
Dom�nencontrollern in einer Dom�ne synchronisiert werden.
)";
    }

    void showad5() {
        cout << R"(
Organizational Units (OU):

OUs sind Container innerhalb von Dom�nen, die es Administratoren erm�glichen, 
Objekte zu organisieren und zu verwalten. Sie bieten eine flexible M�glichkeit, 
Gruppenrichtlinien und Berechtigungen auf bestimmte Gruppen von Objekten anzuwenden.
)";
    }

    void showad6() {
        cout << R"(
Gruppenrichtlinien:

Gruppenrichtlinien erm�glichen es Administratoren, Einstellungen auf Benutzer- und Computerebene
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
DNS wird verwendet, um die Namen von Netzwerkressourcen in IP-Adressen aufzul�sen.
)";
    }

    void showad()
    {
        cout << R"(   
 Active Directory (AD) ist ein von Microsoft entwickelter Verzeichnisdienst, der in Windows-basierten 
Netzwerken eingesetzt wird. Es bietet eine zentrale Datenbank und einen Satz von Diensten, die es 
Netzwerkadministratoren erm�glichen, Ressourcen wie Computer, Benutzer, Drucker und andere 
Netzwerkobjekte zu organisieren, zu verwalten und zu sichern. 
Die Verwendung von Active Directory erleichtert die Verwaltung von Netzwerkressourcen, 
erh�ht die Sicherheit und erm�glicht eine effiziente Organisation von Benutzern und Ressourcen 
in Unternehmen. Es ist ein zentraler Bestandteil der Windows-Netzwerkumgebung und spielt eine 
Schl�sselrolle bei der Authentifizierung und Autorisierung von Benutzern.
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
            cout << "0. Zur�ck zum Hauptmen�" << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
            }
        }
    }

    void showusv1() {
     cout <<   R"(
Batteriesicherung: Die USV verf�gt �ber eine interne Batterie, die bei 
einem Stromausfall aktiviert wird. Diese Batterie versorgt die angeschlossenen 
Ger�te mit Strom, bis die Hauptstromversorgung wiederhergestellt ist.
)";
    }

    void showusv2() {
     cout <<   R"(
Automatische Spannungsregelung (AVR): Viele USV-Modelle verf�gen �ber AVR, 
um Schwankungen in der Netzspannung auszugleichen und eine stabile Stromversorgung sicherzustellen.
)";
    }

    void showusv3() {
     cout <<   R"(
Online-, Offline- und Line-Interactive-Modelle: USV-Ger�te gibt es in verschiedenen Konfigurationen. 
Online-USV-Ger�te bieten die h�chste Schutzniveau, da sie die angeschlossenen Ger�te kontinuierlich 
�ber die Batterie versorgen. Offline- und Line-Interactive-Modelle schalten die Batterie nur bei 
Bedarf ein.Online-, Offline- und Line-Interactive-Modelle: USV-Ger�te gibt es in verschiedenen 
Konfigurationen. Online-USV-Ger�te bieten die h�chste Schutzniveau, da sie die angeschlossenen 
Ger�te kontinuierlich �ber die Batterie versorgen. Offline- und Line-Interactive-Modelle 
schalten die Batterie nur bei Bedarf ein.
)";
    }

    void showusv4() {
    cout <<    R"(
�berspannungsschutz: USV-Ger�te bieten oft Schutz vor �berspannungen, 
die durch Blitzeinschl�ge oder andere elektrische St�rungen verursacht werden k�nnen.
)";
    }

    void showusv5() {
     cout <<   R"(
Schnittstellen: Viele moderne USV-Ger�te verf�gen �ber Schnittstellen wie USB oder Netzwerkanschl�sse, 
um mit Computern oder Netzwerken zu kommunizieren. Dies erm�glicht es der USV, den Status zu �berwachen 
und automatisch herunterzufahren, wenn die Batterieleistung kritisch wird.
)";
    }

    void showusv6() {
        cout << R"(
Kapazit�t und Laufzeit:

Die Kapazit�t einer USV wird in Voltampere (VA) oder Watt (W) gemessen und gibt an, 
wie viel Last sie unterst�tzen kann. Die Laufzeit der USV h�ngt von der Kapazit�t und 
der angeschlossenen Last ab. Gr��ere Kapazit�ten und Batterien erm�glichen l�ngere Laufzeiten.
)";
    }

    void showusv()
    {
        cout << R"(   
 Eine unterbrechungsfreie Stromversorgung (USV) ist eine elektronische Vorrichtung, 
die dazu dient, kritische elektronische Ger�te vor Stromausf�llen, 
Spannungsschwankungen und anderen Stromproblemen zu sch�tzen. Die Hauptfunktion einer USV besteht darin, 
eine zeitweise Energiequelle bereitzustellen, wenn die Hauptstromversorgung ausf�llt. 
Dies erm�glicht es den angeschlossenen Ger�ten, nahtlos und ohne Unterbrechung weiterzuarbeiten.
)";
        int choice;
        while (true)
        {
            cout << "1. Batteriesicherung" << endl;
            cout << "2. Automatische Spannungsregelung (AVR)" << endl;
            cout << "3. Online-, Offline- Standby- Eco- Modell" << endl;
            cout << "4. �berspannungsschutz" << endl;
            cout << "5. Schnittstellen" << endl;
            cout << "6. Kapazit�t und Laufzeit" << endl;
            cout << "0. Zur�ck zum Hauptmen�" << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
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
            cout << "W�hlen Sie eine Option: ";
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
                cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << endl;
                this_thread::sleep_for(chrono::seconds(2)); 
                break;
            }
        }
        return 0;
    }