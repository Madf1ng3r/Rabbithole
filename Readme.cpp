#include <iostream>   
#include "readme.h"   // Header Datei
using namespace std;
void rmmain() {              // Readme Funktion 
    cout << endl << endl;
    cout << "Version Early Alpha 1.19";
    std::cout << "\033[32m";  //Anfang grüne Schriftfarbe
  cout <<  R"(
  








                                                                             _           _   _           
                                                                            | |         | | | |           
                                                          ___ _ __ ___  __ _| |_ ___  __| | | |__  _   _  
                                                         / __| '__/ _ \/ _` | __/ _ \/ _` | | '_ \| | | | 
                                                        | (__| | |  __/ (_| | ||  __/ (_| | | |_) | |_| | 
                                                         \___|_|  \___|\__,_|\__\___|\__,_| |_.__/ \__, | 
                                                         _                                    _     __/ | 
                                                        | |                                  | |   |___/  
                                                        | |     ___  ___  _ __   __ _ _ __ __| | ___      
                                                        | |    / _ \/ _ \| '_ \ / _` | '__/ _` |/ _ \     
                                                        | |___|  __/ (_) | | | | (_| | | | (_| | (_) |    
                                                        |______\___|\___/|_| |_|\__,_|_|  \__,_|\___/     
                                                                                                                            
)";
  std::cout << "\033[0m";   //Ende mit grüner Farbe
}