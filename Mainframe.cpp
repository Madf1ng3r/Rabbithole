#define _CRT_SECURE_NO_WARNINGS  // Sicherheitsfunktionen
#include "Mainframe.h" 
#include <cstdlib>      // Funktionen für allgemeine Aufgaben (z.B. system())
#ifdef _WIN32       
#include <windows.h>    // Windows-spezifische Funktionen (z.B. GetSystemMetrics())
#endif 
#include <lmcons.h>   // Windows-spezifische Funktionen (z.B. GetSystemMetrics())
#include "Taschenrechner.h"     // Header-Datei für den Taschenrechner
#include "sinndeslebens.h"      // Header-Datei für das Programm "Sinn des Lebens"
#include "binary.h"             // Header-Datei für die Binärkonvertierung
#include "Links.h"              // Header-Datei für das Link-Programm
#include "readme.h"             // Header-Datei für die Readme Datei
#include "Geschichte.h"         // Header-Datei für das Geschichte-Programm
#include "Witzbold.h"           // Header-Datei für den Witzbold
#include "BWL.h"                // Header-Datei für das BWL Lexikon
#include "Notizbuch.h"         // Header-Datei für das Notizbuch
#include "User.h"
#include "Games.h"
#include "Art.h"       
#include "Wiki.h"
#include "Hardware.h"
using namespace std;
#ifdef _WIN32
void clearScreen()
{
    system("cls"); // Bildschirm löschen (nur für Windows)
}
#elif __APPLE__ || __linux__
void clearScreen()
{
    std::system("clear"); // Bildschirm löschen (für macOS und Linux)
}
#endif
#ifdef _WIN32
void resetConsoleWindowSize()  // Konsolengröße zurücksetzen
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    // Die ursprüngliche Fenstergröße abrufen
    CONSOLE_SCREEN_BUFFER_INFO csbi; 
    GetConsoleScreenBufferInfo(consoleHandle, &csbi);
    COORD originalWindowSize = csbi.dwSize;
    // Die aktuelle Fenstergröße abrufen
    CONSOLE_SCREEN_BUFFER_INFO currentCsbi;
    GetConsoleScreenBufferInfo(consoleHandle, &currentCsbi);
    COORD currentWindowSize = currentCsbi.dwSize;
    // Wenn die aktuelle Fenstergröße von der ursprünglichen Fenstergröße abweicht, das Fenstergröße zurücksetzen
    if (currentWindowSize.X != originalWindowSize.X || currentWindowSize.Y != originalWindowSize.Y)
    {
        SMALL_RECT windowRect;
        windowRect.Left = 0;
        windowRect.Top = 0;
        windowRect.Right = originalWindowSize.X - 1;
        windowRect.Bottom = originalWindowSize.Y - 1;
		SetConsoleWindowInfo(consoleHandle, TRUE, &windowRect); // Fenstergröße zurücksetzen
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
  //  cout << "\033[32m"; // Farbcode für grünen Text
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
 //   cout << "\033[0m"; // Farbcode für Standardtext zurücksetzen
}
void centerConsoleWindow() // Konsolenfenster  mittig positionieren
{
#ifdef _WIN32
    HWND consoleWindow = GetConsoleWindow(); // Fensterhandle der Konsole abrufen
    RECT screenRect;
    GetWindowRect(consoleWindow, &screenRect); // Bildschirmabmessungen abrufen
    int screenWidth = GetSystemMetrics(SM_CXSCREEN); // Breite des Bildschirms abrufen
    int screenHeight = GetSystemMetrics(SM_CYSCREEN); // Höhe des Bildschirms abrufen
    int consoleWidth = screenRect.right - screenRect.left; // Breite des Konsolenfensters berechnen
    int consoleHeight = screenRect.bottom - screenRect.top; // Höhe des Konsolenfensters berechnen
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
    command = "start " + filename; // Kommando zum Öffnen der Datei (Windows)
#elif __APPLE__
    command = "open " + filename; // Kommando zum Öffnen der Datei (macOS)
#elif __linux__
    command = "xdg-open " + filename; // Kommando zum Öffnen der Datei (Linux)
#else
    cout << "Die Ausführung von Dateien wird auf diesem Betriebssystem nicht unterstützt." << endl; // Fehlermeldung für nicht unterstützte Betriebssysteme
    return;
#endif
    int exitCode = system(command.c_str()); // Kommando ausführen, um Datei zu öffnen
    if (exitCode != 0)
    {
        cout << "Fehler beim Oeffnen der Datei." << endl; // Fehlermeldung bei Fehlercode ungleich 0
    }
}
void animateTransition()
{
    resetConsoleWindowSize();
    clearScreen(); // Bildschirm löschen
    cout << "Lade..." << endl;
    string animationFrames = "|/-\\"; // Animationssymbole
    int frameIndex = 0; // Aktueller Index des Animationssymbols
	for (int i = 0; i < 10; ++i) // Animation
    {
        cout << animationFrames[frameIndex] << std::flush; // Aktuelles Animationssymbol anzeigen
        this_thread::sleep_for(chrono::milliseconds(90)); // Kurze Verzögerung für die Animation
        cout << "\b \b" << flush; // Animationssymbol löschen (zurücksetzen)
        frameIndex = (frameIndex + 1) % animationFrames.length(); // Index für das nächste Animationssymbol aktualisieren
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
////    int consoleWidth = 80; // Standardbreite für nicht-Windows-Systeme
////#endif
////    int timePadding = consoleWidth - timeString.length() - 2; // 2 für Leerzeichen
////    cout << string(timePadding, ' ') << timeString << endl;
////}

int main()   // Hauptfunktion von Rabbithole
{
    centerConsoleWindow();
    bool running = true;
    int choice;
    bool taschenrechnerRunning = false;
    bool menuVisible = true;  // Variable, um den Menüstatus zu verfolgen
    // Schritt 1: Lade den Namen aus Konfigurationsdatei
    g_name = readNameFromFile("config.txt");
    // Schritt 2: Überprüft ob ein Name gespeichert ist
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
            animateTransition();   // schneller Ladebildschirm mit Übergangseffekt
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
            menuVisible = false;  // Menüstatus auf false setzen, um das Menü zu verbergen
            break;
        case 4:
            animateTransition();
            clearScreen();
            ftmain(); // Eine Funktion aus sinndeslebens.cpp aufrufen
            returnToMainMenu(); // Eine Funktion aufrufen, um zum Hauptmenü zurückzukehren
            break;
        case 5:
            animateTransition();
            clearScreen();
            rmmain();  // Öffnet readme.cpp
            break;
        case 6:
            animateTransition();
            clearScreen();
            guimain(); // Startet das Gästebuch
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
            geschmain(); // Random Geschichte erzählen
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
            menuVisible = true;  // Menüstatus auf true setzen, um das Menü nach Beendigung der Funktion anzuzeigen
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