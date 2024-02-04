#include "OpenLink.h"
#include <iostream>
using namespace std;
void openLinkInBrowser(const string& link)
{
#ifdef _WIN32
    string command = "start " + link;  
#elif __APPLE__
    string command = "open " + link;
#elif __linux__
    string command = "xdg-open " + link;
#else
    cout << "Die Ausf�hrung von Links wird auf diesem Betriebssystem nicht unterst�tzt." << endl;
    return;
#endif
    int exitCode = system(command.c_str());
    if (exitCode != 0)
    {
       cout << "Fehler beim �ffnen des Links." << endl;
    }
}