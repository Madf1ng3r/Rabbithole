#pragma once 
#ifndef MAINFRAME_H
#define MAINFRAME_H
#include <string>

void clearScreen();

void showMenu();

void executeFile(const std::string& filename);

void animateTransition();

void resetConsoleWindowSize();
//void printDigitalClock();
#endif // !MAINFRAME_H