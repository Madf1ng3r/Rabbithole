#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include "User.h"
#include <conio.h>
#include <locale>
using namespace std;
int gumain() {
  //  locale::global(locale("de_DE.utf8"));
    // wcout.imbue(locale());
    string filename = "notizbuch.txt";
    displayNotes(filename);
    cout << "\033[32m";
    cout << R"(
      __...--~~~~~-._   _.-~~~~~--...__
    //               `V'               \\ 
   //                 |                 \\ 
  //__...--~~~~~~-._  |  _.-~~~~~~--...__\\ 
 //__.....----~~~~._\ | /_.~~~~----.....__\\
====================\\|//====================
                    `---`
 )" << endl;
    cout << "\033[0m";
    cout <<  "Dies ist dein persoenliches Notizbuch!" << endl;
    cout << "Hallo " << g_name << "! Bitte hinterlassen Sie eine Notiz: ";
    string note;
    getline(cin, note);
    string entry = g_name + ": " + note;
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
        cout << "Möchten Sie eine weitere Notiz hinterlassen? ( J  für Ja ) ";
        string response;
        getline(cin, response);
        if (response != "j" && response != "J") {
            break;
        }
    }
    return 0;
}