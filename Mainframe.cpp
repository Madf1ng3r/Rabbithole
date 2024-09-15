#define _CRT_SECURE_NO_WARNINGS  // Sicherheitsfunktionen
#include "Mainframe.h" 
#include <cstdlib>      // Funktionen f�r allgemeine Aufgaben (z.B. system())
#ifdef _WIN32       
#include <windows.h>    // Windows-spezifische Funktionen (z.B. GetSystemMetrics())
#endif 
#include <lmcons.h>   // Windows-spezifische Funktionen (z.B. GetSystemMetrics())
#include "Taschenrechner.h"     // Header-Datei f�r den Taschenrechner
#include "sinndeslebens.h"      // Header-Datei f�r das Programm "Sinn des Lebens"
#include "binary.h"             // Header-Datei f�r die Bin�rkonvertierung
#include "Links.h"              // Header-Datei f�r das Link-Programm
#include "readme.h"             // Header-Datei f�r die Readme Datei
#include "Geschichte.h"         // Header-Datei f�r das Geschichte-Programm
#include "Witzbold.h"           // Header-Datei f�r den Witzbold
#include "BWL.h"                // Header-Datei f�r das BWL Lexikon
#include "Notizbuch.h"         // Header-Datei f�r das Notizbuch
#include "User.h"
#include "Games.h"
#include "Art.h"       
#include "Wiki.h"
#include "Hardware.h"
using namespace std;
#ifdef _WIN32
void clearScreen()
{
    system("cls"); // Bildschirm l�schen (nur f�r Windows)
}
#elif __APPLE__ || __linux__
void clearScreen()
{
    std::system("clear"); // Bildschirm l�schen (f�r macOS und Linux)
}
#endif
#ifdef _WIN32
void resetConsoleWindowSize()  // Konsolengr��e zur�cksetzen
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    // Die urspr�ngliche Fenstergr��e abrufen
    CONSOLE_SCREEN_BUFFER_INFO csbi; 
    GetConsoleScreenBufferInfo(consoleHandle, &csbi);
    COORD originalWindowSize = csbi.dwSize;
    // Die aktuelle Fenstergr��e abrufen
    CONSOLE_SCREEN_BUFFER_INFO currentCsbi;
    GetConsoleScreenBufferInfo(consoleHandle, &currentCsbi);
    COORD currentWindowSize = currentCsbi.dwSize;
    // Wenn die aktuelle Fenstergr��e von der urspr�nglichen Fenstergr��e abweicht, das Fenstergr��e zur�cksetzen
    if (currentWindowSize.X != originalWindowSize.X || currentWindowSize.Y != originalWindowSize.Y)
    {
        SMALL_RECT windowRect;
        windowRect.Left = 0;
        windowRect.Top = 0;
        windowRect.Right = originalWindowSize.X - 1;
        windowRect.Bottom = originalWindowSize.Y - 1;
		SetConsoleWindowInfo(consoleHandle, TRUE, &windowRect); // Fenstergr��e zur�cksetzen
        SetConsoleScreenBufferSize(consoleHandle, originalWindowSize);  
    }
}
#elif __APPLE__ || __linux__
void resetConsoleWindowSize()
{
}
#endif
//std::string getCurrentUsername() {
//    char username[UNLEN + 1];
//    DWORD usernameLen = UNLEN + 1;
//
//    if (GetUserNameA(username, &usernameLen)) {
//        return std::string(username);
//    }
//    else {
//        return "Fehler beim Abrufen des Benutzernamens.";
//    }
//}
void showMenu()
{
    //cout << "Hallo" << getCurrentUsername();
  //  cout << "\033[32m"; // Farbcode f�r gr�nen Text
    cout << "  \033[32m       ______       _           \033[0m            _______________________________________________________        " << endl;
    cout << "   \033[32m     |  ____|     | |         \033[0m           /  _____________________________________________________  )       " << endl;
    cout << "   \033[32m     | |__   _ __ | |_ ___ _ ____   \033[0m    /                                                           ]      " << endl;
    cout << "   \033[32m     |  __| | '_  )  __/ _ )|'__|    \033[0m  /  _______________________________________________________   |     " << endl;
    cout << "  \033[32m      | |____| | | | | |  _/| |    \033[0m    |  |------------------------                               |  |     " << endl;
    cout << "  \033[32m      |______|_| |_|_| |____|_|     \033[0m   |  | ' 1.  Art             '                               |  |    " << endl;
    cout << "                                         |  | ' 2.  Wiki            '                               |  |     " << endl;
    cout << "     \033[32m           _   _   \033[0m                 |  | ' 3.  Taschenrechner  '                               |  |     " << endl;
    cout << "   \033[32m            | | | |  \033[0m                 |  | ' 4.  Sinn des Lebens '                               |  |     " << endl;
    cout << "    \033[32m           | |_| |__   ___   \033[0m        |  | ' 5.  Readme          '                               |  |     " << endl;
    cout << "     \033[32m          | __| '_  )/ _ )    \033[0m      |  | ' 6.  Notizbuch       '                               |  |     " << endl;
    cout << "   \033[32m            | |_| | | |  _/     \033[0m      |  | ' 7.  Links           '                               |  |     " << endl;
    cout << "   \033[32m            (___|_| |_|(__|    \033[0m       |  | ' 8.  Spiele          '                               |  |     " << endl;
    cout << "                                         |  | ' 9.  Matrix          '--------------                 |  |     " << endl;
    cout << "  \033[32m      __  __       _       _     \033[0m      |  | '10.  Geschichte      ' 11. Hardware '                |  |     " << endl;
    cout << "  \033[32m     |  \\/  |     | |     (_)     \033[0m     |  | ' 0.  Beenden         '--------------                 |  |     " << endl;
    cout << "  \033[32m     | \\  / | __ _| |__ __ _  _  __  \033[0m  |  | @---------------------' 14. Optionen '                |  |     " << endl;
    cout << "  \033[32m     | |\\/| |/ _` | __|'__| |\) )/ / \033[0m   |  |-------------------------------------------------------|  |     " << endl;
    cout << "   \033[32m    | |  | | (_| | | | | | | ><   \033[0m    |__________________________________________________________|  /      " << endl;
    cout << "  \033[32m     |_|  |_|(__,_|_| |_| |_/_/]_[   \033[0m    (__________________________________________________________/        " << endl;
    cout << "                                         ______/                 [___________]                                     " << endl;
    cout << "                                        /                                                                          " << endl;
    cout << "                                       (__________________________________________________________________         " << endl;
    cout << "                                      / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  /   __   " << endl;
    cout << "                                     /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # /   (  )  " << endl;
    cout << "                                    /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /    (__)  " << endl;
    cout << "                                   /__________________________________________________________________/          " << endl;
 //   cout << "\033[0m"; // Farbcode f�r Standardtext zur�cksetzen
}
void centerConsoleWindow() // Konsolenfenster  mittig positionieren
{
#ifdef _WIN32
    HWND consoleWindow = GetConsoleWindow(); // Fensterhandle der Konsole abrufen
    RECT screenRect;
    GetWindowRect(consoleWindow, &screenRect); // Bildschirmabmessungen abrufen
    int screenWidth = GetSystemMetrics(SM_CXSCREEN); // Breite des Bildschirms abrufen
    int screenHeight = GetSystemMetrics(SM_CYSCREEN); // H�he des Bildschirms abrufen
    int consoleWidth = screenRect.right - screenRect.left; // Breite des Konsolenfensters berechnen
    int consoleHeight = screenRect.bottom - screenRect.top; // H�he des Konsolenfensters berechnen
    int consolePosX = (screenWidth - consoleWidth) / 2; // X-Position des Konsolenfensters berechnen
    int consolePosY = (screenHeight - consoleHeight) / 2; // Y-Position des Konsolenfensters berechnen
    SetWindowPos(consoleWindow, NULL, consolePosX, consolePosY, consoleWidth, consoleHeight, SWP_SHOWWINDOW); // Konsolenfenster positionieren
#elif __APPLE__
#elif __linux__
#endif
}
void executeFile(const string& filename)
{
    string command;
#ifdef _WIN32
    command = "start " + filename; // Kommando zum �ffnen der Datei (Windows)
#elif __APPLE__
    command = "open " + filename; // Kommando zum �ffnen der Datei (macOS)
#elif __linux__
    command = "xdg-open " + filename; // Kommando zum �ffnen der Datei (Linux)
#else
    cout << "Die Ausf�hrung von Dateien wird auf diesem Betriebssystem nicht unterst�tzt." << endl; // Fehlermeldung f�r nicht unterst�tzte Betriebssysteme
    return;
#endif
    int exitCode = system(command.c_str()); // Kommando ausf�hren, um Datei zu �ffnen
    if (exitCode != 0)
    {
        cout << "Fehler beim Oeffnen der Datei." << endl; // Fehlermeldung bei Fehlercode ungleich 0
    }
}
void animateTransition()
{
    resetConsoleWindowSize();
    clearScreen(); // Bildschirm l�schen
    cout << "Lade..." << endl;
    string animationFrames = "|/-\\"; // Animationssymbole
    int frameIndex = 0; // Aktueller Index des Animationssymbols
	for (int i = 0; i < 10; ++i) // Animation
    {
        cout << animationFrames[frameIndex] << std::flush; // Aktuelles Animationssymbol anzeigen
        this_thread::sleep_for(chrono::milliseconds(90)); // Kurze Verz�gerung f�r die Animation
        cout << "\b \b" << flush; // Animationssymbol l�schen (zur�cksetzen)
        frameIndex = (frameIndex + 1) % animationFrames.length(); // Index f�r das n�chste Animationssymbol aktualisieren
    }
}
////void printDigitalClock()
////{
////    time_t currentTime = time(nullptr);
////    tm* localTime = localtime(&currentTime);
////    string timeString = to_string(localTime->tm_hour) + ":" +
////        to_string(localTime->tm_min);
////#ifdef _WIN32
////    CONSOLE_SCREEN_BUFFER_INFO csbi;
////    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
////    int consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
////#else
////    int consoleWidth = 80; // Standardbreite f�r nicht-Windows-Systeme
////#endif
////    int timePadding = consoleWidth - timeString.length() - 2; // 2 f�r Leerzeichen
////    cout << string(timePadding, ' ') << timeString << endl;
////}

int main()   // Hauptfunktion von Rabbithole
{
    centerConsoleWindow();
    bool running = true;
    int choice;
    bool taschenrechnerRunning = false;
    bool menuVisible = true;  // Variable, um den Men�status zu verfolgen
    // Schritt 1: Lade den Namen aus Konfigurationsdatei
    g_name = readNameFromFile("config.txt");
    // Schritt 2: �berpr�ft ob ein Name gespeichert ist
    if (g_name.empty()) {
        g_name = enterName();
        while (g_name.empty()) {
            g_name = enterName();
        }
        // Schritt 3: Speichert den Namen in der Konfigurationsdatei
        saveNameToFile("config.txt", g_name);
    }
    while (running)
    {
        if (menuVisible)
        {
            clearScreen();
            resetConsoleWindowSize();
            showMenu(); 
        }
        ////thread clockThread([]() {
        ////    while (true) {
        ////        clearScreen();
        ////        showMenu();
        ////        printDigitalClock();      // kleine Uhrzeit Anzeige in der rechten unteren Ecke
        ////        this_thread::sleep_for(chrono::minutes(1)); // Alle 1 Minute aktualisieren
        ////    }
        //});
        cout << "Waehlen Sie eine Option: ";
        if (!(cin >> choice))
        {
			cin.clear(); 
			cin.ignore((numeric_limits<streamsize>::max)(), '\n');  // Leerzeichen ignorieren
			cout << "Ungueltige Eingabe. Bitte versuchen Sie es erneut." << endl; //Fehlermeldung
			this_thread::sleep_for(chrono::seconds(1)); // 1 Sekunde warten
            continue;    // Nutzer wird zum Anfang der Schleife geleitet und kann erneut eine Eingabe machen
        }
        //clockThread.detach();
        switch (choice)          // Auswahl der Option
        {
        case 1:
            animateTransition();   // schneller Ladebildschirm mit �bergangseffekt
            clearScreen();   // Fenster leeren
            artmain(); // Random ASCII Art
            break;    // Beenden 
        case 2:
            animateTransition();
            clearScreen();
            wikimain();
            break;
        case 3:
            animateTransition();
            clearScreen();
            taschenrechnerRunning = true;
            menuVisible = false;  // Men�status auf false setzen, um das Men� zu verbergen
            break;
        case 4:
            animateTransition();
            clearScreen();
            ftmain(); // Eine Funktion aus sinndeslebens.cpp aufrufen
            returnToMainMenu(); // Eine Funktion aufrufen, um zum Hauptmen� zur�ckzukehren
            break;
        case 5:
            animateTransition();
            clearScreen();
            rmmain();  // �ffnet readme.cpp
            break;
        case 6:
            animateTransition();
            clearScreen();
            guimain(); // Startet das G�stebuch
            break;
        case 7:
            animateTransition();
            clearScreen();
            linkmain(); // Links.cpp
            break;
        case 8:
            animateTransition();
            clearScreen();
            gamemain(); // Schach,Pong,Snake
            break;
        case 9:
            animateTransition();
            clearScreen();
            bimain(); // Matrixregen
            break;
        case 10:
            animateTransition();
            clearScreen();
            geschmain(); // Random Geschichte erz�hlen
            break;
        case 11:
            animateTransition();
            clearScreen();
            hwmain(); // Prozessor auslesen
            break;
        case 12:
            animateTransition();
			clearScreen();
            bwlmain();
            break;
		case 13:
			animateTransition();
			clearScreen();
            executeFile("Witzbold.cpp");  // Witz API noch in Bearbeitung
            break;
        case 14:
            animateTransition();
            clearScreen();
            optionenmain();
            break;
        case 15:
            animateTransition();
            clearScreen();

            break;
        case 0:
			running = false; 
            break;
        default:
            cout << "Ungueltige Auswahl. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2)); // 2 Sekunden warten
            break;
        }
        if (taschenrechnerRunning)
        {
            calcmain(); // Eine Funktion aus Taschenrechner.cpp aufrufen
            taschenrechnerRunning = false;
            menuVisible = true;  // Men�status auf true setzen, um das Men� nach Beendigung der Funktion anzuzeigen
        }
		if (running) // Nutzer wird zum Anfang der Schleife geleitet und kann erneut eine Eingabe machen
        {
            cout << "Druecken Sie Enter, um fortzufahren.";
            cin.ignore();
            cin.get();
        }
    }
return 0; // Programm beenden
}