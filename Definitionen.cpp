#include <iostream>
#include <conio.h>

using namespace std;

void anzeigenanfechtbar()
{
    R"(  Vertrag ist gültig.  )";
}

void anzeigenAuslobung()
{
    R"(
Preisversprechen
)";
}

void anzeigenakkreditiv()
{
	R"(
Akkreditiv 
Ein Akkreditiv ist in der Außenhandelsfinanzierung ein Geschäftsbesorgungsvertrag mit dem abstrakten Schuldversprechen eines Kreditinstituts,
nach Weisungen des Auftraggebers gegen Vorlage bestimmter Dokumente innerhalb eines bestimmten Zeitraumes
Zahlung an einen bestimmten Zahlungsempfänger zu leisten.
Beim Akkreditiv übernimmt die Bank des Importeuers gegenüber dem Exporteuer ein abstraktes Zahlungsversprechen.
Statt des Kunden ist die Bank in der Pflicht. Bei einer Bestätigung des Akkreditivs wird 
statt der Hausbank des Importeuers die Bank des Exporteuers in die Pflicht genommen.

)";
}

void anzeigenavisieren()
{
	R"(
"Avisieren" bedeutet, im Allgemeinen, 
etwas anzukündigen oder vorab zu benachrichtigen. 
In spezifischeren Kontexten kann es sich auf das Melden oder
 Ankündigen von geplanten Aktivitäten, Ereignissen oder Lieferungen beziehen.
)";
}

void anzeigenBartern()
{
    R"(
Tauschhandel mit Sachwerten )";
}

void anzeigenBesitzkonstitut()
{
    R"(
Verkäufer bleibt Eigentümer der Sache, Besitzrecht wird aber übertragen.
)";
}

void anzeigenDisponent()
{
    R"(  Zuteiler/Verwalter einer Organisation, Zuständig für Finanzen und Personal )";
}

void anzeigenevaluiren()
{
    R"(
bewerten / beurteilen
)";
}

void anzeigenforfaitierung()
{
	R"(
	Bei einer Forfaitierung auch Forfaiting, erfolgt der Verkauf von Forderungen an einen neuen Gläubiger.
		Forfaitierungen sind vor allem ein Mittel der Exportfinanzierung bei Lieferungen an ausländische Kunden.
)";
}

void anzeigenfactoring()
{
	R"(
Beim Factoring verkauft ein Unternehmen seine offenen Forderungen an einen Factor, der im Gegenzug einen Teilbetrag
(oder die volle Summe) sofort auszahlt und das Ausfallrisiko übernimmt.
Der Factor übernimmt auch das Debitorenmanagement und das Mahnwesen.
)";
}

void anzeigenISO()
{
    R"(
ISO Normen sind gleiche einheitliche Vorschriften, die für alle Unternehmen gleichermaßen verstanden werden.
)";
}

void anzeigentilgung()
{
    R"(
Tilgung nennt man im Finanzwesen die planmäßige oder außerplanmäßige Rückzahlung von Schulden.
)";
}

void anzeigensqueezeout()
{
    R"(
Der Squeeze Out, auch bekannt als „Freeze Out“, ist ein rechtliches Verfahren, um Minderheitsaktionäre eines Unternehmens auszuschließen 
und alle Anteile auf den Mehrheitsaktionär (Hauptaktionär) zu vereinigen.
)";
}

int defmain()
{
    char auswahl;
    bool beenden = false;

    while (!beenden) {
        system("cls"); // Bildschirm löschen (funktioniert in Windows)

        std::cout << "Menü:\n";
        std::cout << "1. Finanzierungsregeln\n";
        std::cout << "2. Geschäftsprozesse\n";
        std::cout << "3. ISO Normen\n";
        std::cout << "4. Kapital und Kapitalstruktur\n";
        std::cout << "5. Rechtsformen\n";
        std::cout << "6. Arten von Rechtsgeschäften\n";
        std::cout << "7. Vertragsarten\n";
        std::cout << "8. Verschiedene Gesellschaftsformen\n";
        std::cout << "9. Bilanz\n";
        std::cout << "10. Beenden (ESC)\n";
        std::cout << "11. Finanzierungsarten\n";
        std::cout << "12. Darlehensarten\n";
        std::cout << "Bitte wählen Sie eine Option: ";

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
        //case '4':
        //    anzeigenBilanz();
        //    break;
        //case '5':
        //    anzeigenRechtsformen();
        //    break;
        //case '6':
        //    anzeigenArtenVonRechtsgeschaeften();
        //    break;
        //case '7':
        //    anzeigenVertragsarten();
        //    break;
        //case '8':
        //    anzeigenVerschiedeneGesellschaftsformen();
        //    break;
        //case '9':
        //    anzeigenSteuern();
        //    break;
        case '10':
            beenden = true; // Programm beenden
            break;
        default:
            std::cout << "Ungültige Auswahl. Bitte erneut wählen.\n";
            break;
        }
        if (auswahl != '10') {
            std::cout << "\nDrücken Sie eine beliebige Taste, um fortzufahren...";
            _getch(); // Warten auf Tastendruck, bevor das Menü erneut angezeigt wird
        }
    }
	return 0;

}
