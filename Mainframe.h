#pragma once 
#ifndef MAINFRAME_H
#define MAINFRAME_H
#include <string>
#include <vector>  // Vektor-Klasse für dynamische Arrays
#include <iostream>     // Eingabe/Ausgabe-Stream-Funktionalität
#include <chrono>       // Zeitmessungsfunktionalität
#include <thread>       // Multithreading-Funktionalität
#include <fstream>      // Datei-Ein-/Ausgabe-Funktionalität
#include <iomanip>     // Manipulation der Ein und Ausgabe  
#include <conio.h>
void clearScreen();
void showMenu();
void executeFile(const std::string& filename);
void animateTransition();
void resetConsoleWindowSize();
//void printDigitalClock();
#endif // !MAINFRAME_H

#ifndef OPTIONEN_H
#define OPTIONEN_H
int optionenmain();
#endif // !OPTIONEN_H
