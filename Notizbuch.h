#pragma once
#include <string>
#ifndef NOTIZBUCH_H
#define NOTIZBUCH_H
void writeToFile(const std::string& filename, const std::string& text);
void displayNotes(const std::string& filename);
int guimain();
#endif