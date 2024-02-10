#include "mainframe.h"
#include "BWL.h"
using namespace std;
void anzeigenanfechtbar()
{
 cout <<   R"(  Vertrag ist gültig.  )";
}

void anzeigenAuslobung()
{
 cout <<   R"(
Preisversprechen
)";
}

void anzeigenakkreditiv()
{
//	int  key;
//    do {
        cout << R"(
Akkreditiv 
Ein Akkreditiv ist in der Außenhandelsfinanzierung ein Geschäftsbesorgungsvertrag mit dem abstrakten Schuldversprechen eines Kreditinstituts,
nach Weisungen des Auftraggebers gegen Vorlage bestimmter Dokumente innerhalb eines bestimmten Zeitraumes
Zahlung an einen bestimmten Zahlungsempfänger zu leisten.
Beim Akkreditiv übernimmt die Bank des Importeuers gegenüber dem Exporteuer ein abstraktes Zahlungsversprechen.
Statt des Kunden ist die Bank in der Pflicht. Bei einer Bestätigung des Akkreditivs wird 
statt der Hausbank des Importeuers die Bank des Exporteuers in die Pflicht genommen.

)";
    //    cin >> key;
    //} while (key != 27);
}

void anzeigenavisieren()
{
cout <<	R"(
"Avisieren" bedeutet, im Allgemeinen, 
etwas anzukündigen oder vorab zu benachrichtigen. 
In spezifischeren Kontexten kann es sich auf das Melden oder
 Ankündigen von geplanten Aktivitäten, Ereignissen oder Lieferungen beziehen.
)";
}

void anzeigenBartern()
{
cout <<    R"(
Tauschhandel mit Sachwerten )";
}

void anzeigenBesitzkonstitut()
{
cout <<    R"(
Verkäufer bleibt Eigentümer der Sache, Besitzrecht wird aber übertragen.
)";
}

void anzeigenDisponent()
{
 cout <<   R"(  Zuteiler/Verwalter einer Organisation, Zuständig für Finanzen und Personal )";
}

void anzeigenevaluiren()
{
 cout <<   R"(
bewerten / beurteilen
)";
}

void anzeigenforfaitierung()
{
cout <<	R"(
	Bei einer Forfaitierung auch Forfaiting, erfolgt der Verkauf von Forderungen an einen neuen Gläubiger.
		Forfaitierungen sind vor allem ein Mittel der Exportfinanzierung bei Lieferungen an ausländische Kunden.
)";
}

void anzeigenfactoring()
{
cout <<	R"(
Beim Factoring verkauft ein Unternehmen seine offenen Forderungen an einen Factor, der im Gegenzug einen Teilbetrag
(oder die volle Summe) sofort auszahlt und das Ausfallrisiko übernimmt.
Der Factor übernimmt auch das Debitorenmanagement und das Mahnwesen.
)";
}

void anzeigenISO()
{
 cout <<   R"(
ISO Normen sind gleiche einheitliche Vorschriften, die für alle Unternehmen gleichermaßen verstanden werden.
)";
}

void anzeigentilgung()
{
cout <<    R"(
Tilgung nennt man im Finanzwesen die planmäßige oder außerplanmäßige Rückzahlung von Schulden.
)";
}

void anzeigensqueezeout()
{
 cout <<   R"(
Der Squeeze Out, auch bekannt als „Freeze Out“, ist ein rechtliches Verfahren, um Minderheitsaktionäre eines Unternehmens auszuschließen 
und alle Anteile auf den Mehrheitsaktionär (Hauptaktionär) zu vereinigen.
)";
}

int defmain()
{
    char auswahl;
    bool beenden = false;
    while (!beenden) {
        system("cls"); // Bildschirm löschen
        cout << "Menü:\n";
        cout << "1. Avisieren\n";
        cout << "2. Forfaitierung\n";
        cout << "3. Factoring\n";
        cout << "4. Akkreditiv\n";
        cout << "5. Anfechtbar\n";
        cout << "6. Besitzkonstitut\n";
        cout << "7. Disponent\n";
        cout << "8. ISO Norm\n";
        cout << "9. Tilgung\n";
        cout << "10. Evaluiren\n";
        cout << "11. Finanzierungsarten\n";
        cout << "12. Magisches Viereck\n";
        cout << "13 Magisches Dreieck\n";
        cout << "14. Bartern\n";
        cout << "Bitte wählen Sie eine Option: ";
        auswahl = _getch(); // Warten auf Tastatureingabe ohne Enter
        switch (auswahl) {
        case '1':
            anzeigenavisieren();
            break;
        case '2':
            anzeigenforfaitierung();
            break;
        case '3':
            anzeigenfactoring();
            break;
        case '4':
            anzeigenakkreditiv();
            break;
        case '5':
            anzeigenanfechtbar();
            break;
        case '6':
            anzeigenBesitzkonstitut();
            break;
        case '7':
            anzeigenDisponent();
            break;
        case '8':
            anzeigenISO();
            break;
        case '9':
            anzeigentilgung();
            break;
        case '10':
            anzeigenevaluiren();
            break;
        case '11':
            showFinanzierungsregeln();
            break;
        case '12':
            anzeigenmagischesviereck();
            break;
        case '13':
            showmagischesdreieck();
                break;
        case '14':
                    anzeigenBartern();
                    break;
        case '15':

            break;
        case '16':

            break;

        case '0':
            beenden = true; // Programm beenden
            break;
        default:
            cout << "Ungültige Auswahl. Bitte erneut wählen.\n";
            break;
        }
        if (auswahl != '0') {
            cout << "\nDrücken Sie eine beliebige Taste, um fortzufahren...";
            _getch(); // Warten auf Tastendruck, bevor das Menü erneut angezeigt wird
        }
    }
	return 0;

}
