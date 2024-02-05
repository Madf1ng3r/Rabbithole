#include "user.h"
#include <iostream>
#include <string>
#include <chrono>
#include <fstream>
#include <conio.h>
#include <thread>
#include <vector>
using namespace std;
string g_name; 
void writeToFile(const string& filename, const string& name, const string& text) {
    ofstream file(filename, ios::app); 
    if (file.is_open()) {
        file << "[" << name << "]: " << text << endl;
        file.close();
        cout << "Note saved successfully." << endl;
    }
    else {
        cout << "Error: Could not open the file." << endl;
    }
}

void displayNotes(const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Datei konnte nicht geöffnet werden." << endl;
    }
}

static void createPasswort() {

    string password;
    bool validPassword = false;
    while (!validPassword) {
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "Möchtest du ein Passwort erstellen? (ja/nein): " << endl;
        string response;
        cin >> response;
        if (response == "ja") {
            cout << "Bitte gib ein Passwort ein (mindestens 6 Zeichen, mindestens ein Großbuchstabe, mindestens eine Zahl): " << endl;
            cin >> password;
            // Passwort überprüfen
            bool hasUpperCase = false;
            bool hasDigit = false;
            if (password.length() >= 6) {
                for (char c : password) {
                    if (isupper(c)) {
                        hasUpperCase = true;
                    }
                    if (isdigit(c)) {
                        hasDigit = true;
                    }
                }
                if (hasUpperCase && hasDigit) {
                    validPassword = true;
                    // Passwort speichern
                    ofstream passwordFile("pw.txt");
                    if (passwordFile.is_open()) {
                        passwordFile << password;
                        passwordFile.close();
                        this_thread::sleep_for(chrono::milliseconds(100));
                        cout << "Passwort erfolgreich gespeichert." << endl;
                    }
                    else {
                        cout << "Fehler: Passwort konnte nicht gespeichert werden." << endl;
                    }
                }
                else {
                    cout << "Fehler: Das Passwort entspricht nicht den Anforderungen." << endl;
                }
            }
            else {
                cout << "Fehler: Das Passwort muss mindestens 6 Zeichen lang sein." << endl;
            }
        }
        else if (response == "nein") {
            cout << "Okay, kein Passwort erstellt." << endl;
            validPassword = true;
        }
        else {
            cout << "Bitte gib 'ja' oder 'nein' ein." << endl;
        }
    }
}

bool changePassword(const string& oldPassword, const string& newPassword) {
    ifstream file("pw.txt");
    string savedPassword;
    if (file.is_open()) {
        getline(file, savedPassword);
        file.close();
        if (savedPassword == oldPassword) {
            ofstream passwordFile("pw.txt");
            if (passwordFile.is_open()) {
                passwordFile << newPassword;
                passwordFile.close();
                cout << "Password successfully changed." << endl;
                return true;
            }
            else {
                cout << "Error: Could not open the password file for writing." << endl;
                return false;
            }
        }
        else {
            cout << "Error: The old password does not match the saved password." << endl;
            return false;
        }
    }
    else {
        cout << "Error: Could not open the password file for reading." << endl;
        return false;
    }
}

string enterName() {
    string name;
    cout << "\033[32m";
    cout << R"(



                 _,._      
     .||,       /_ _\\     
    \.`',/      |'L'| |    
    = ,. =      | -,| L    
    / || \    ,-'\"/,'`.   
      ||     ,'   `,,. `.  
      ,|____,' , ,;' \| |  
     (3|\    _/|/'   _| |  
      ||/,-''  | >-'' _,\\ 
      ||'      ==\ ,-'  ,' 
      ||       |  V \ ,|   
      ||       |    |` |   
      ||       |    |   \  
      ||       |    \    \ 
      ||       |     |    \
      ||       |      \_,-'
      ||       |___,,--")_\
      ||         |_|   ccc/
      ||        ccc/       
      ||                
              

)";
    cout << "\033[0m";
    cout << "Wilkommen ";
    this_thread::sleep_for(chrono::milliseconds(500)); 

    string welcomeMessage = "im Rabbithole! Das Programm befindet sich noch in der Alpha Version. Bevor Du loslegst erzähl mir etwas über Dich. Wie lautet dein Name?";
    for (char c : welcomeMessage) {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(100)); // Verzögerung von 100 Millisekunden pro Zeichen
    }
    cout << "                                 Namen hier Eingeben: ";
    getline(cin, name);
    return name;
}

void saveNameToFile(const string& filename, const string& name) {
    ofstream file(filename);
    if (file.is_open()) {
        file << name;
        file.close();
    }
    else {
        cout << "Datei konnte nicht geöffnet werden." << endl;
    }
}

string readNameFromFile(const string& filename) {
    ifstream file(filename);
    string name;
    if (file.is_open()) {
        getline(file, name);
        file.close();
    }
    else {
        cout << "Datei konnte nicht geöffnet werden." << endl;
    }
    return name;
}