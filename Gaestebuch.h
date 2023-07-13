#pragma once
#include <string>
#ifndef GAESTEBUCH_H
#define GAESTEBUCH_H

void writeToFile(const std::string& filename, const std::string& text);
void displayNotes(const std::string& filename);
int guimain();

#endif

