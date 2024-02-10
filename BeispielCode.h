#pragma once
#ifndef BEISPIELCODE_H
#define BEISPIELCODE_H
int bcmain();

//double funktionrabattq(double preisr)  //Übergabewert
//{
//	double rabatty = 0;
//	if (preisr > 100) {
//		rabatty = preisr * 0.10; //10% Rabatt
//	}
//	return rabatty;   //Rückgabewert
//}

//linerare Suche
//iterativer Suchalgorithms
//Übergabe: Liste mit Zahlen, Anzahl der Werte der Zahlen
//Rückgabe: Index, wo gefunden?, wenn nicht gefunden-1
//int linear(int anzahl, int liste[],int suche) {
//	int index = 0; //beginnt am Anfang der Liste
//	while (index < anzahl) {   //solange Liste nicht zuende
//		if (liste[index] == suche) { 
//			return index;     // wenn gefunden, dann Rückgabe Index
//		}
//	}
//}


//binäre Suche
//rekursiver Algorithmus
//Übergabe: 1. ist die Liste mit Zahlen, 2. von (index), 3. bis (index), 4. Suche
//Rückgabe: der Index vom gesuchten Wert (-1 wenn nicht vorhanden )
//int binaerio(int[liste], int von, int bis, int suche) {
//	if (von == bis) {
//		if (liste[von] == suche) return von; //Rückgabe Index
//		else return -1;  // nicht gefunden
//	}
//	int mitte = (von + bis) / 2; //Mitte der Liste berechnen
//	if (liste[mitte] == suche) return mitte;
//	if (suche > liste[mitte]) {
//		von = mitte + 1;
//		return binaerio(liste, von, bis, suche);
//	}
//	else {
//		bis = mitte - 1;
//		return binaerio(liste, von, bis, suche);
//	}
//}

#endif // !BEISPIELCODE_H
