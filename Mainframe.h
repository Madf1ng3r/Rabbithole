#pragma once 
#ifndef MAINFRAME_H
#define MAINFRAME_H
#include <string>
#include <vector>  // Vektor-Klasse f�r dynamische Arrays
#include <iostream>     // Eingabe/Ausgabe-Stream-Funktionalit�t
#include <chrono>       // Zeitmessungsfunktionalit�t
#include <thread>       // Multithreading-Funktionalit�t
#include <fstream>      // Datei-Ein-/Ausgabe-Funktionalit�t
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
