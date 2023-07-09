#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void writeToFile(const std::string& filename, const std::string& text) {
    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        file << text << std::endl;
        file.close();
        std::cout << "Die Notiz wurde erfolgreich gespeichert!" << std::endl;
    }
    else {
        std::cout << "Fehler beim Öffnen der Datei!" << std::endl;
    }
}

void displayNotes(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::cout << "Gespeicherte Notizen:" << std::endl;
        std::string note;
        while (std::getline(file, note)) {
            std::cout << note << std::endl;
        }
        file.close();
    }
    else {
        std::cout << "Fehler beim Öffnen der Datei!" << std::endl;
    }
}

std::string enterName() {
    std::string name;
    std::cout << "Bitte geben Sie Ihren Namen ein um einen Eintrag zu hinterlassen: ";
    std::getline(std::cin, name);
    return name;
}

int guimain() {
    std::string filename = "gaestebuch.txt";

    displayNotes(filename);

    std::cout << "Willkommen im Gästebuch!" << std::endl;

    std::string name = enterName();

    while (name.empty()) {
       // std::cout << "Ungültiger Name. Bitte geben Sie Ihren Namen erneut ein: ";
        name = enterName();
    }

    std::cout << "Hallo " << name << "! Bitte hinterlassen Sie eine Notiz: ";
    std::string note;
    std::getline(std::cin, note);

    std::string entry = name + ": " + note;
    writeToFile(filename, entry);

    displayNotes(filename);

    return 0;
}
