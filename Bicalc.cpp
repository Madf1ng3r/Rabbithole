#include <iostream>
#include <conio.h>
#include <bitset> // Für die binäre Umwandlung
#include <sstream> // Für die Umwandlung in Hexadezimal und Oktal
#include "Mainframe.h"

using namespace std;

// Funktionen für die verschiedenen Operationen
double Addition(double num1, double num2) {
    return num1 + num2;
}

double Subtraktion(double num1, double num2) {
    return num1 - num2;
}

double Multiplikation(double num1, double num2) {
    return num1 * num2;
}

double Division(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    }
    else {
        cout << "Ungueltige Division durch Null." << endl;
        return 0.0;
    }
}

// Funktionen für die Umwandlung in Hexadezimal und Oktal
string ToHex(double num) {
    stringstream ss;
    ss << hex << (int)num;
    return ss.str();
}

string ToOctal(double num) {
    stringstream ss;
    ss << oct << (int)num;
    return ss.str();
}

int bicmain() {
    char operation;
    double num1, num2;
    int base = 10; // 10 für Dezimal, 2 für Binär, 16 für Hexadezimal, 8 für Oktal

    while (true) {
        system("cls");

        cout << "\033[32m";
        cout << "-----------------------------------" << endl;
        cout << "|        Binaerer Rechner         |" << endl;
        cout << "-----------------------------------" << endl;
        cout << "|   Menue:                        |" << endl;
        cout << "|   1. Addition                   |" << endl;
        cout << "|   2. Subtraktion                |" << endl;
        cout << "|   3. Multiplikation             |" << endl;
        cout << "|   4. Division                   |" << endl;
        cout << "|   5. Wechsel zur Binären Eingabe |" << endl;
        cout << "|   6. Wechsel zur Dezimalen Eingabe |" << endl;
        cout << "|   7. Wechsel zur Hexadezimalen Eingabe |" << endl;
        cout << "|   8. Wechsel zur Oktalen Eingabe |" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Druecken Sie 'ESC', um zu beenden." << endl;
        cout << "-----------------------------------" << endl;
        cout << "Aktuelle Eingabebasis: " << (base == 10 ? "Dezimal" : (base == 2 ? "Binär" : (base == 16 ? "Hexadezimal" : "Oktal"))) << endl;
        cout << "Bitte waehlen Sie eine Operation (1/2/3/4/5/6/7/8): ";
        cout << "\033[0m";
        cout << R"(

                                                       _______________________________________________________        
                                                     /  _____________________________________________________  )      
                                                    /                                                           ]      
                                                   /  _______________________________________________________   |     
                                                  |  |------------------------                               |  |     
                                                  |  | ' 1.                                                  |  |    
                                                  |  | ' 2.  Wiki                                            |  |     
                                                  |  | ' 3.                                                  |  |     
                                                  |  | ' 4.                                                  |  |     
                                                  |  | ' 5.                                                  |  |    
                                                  |  | ' 6.                                                  |  |     
                                                  |  | ' 7.                                                  |  |     
                                                  |  | ' 8.                                                  |  |     
                                                  |  | ' 9.                                                  |  |     
                                                  |  | '10.                                                  |  |     
                                                  |  | ' 0.                                                  |  |     
                                                  |  | @---------------------                                |  |     
                                                  |  |-------------------------------------------------------|  |
                                                  |__________________________________________________________|  /      
                                                    (__________________________________________________________/        
                                                   ______/                 [___________]                                     
                                                 /                                                                        
                                                (__________________________________________________________________        
                                               / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  /   __  
                                              /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # /   (  )  
                                             /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /    (__)  
                                            /__________________________________________________________________/          
)";

        operation = _getch();

        if (operation == 27)
            break;

        if (operation == '5') {
            base = 2; // Wechsel zur Binären Eingabe
            continue;
        }
        else if (operation == '6') {
            base = 10; // Wechsel zur Dezimalen Eingabe
            continue;
        }
        else if (operation == '7') {
            base = 16; // Wechsel zur Hexadezimalen Eingabe
            continue;
        }
        else if (operation == '8') {
            base = 8; // Wechsel zur Oktalen Eingabe
            continue;
        }

        if (operation < '1' || operation > '4') {
            cout << "Ungueltige Eingabe. Bitte waehlen Sie eine gueltige Operation." << endl;
            continue;
        }

        // Eingabe von Operanden basierend auf der ausgewählten Eingabebasis
        if (base == 10) {
            cout << "Bitte geben Sie den ersten Operanden ein: ";
            cin >> num1;
            cout << "Bitte geben Sie den zweiten Operanden ein: ";
            cin >> num2;
        }
        else if (base == 2) {
            string binNum1, binNum2;
            cout << "Bitte geben Sie den ersten Operanden im Binärformat ein: ";
            cin >> binNum1;
            cout << "Bitte geben Sie den zweiten Operanden im Binärformat ein: ";
            cin >> binNum2;
            num1 = bitset<64>(binNum1).to_ullong();
            num2 = bitset<64>(binNum2).to_ullong();
        }
        else if (base == 16) {
            string hexNum1, hexNum2;
            cout << "Bitte geben Sie den ersten Operanden im Hexadezimalformat ein: ";
            cin >> hexNum1;
            cout << "Bitte geben Sie den zweiten Operanden im Hexadezimalformat ein: ";
            cin >> hexNum2;
            num1 = stoi(hexNum1, nullptr, 16);
            num2 = stoi(hexNum2, nullptr, 16);
        }
        else if (base == 8) {
            string octalNum1, octalNum2;
            cout << "Bitte geben Sie den ersten Operanden im Oktalformat ein: ";
            cin >> octalNum1;
            cout << "Bitte geben Sie den zweiten Operanden im Oktalformat ein: ";
            cin >> octalNum2;
            num1 = stoi(octalNum1, nullptr, 8);
            num2 = stoi(octalNum2, nullptr, 8);
        }

        double result;

        // Je nach ausgewählter Operation wird die entsprechende Funktion aufgerufen
        switch (operation) {
        case '1':
            result = Addition(num1, num2);
            break;
        case '2':
            result = Subtraktion(num1, num2);
            break;
        case '3':
            result = Multiplikation(num1, num2);
            break;
        case '4':
            result = Division(num1, num2);
            break;
        }

        // Ausgabe des Ergebnisses
        cout << "-----------------------------------" << endl;
        if (base == 10) {
            cout << "Ergebnis (Dezimal): " << num1 << " ";
        }
        else if (base == 2) {
            cout << "Ergebnis (Dezimal): " << num1 << " ";
        }
        else if (base == 16) {
            cout << "Ergebnis (Dezimal): " << num1 << " ";
        }
        else if (base == 8) {
            cout << "Ergebnis (Dezimal): " << num1 << " ";
        }

        // Unterschiedliche Schriftfarben für die Rechensymbole
        switch (operation) {
        case '1':
            cout << "\033[33m+\033[0m"; // Gelbe Schriftfarbe für Addition
            break;
        case '2':
            cout << "\033[31m-\033[0m"; // Rote Schriftfarbe für Subtraktion
            break;
        case '3':
            cout << "\033[32m*\033[0m"; // Grüne Schriftfarbe für Multiplikation
            break;
        case '4':
            cout << "\033[34m:\033[0m"; // Blaue Schriftfarbe für Division
            break;
        }

        if (base == 10) {
            cout << " " << num2 << " = " << result << endl;
        }
        else if (base == 2) {
            cout << " " << num2 << " = " << result << endl;
        }
        else if (base == 16) {
            cout << " " << num2 << " = " << result << " (Hex: 0x" << ToHex(result) << ")" << endl;
        }
        else if (base == 8) {
            cout << " " << num2 << " = " << result << " (Oktal: 0" << ToOctal(result) << ")" << endl;
        }

        cout << "-----------------------------------" << endl;

        cout << "Druecken Sie eine beliebige Taste, um fortzufahren...";
        _getch();
    }

    return 0;
}
