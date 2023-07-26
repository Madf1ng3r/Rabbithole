#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include "User.h"
#include <conio.h>

int gumain() {
    std::string filename = "notizbuch.txt";
    displayNotes(filename);
    std::cout << "\033[32m";
    std::cout << R"(
      __...--~~~~~-._   _.-~~~~~--...__
    //               `V'               \\ 
   //                 |                 \\ 
  //__...--~~~~~~-._  |  _.-~~~~~~--...__\\ 
 //__.....----~~~~._\ | /_.~~~~----.....__\\
====================\\|//====================
                    `---`
 )" << std::endl;
    std::cout << "\033[0m";
    std::cout << "Dies ist dein persönliches Notizbuch!" << std::endl;
    std::cout << "Hallo " << g_name << "! Bitte hinterlassen Sie eine Notiz: ";
    std::string note;
    std::getline(std::cin, note);
    std::string entry = g_name + ": " + note;
    writeToFile(filename, g_name, note);
    displayNotes(filename);

    if (_kbhit()) {
        char key = _getch();
        if (key == 27) {
            return 0;
        }
    }
    return 0;
}

int guimain() {
    while (true) {
        gumain();
        std::cout << "Möchten Sie eine weitere Notiz hinterlassen? (j/n): ";
        std::string response;
        std::getline(std::cin, response);
        if (response != "j" && response != "J") {
            break;
        }
    }
    return 0;
}