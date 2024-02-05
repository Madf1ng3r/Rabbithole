#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip> // Für setprecision und fixed
#include <windows.h>
#include <string>
#include "Bicalc.h"
#include "Mainframe.h"
#include "Bitcalc.h"
using namespace std;
double addition(double a, double b)
{
    return a + b;
}

double subtraktion(double a, double b)
{
    return a - b;
}

double multiplikation(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return static_cast<double>(a) / b;
}

int potenzierung(int a, int b)
{
    return pow(a, b);
}

int quadratwurzel(int a)
{
    return sqrt(a);
}

int fakultaet(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
    return result;
}

double volumenKreis(double radius)
{
    return (4.0 / 3.0) * acos(-1) * pow(radius, 3);
}

double flaecheKreis(double radius)
{
    return acos(-1) * pow(radius, 2);
}

double umfangKreis(double radius)
{
    return 2 * acos(-1) * radius;
}

string calculatePi()
{
    string piStr = to_string(acos(-1));
    return piStr.substr(0, piStr.find('.') + 101);
}

void printMenu()
{
    cout << "\033[32m"; // Grüne Textfarbe
    cout << " _____________________ " << endl;
    cout << "|  _________________  |" << endl;
    cout << "| |              0. | |" << endl;
    cout << "| |_________________| |" << endl;
    cout << "|  ___ ___ ___   ___  |" << endl;
    cout << "| | 7 | 8 | 9 | | + | |" << endl;
    cout << "| |___|___|___| |___| |" << endl;
    cout << "| | 4 | 5 | 6 | | - | |" << endl;
    cout << "| |___|___|___| |___| |" << endl;
    cout << "| | 1 | 2 | 3 | | x | |" << endl;
    cout << "| |___|___|___| |___| |" << endl;
    cout << "| | . | 0 | = | | / | |" << endl;
    cout << "|_|___|___|___|_|___|_|" << endl;
    cout << "\033[0m"; //Zurücksetzen der Textfarbe
    cout << "                                           ------------------------------------------------------" << endl;
    cout << "                                           |             Optionen:                               |" << endl;
    cout << "                                           |  1. Addition          |  11. Umfang eines Kreises   |" << endl;
    cout << "                                           |  2. Subtraktion       |  12. Binärrechner           |" << endl;
    cout << "                                           |  3. Multiplikation    |  13. Bit-/Byte Rechner      |" << endl;
    cout << "                                           |  4. Division          |  14. Gleichung lösen        |" << endl;
    cout << "                                           |  5. Potenzierung      |                             |" << endl;
    cout << "                                           |  6. Quadratwurzel     |                             |" << endl;
    cout << "                                           |  7. Fakultät          |                             |" << endl;
    cout << "                                           |  8. Zahl Pi           |                             |" << endl;
    cout << "                                           |  9. Volumen eines Kreises                           |" << endl;
    cout << "                                           |  10. Fläche eines Kreises                           |" << endl;
    cout << "                                           |  0. zurück zum Menue                                |" << endl;
    cout << "                                            -----------------------------------------------------" << endl;
}

void changeConsoleColor(int colorCode)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
}

void calcmain()
{
    bool running = true;

    while (running)
    {
        printMenu();
        string choice;
        cout << "Wählen Sie eine Option: ";
        cin >> choice;
        if (choice.empty() || !isdigit(choice[0]))
        {
            cout << "Ungültige Eingabe. Bitte geben Sie eine Zahl ein." << endl;
            continue;
        }

        int option = stoi(choice);

        switch (option)
        {
        case 0:
            running = false;
            break;
        case 1:
        {
            int a, b;
            cout << "Geben Sie die erste Zahl ein: ";
            cin >> a;
            cout << "Geben Sie die zweite Zahl ein: ";
            cin >> b;
            cout << "Ergebnis: " << addition(a, b) << endl;
            break;
        }
        case 2:
        {
            int a, b;
            cout << "Geben Sie die erste Zahl ein: ";
            cin >> a;
            cout << "Geben Sie die zweite Zahl ein: ";
            cin >> b;
            cout << "Ergebnis: " << subtraktion(a, b) << endl;
            break;
        }
        case 3:
        {
            int a, b;
            cout << "Geben Sie die erste Zahl ein: ";
            cin >> a;
            cout << "Geben Sie die zweite Zahl ein: ";
            cin >> b;
            cout << "Ergebnis: " << multiplikation(a, b) << endl;
            break;
        }
        case 4:
        {
            int a, b;
            cout << "Geben Sie die erste Zahl ein: ";
            cin >> a;
            cout << "Geben Sie die zweite Zahl ein: ";
            cin >> b;
            if (b != 0)
            {
                cout << "Ergebnis: " << division(a, b) << endl;
            }
            else
            {
                cout << "Fehler: Division durch Null nicht möglich." << endl;
            }
            break;
        }
        case 5:
        {
            int a, b;
            cout << "Geben Sie die Basis ein: ";
            cin >> a;
            cout << "Geben Sie den Exponenten ein: ";
            cin >> b;
            cout << "Ergebnis: " << potenzierung(a, b) << endl;
            break;
        }
        case 6:
        {
            int a;
            cout << "Geben Sie die Zahl ein: ";
            cin >> a;
            if (a >= 0)
            {
                cout << "Ergebnis: " << quadratwurzel(a) << endl;
            }
            else
            {
                cout << "Fehler: Quadratwurzel einer negativen Zahl nicht möglich." << endl;
            }
            break;
        }
        case 7:
        {
            int a;
            cout << "Geben Sie die Zahl ein: ";
            cin >> a;
            if (a >= 0)
            {
                cout << "Ergebnis: " << fakultaet(a) << endl;
            }
            else
            {
                cout << "Fehler: Fakultät einer negativen Zahl nicht möglich." << endl;
            }
            break;
        }
        case 8:
            cout << "Zahl Pi = " << calculatePi() << endl;
            break;
        case 9:
        {
            double radius;
            cout << "Geben Sie den Radius des Kreises ein: ";
            cin >> radius;
            cout << "Volumen des Kreises: " << volumenKreis(radius) << endl;
            break;
        }
        case 10:
        {
            double radius;
            cout << "Geben Sie den Radius des Kreises ein: ";
            cin >> radius;
            cout << "Fläche des Kreises: " << flaecheKreis(radius) << endl;
            break;
        }
        case 11:
        {
            double radius;
            cout << "Geben Sie den Radius des Kreises ein: ";
            cin >> radius;
            cout << "Umfang des Kreises: " << umfangKreis(radius) << endl;
            break;
        }
		case 12:
            animateTransition();
            clearScreen();
            bicmain();
            break;
        case 13:
			animateTransition();
			clearScreen();
            bitmain();
			break;
        case 14:
            animateTransition();
            clearScreen();

        default:
            cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
            break;
        }
    }
}