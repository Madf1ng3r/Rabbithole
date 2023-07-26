#include <iostream>
using namespace std;
int hcmain() {

	cout << R"(

_____________________________________________________________________________________________________
Header Dateien .h Code verzeichnis mit Beispielen und Bibliotheken

Hier ist eine Liste mit Erklärungen für einige Befehle und Direktiven, die in Header-Dateien in C++ häufig verwendet werden.
Diese Befehle und Direktiven werden in Header-Dateien verwendet, um die Einbindung von Code zu steuern,
vor mehrfachem Einbinden zu schützen oder bedingte Kompilierung zu ermöglichen. 
Sie tragen zur Organisation und Strukturierung des Quellcodes bei.
_____________________________________________________________________________________________________
#include
   - Erklärung: Die `#include`-Direktive wird verwendet, um den Inhalt einer anderen Header-Datei in die aktuelle Datei einzufügen.
 Dadurch können Sie die in der eingebundenen Datei definierten Funktionen, Klassen oder Variablen verwenden.
   - Beispiel: #include <iostream>
_____________________________________________________________________________________________________
#ifndef, #define, #endif
   - Erklärung: Diese Direktiven werden verwendet, um Header-Dateien vor mehrfachem Einbinden zu schützen. 
Sie bilden eine sogenannte Include-Wächter-Struktur. Die `#ifndef`-Direktive prüft, 
ob ein Symbol noch nicht definiert wurde. Wenn dies der Fall ist, wird der Code im Block zwischen `#ifndef` und `#endif` ausgeführt, 
und das Symbol wird mit `#define` definiert. Dadurch wird verhindert, dass der Code in der Header-Datei mehrmals eingefügt wird.
   - Beispiel:
     #ifndef MYHEADER_H
     #define MYHEADER_H
     // Inhalt der Header-Datei   
     #endif
_____________________________________________________________________________________________________
#pragma once
   - Erklärung: Diese Direktive wird anstelle des Include-Wächter-Mechanismus verwendet, 
um mehrfaches Einbinden einer Header-Datei zu verhindern. `#pragma once` sorgt dafür,
 dass die Datei nur einmal in den Übersetzungsprozess einbezogen wird.
   - Beispiel: #pragma once
_____________________________________________________________________________________________________
#ifdef, #else, #endif
   - Erklärung: Diese Direktiven ermöglichen bedingte Kompilierung. 
Der Code zwischen `#ifdef` und `#else` oder `#endif` wird nur kompiliert, wenn das Symbol definiert ist.
 Wenn das Symbol nicht definiert ist, wird der Code in `#else` oder nach `#endif` übersprungen.
   - Beispiel:
     #ifdef DEBUG_MODE
         // Debug-spezifischer Code
     #else
         // Code für den Release-Modus
     #endif
_____________________________________________________________________________________________________
<iostream>
   - Erklärung: Diese Bibliothek stellt Funktionen für die Ein- und Ausgabe über die Konsole zur Verfügung.
   - Beispiele: std::cout , std::cin , std::endl
_____________________________________________________________________________________________________
<vector>
   - Erklärung: Diese Bibliothek stellt eine dynamische Array-Implementierung bereit, die das Hinzufügen, Entfernen und Verwalten von Elementen erleichtert.
   - Beispiele: std::vector<T> , push_back() , size()
_____________________________________________________________________________________________________
<string>
   - Erklärung: Diese Bibliothek enthält Funktionen und Klassen zum Arbeiten mit Zeichenketten.
   - Beispiele: std::string , length() , substr()
_____________________________________________________________________________________________________
<algorithm>
   - Erklärung: Diese Bibliothek enthält viele nützliche Funktionen und Algorithmen für die Arbeit mit Containern und Datenstrukturen.
   - Beispiele: std::sort(), std::find(), std::max()
______________________________________________________________________________________________________
<cmath>
   - Erklärung: Diese Bibliothek enthält mathematische Funktionen und Konstanten.
   - Beispiele: std::sqrt(), std::sin(), M_PI
_____________________________________________________________________________________________________
<fstream>
   - Erklärung: Diese Bibliothek stellt Funktionen für das Lesen und Schreiben von Dateien bereit.
   - Beispiele: std::ifstream , std::ofstream , open() , close()
______________________________________________________________________________________________________
<ctime>
   - Erklärung: Diese Bibliothek enthält Funktionen zum Arbeiten mit Zeit und Datum.
   - Beispiele: std::time() , std::ctime() , std::chrono::system_clock
______________________________________________________________________________________________________
<iomanip>
   - Erklärung: Diese Bibliothek stellt Funktionen und Manipulatoren für die Formatierung von Ein- und Ausgaben bereit.
   - Beispiele: std::setw() , std::setprecision() , std::fixed
______________________________________________________________________________________________________
<random>
   - Erklärung: Diese Bibliothek enthält Funktionen und Klassen für die Erzeugung von Zufallszahlen.
   - Beispiele: std::random_device ,  std::mt19937 , std::uniform_int_distribution
______________________________________________________________________________________________________
<sstream>
    - Erklärung: Diese Bibliothek stellt Funktionen und Klassen zum Arbeiten mit Zeichenkettenströmen bereit.
    - Beispiele: std::stringstream , std::getline() , operator<<
______________________________________________________________________________________________________
<cstdio>
   - Erklärung: Diese Bibliothek stellt Funktionen für die Ein- und Ausgabe über die Standard-Eingabe-/Ausgabestreams bereit.
   - Beispiele: printf() , scanf() , fprintf()
_______________________________________________________________________________________________________
<cstring>
   - Erklärung: Diese Bibliothek enthält Funktionen für die Arbeit mit Zeichenketten und Zeichenfolgenmanipulation.
   - Beispiele: strcpy() , strcat() , strlen()
_______________________________________________________________________________________________________
<cstdlib>
   - Erklärung: Diese Bibliothek enthält Funktionen für allgemeine Zwecke, wie Speicherverwaltung, Zufallszahlenerzeugung, Umwandlung von Zeichenketten in Zahlen usw.
   - Beispiele: malloc() , free() , rand()
_______________________________________________________________________________________________________
 <chrono>
   - Erklärung: Diese Bibliothek enthält Funktionen und Klassen für die Arbeit mit Zeit und Zeitintervallen.
   - Beispiele: std::chrono::high_resolution_clock , std::chrono::duration , std::chrono::time_point
_____________________________________________________________________________________________________
<array>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Arbeit mit Arrays zur Verfügung.
   - Beispiele: std::array<T, N> , std::array::size() , std::array::at()
_____________________________________________________________________________________________________
<numeric>
   - Erklärung: Diese Bibliothek enthält Funktionen für numerische Berechnungen und Algorithmen.
   - Beispiele: std::accumulate() , std::inner_product() , std::partial_sum()
_____________________________________________________________________________________________________
<functional>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Arbeit mit Funktionen bereit.
   - Beispiele: std::function , std::bind() , std::placeholders::_1
_____________________________________________________________________________________________________
<bitset>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Arbeit mit Bitsets bereit.
   - Beispiele: std::bitset<N> , std::bitset::size() , std::bitset::count()
_____________________________________________________________________________________________________
<queue>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Implementierung von Warteschlangen bereit.
   - Beispiele: std::queue<T> , std::queue::push() , std::queue::front()
_____________________________________________________________________________________________________
<stack>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Implementierung von Stapeln bereit.
   - Beispiele: std::stack<T> , std::stack::push() , std::stack::top()
_____________________________________________________________________________________________________
<unordered_map>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Implementierung von unsortierten Assoziativcontainern bereit.
   - Beispiele: std::unordered_map<Key, T>, std::unordered_map::insert(), std::unordered_map::find()
_____________________________________________________________________________________________________
<map>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Implementierung von sortierten Assoziativcontainern bereit.
   - Beispiele: std::map<Key, T> , std::map::insert() , std::map::find()
_____________________________________________________________________________________________________
<set>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Implementierung von sortierten Mengen bereit.
   - Beispiele: std::set<T> , std::set::insert() , std::set::find()
_____________________________________________________________________________________________________
<iterator>
   - Erklärung: Diese Bibliothek stellt Funktionen und Klassen für die Arbeit mit Iteratoren bereit.
   - Beispiele: std::begin() , std::end() , std::advance()
_____________________________________________________________________________________________________
)";

	return 0;
}