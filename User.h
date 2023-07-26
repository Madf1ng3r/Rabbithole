#pragma once
// user_.h
#ifndef USER_H
#define USER_H
#include <string>
// Global variable to store the name
extern std::string g_name;
// Function to write a note to a file
void writeToFile(const std::string& filename, const std::string& name, const std::string& text);
// Function to display all notes in a file
void displayNotes(const std::string& filename);
// Function to enter a name
std::string enterName();
// Function to save the name to a configuration file
void saveNameToFile(const std::string& filename, const std::string& name);
// Function to read the name from a configuration file
std::string readNameFromFile(const std::string& filename);
#endif // USER_H