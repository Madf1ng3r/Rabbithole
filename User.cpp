#include "user.h"
#include <iostream>
#include <string>
#include <chrono>
#include <fstream>
#include <conio.h>
#include <thread>
#include <vector>

std::string g_name; // Global variable to store the name

void writeToFile(const std::string& filename, const std::string& name, const std::string& text) {
    std::ofstream file(filename, std::ios::app); // Append mode to add new notes
    if (file.is_open()) {
        file << "[" << name << "]: " << text << std::endl;
        file.close();
        std::cout << "Note saved successfully." << std::endl;
    }
    else {
        std::cout << "Error: Could not open the file." << std::endl;
    }
}

void displayNotes(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }
    else {
        std::cout << "Datei konnte nicht geöffnet werden." << std::endl;
    }
}

std::string enterName() {
    std::string name;
    std::cout << "\033[32m";
    std::cout << R"(



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
    std::cout << "\033[0m";
    std::cout << "Wilkommen ";
    std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Verzögerung von 500 Millisekunden

    std::string welcomeMessage = "im Rabbithole! Das Programm befindet sich noch in der Alpha Version, wenn du noch irgendwelche Bugs findest kannst du diese gerne melden. Bevor du loslegst erzähl mir etwas über dich. Wie lautet dein Name?";
    for (char c : welcomeMessage) {
        std::cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Verzögerung von 100 Millisekunden pro Zeichen
    }
    std::cout << "                                     Namen hier Eingeben: ";
    std::getline(std::cin, name);
    return name;
}

void saveNameToFile(const std::string& filename, const std::string& name) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << name;
        file.close();
    }
    else {
        std::cout << "Datei konnte nicht geöffnet werden." << std::endl;
    }
}

std::string readNameFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string name;
    if (file.is_open()) {
        std::getline(file, name);
        file.close();
    }
    else {
        std::cout << "Datei konnte nicht geöffnet werden." << std::endl;
    }
    return name;
}