#pragma once
#ifndef USER_H
#define USER_H
#include <string>
extern std::string g_name;
void writeToFile(const std::string& filename, const std::string& name, const std::string& text);
void displayNotes(const std::string& filename);
std::string enterName();
// Function to save the name to a configuration file
void saveNameToFile(const std::string& filename, const std::string& name);
void createPassword(const std::string& filename, const std::string& password);
bool changePassword(const std::string& filename, const std::string& oldPassword, const std::string& newPassword);
std::string readNameFromFile(const std::string& filename);
#endif // USER_H