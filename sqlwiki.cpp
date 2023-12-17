#include "sqlwiki.h"
#include "Mainframe.h"
#include <conio.h>
#include <vector>
#include <thread>
#include <iostream>

using namespace std;

void showsqlwikimain()
{
	clearScreen();
    cout << R"(

SELECT:

Syntax: SELECT column1, column2, ... FROM table WHERE condition;
Funktion: Daten abrufen (lesen) von einer oder mehreren Tabellen.
INSERT:

Syntax: INSERT INTO table (column1, column2, ...) VALUES (value1, value2, ...);
Funktion: Neue Datens�tze in eine Tabelle einf�gen.
UPDATE:

Syntax: UPDATE table SET column1 = value1, column2 = value2 WHERE condition;
Funktion: Vorhandene Datens�tze in einer Tabelle aktualisieren.
DELETE:

Syntax: DELETE FROM table WHERE condition;
Funktion: Datens�tze aus einer Tabelle l�schen.
CREATE TABLE:

Syntax: CREATE TABLE table_name (column1 datatype, column2 datatype, ...);
Funktion: Neue Tabelle erstellen.
ALTER TABLE:

Syntax: ALTER TABLE table_name ADD column_name datatype;
Funktion: Eine Tabelle �ndern (Spalte hinzuf�gen, �ndern oder l�schen).
DROP TABLE:

Syntax: DROP TABLE table_name;
Funktion: Eine Tabelle l�schen.
CREATE DATABASE:

Syntax: CREATE DATABASE database_name;
Funktion: Neue Datenbank erstellen.
USE:

Syntax: USE database_name;
Funktion: Die zu verwendende Datenbank ausw�hlen.
ALTER DATABASE:

Syntax: ALTER DATABASE database_name MODIFY NAME = new_name;
Funktion: Den Namen einer Datenbank �ndern.
DROP DATABASE:

Syntax: DROP DATABASE database_name;
Funktion: Eine Datenbank l�schen.
INDEX:

Syntax: CREATE INDEX index_name ON table_name (column1, column2, ...);
Funktion: Einen Index auf einer oder mehreren Spalten erstellen, um die Abfrageleistung zu verbessern.
GRANT:

Syntax: GRANT permission ON object TO user;
Funktion: Berechtigungen f�r Benutzer erteilen.
REVOKE:

Syntax: REVOKE permission ON object FROM user;
Funktion: Berechtigungen von einem Benutzer entziehen.
JOIN:

Syntax: SELECT * FROM table1 JOIN table2 ON table1.column = table2.column;
Funktion: Daten aus mehreren Tabellen basierend auf einer Bedingung abrufen.
UNION:

Syntax: SELECT column1, column2 FROM table1 UNION SELECT column1, column2 FROM table2;
Funktion: Die Ergebnisse mehrerer SELECT-Anweisungen kombinieren.
GROUP BY:

Syntax: SELECT column1, COUNT(column2) FROM table GROUP BY column1;
Funktion: Daten gruppieren und aggregieren.
HAVING:

Syntax: SELECT column1, COUNT(column2) FROM table GROUP BY column1 HAVING COUNT(column2) > 1;
Funktion: Eine Bedingung f�r gruppierte Daten festlegen.

ORDER BY:

Syntax: SELECT column1, column2 FROM table ORDER BY column1 ASC, column2 DESC;
Funktion: Ergebnisse nach bestimmten Spalten sortieren.
DISTINCT:

Syntax: SELECT DISTINCT column FROM table;
Funktion: Eindeutige Werte in einer Spalte ausw�hlen.
LIMIT:

Syntax: SELECT column FROM table LIMIT 10;
Funktion: Die Anzahl der zur�ckgegebenen Zeilen begrenzen.
OFFSET:

Syntax: SELECT column FROM table LIMIT 10 OFFSET 20;
Funktion: Das Offset f�r LIMIT festlegen, um Paginierung zu erm�glichen.
BETWEEN:

Syntax: SELECT column FROM table WHERE column BETWEEN value1 AND value2;
Funktion: Datens�tze innerhalb eines bestimmten Wertebereichs ausw�hlen.
LIKE:

Syntax: SELECT column FROM table WHERE column LIKE 'pattern';
Funktion: Datens�tze ausw�hlen, die zu einem bestimmten Muster passen.
IN:

Syntax: SELECT column FROM table WHERE column IN (value1, value2, ...);
Funktion: Datens�tze ausw�hlen, die in einer Liste von Werten enthalten sind.
COUNT:

Syntax: SELECT COUNT(column) FROM table WHERE condition;
Funktion: Die Anzahl der Datens�tze in einer Tabelle z�hlen.
SUM:

Syntax: SELECT SUM(column) FROM table WHERE condition;
Funktion: Die Summe der Werte in einer Spalte berechnen.
AVG:

Syntax: SELECT AVG(column) FROM table WHERE condition;
Funktion: Den Durchschnitt der Werte in einer Spalte berechnen.
MAX:

Syntax: SELECT MAX(column) FROM table WHERE condition;
Funktion: Den h�chsten Wert in einer Spalte finden.
MIN:

Syntax: SELECT MIN(column) FROM table WHERE condition;
Funktion: Den niedrigsten Wert in einer Spalte finden.
INNER JOIN:

Syntax: SELECT * FROM table1 INNER JOIN table2 ON table1.column = table2.column;
Funktion: Datens�tze aus beiden Tabellen zur�ckgeben, die eine gemeinsame Bedingung erf�llen.
LEFT JOIN (or LEFT OUTER JOIN):

Syntax: SELECT * FROM table1 LEFT JOIN table2 ON table1.column = table2.column;
Funktion: Alle Datens�tze aus der linken Tabelle und die �bereinstimmenden Datens�tze aus der rechten Tabelle zur�ckgeben.
RIGHT JOIN (or RIGHT OUTER JOIN):

Syntax: SELECT * FROM table1 RIGHT JOIN table2 ON table1.column = table2.column;
Funktion: Alle Datens�tze aus der rechten Tabelle und die �bereinstimmenden Datens�tze aus der linken Tabelle zur�ckgeben.
)";
}