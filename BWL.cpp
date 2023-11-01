#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <chrono>
#include <limits>
#include <thread>
#include <stdio.h>
#include <windows.h>
#include <conio.h> // F�r _getch-Funktion
#include "Mainframe.h"
#include "BWLLink.h"
#include "Links.h"
#include "Gesetze.h"

using namespace std;

void anzeigenFinanzierungsregeln() {
    cout << "Finanzierungsregeln sind Regeln und Vorschriften, die die finanzielle Struktur und das Kapital eines Unternehmens regeln. Sie umfassen:\n";
    cout << "Die Finanzierungsregeln sind in der BWL aufgestellte normierte Regeln. Es handelt sich um Mindestanforderungen an die aus einer Bilanz ersichtliche Kapitalstruktur.[1] Im Hinblick auf eine optimale Kapitalstruktur, was eine Kosten minimierende und damit auch Unternehmenswert maximierende Auslegung der Finanzierung bedeutet, haben sich einige Finanzierungsregeln ausgepr�gt. Diese zielen nicht nur auf einen optimalen Verschuldungsgrad, sondern auch auf die Erhaltung der Zahlungsf�higkeit, also eine optimale Liquidit�t. Bei der Bewertung der Liquidit�t wird vom Grundsatz der Fristenkongruenz ausgegangen. Die meisten der unten genannten Regeln erweisen sich in der Praxis oft als unerreichbar, da sie je nach Branche kaum bis gar nicht umzusetzen sind. Au�erdem vermindern sie h�ufig die Rentabilit�t zu Gunsten der Liquidit�t, erm�glichen aber auch, je besser die Regeln erf�llt sind, l�ngere wirtschaftliche Unternehmenskrisen zu �berwinden. Aus dieser Perspektive ist eine Anpassung der starren Regeln auf jedes einzelne Unternehmen (Betriebsgr��e) oder zumindest auf einen Wirtschaftszweig n�tig, um den Praxisbezug herzustellen. Eine besondere Rolle spielt der Leverage-Effekt, das hei�t die Hebelwirkung des Fremdkapitals auf die Eigenkapitalrentabilit�t.";

}

void anzeigenGeschaeftsprozesse() {
    cout << "Gesch�ftsprozesse sind systematische und wiederholbare Aktivit�tsabl�ufe, die in einer Organisation durchgef�hrt werden, um Ziele zu erreichen. Beispiele f�r Gesch�ftsprozesse sind:\n";

}

void anzeigenBilanz()
{
    R"(
   Es handelt sich um Mindestanforderungen an die aus einer Bilanz ersichtliche Kapitalstruktur.
 Im Hinblick auf eine optimale Kapitalstruktur, was eine Kosten minimierende und damit auch
 Unternehmenswert maximierende Auslegung der Finanzierung bedeutet, haben sich einige Finanzierungsregeln ausgepr�gt.
 Diese zielen nicht nur auf einen optimalen Verschuldungsgrad, sondern auch auf die Erhaltung der Zahlungsf�higkeit,
 also eine optimale Liquidit�t. Bei der Bewertung der Liquidit�t wird vom Grundsatz der Fristenkongruenz ausgegangen.
 Die meisten der unten genannten Regeln erweisen sich in der Praxis oft als unerreichbar, da sie je nach Branche kaum
 bis gar nicht umzusetzen sind. Au�erdem vermindern sie h�ufig die Rentabilit�t zu Gunsten der Liquidit�t, erm�glichen aber auch,
 je besser die Regeln erf�llt sind, l�ngere wirtschaftliche Unternehmenskrisen zu �berwinden. Aus dieser Perspektive ist
 eine Anpassung der starren Regeln auf jedes einzelne Unternehmen (Betriebsgr��e) oder zumindest auf einen Wirtschaftszweig n�tig,
 um den Praxisbezug herzustellen. Eine besondere Rolle spielt der Leverage-Effekt, das hei�t die Hebelwirkung des Fremdkapitals auf die 
Eigenkapitalrentabilit�t.";

�bersicht aller Verm�gensbestandteile, finanzielle Buchf�hrung.
)";
}

void anzeigenISONormen() {
    cout << "Die ISO-Normen, auch als Internationale Normen der Internationalen Organisation f�r Normung (ISO) bekannt, sind eine Reihe von international anerkannten Standards, die entwickelt wurden, um sicherzustellen, dass Produkte, Dienstleistungen und Systeme weltweit einheitliche Qualit�ts- und Sicherheitsstandards erf�llen. Diese Normen werden von Expertengremien aus verschiedenen L�ndern entwickelt und regelm��ig �berarbeitet, um sicherzustellen, dass sie den aktuellen Anforderungen und technologischen Entwicklungen entsprechen.";

    cout << "\nDie ISO-Normen sind in vielen Branchen weit verbreitet und dienen dazu, die Qualit�t, Sicherheit und Effizienz von Produkten und Dienstleistungen zu verbessern. Hier sind einige der beliebtesten ISO-Normen und ihre Anwendungsgebiete:\n";

    cout << "ISO 9001 - Qualit�tsmanagement: ISO 9001 ist eine der bekanntesten ISO-Normen und legt die Anforderungen an ein Qualit�tsmanagementsystem fest. Diese Norm hilft Organisationen, die Qualit�t ihrer Produkte und Dienstleistungen zu verbessern und die Kundenzufriedenheit zu steigern.\n";

    cout << "ISO 14001 - Umweltmanagement: ISO 14001 legt die Anforderungen an Umweltmanagementsysteme fest. Sie hilft Organisationen dabei, umweltfreundlichere Praktiken zu entwickeln, Umweltauswirkungen zu reduzieren und die Einhaltung von Umweltvorschriften sicherzustellen.\n";

    cout << "ISO 27001 - Informationssicherheitsmanagement: Diese Norm definiert Anforderungen f�r Informationssicherheitsmanagementsysteme. Sie ist besonders wichtig f�r Unternehmen, die vertrauliche Informationen und Daten verarbeiten, um sicherzustellen, dass diese sicher gesch�tzt sind.\n";

    cout << "ISO 45001 - Arbeitsschutzmanagement: ISO 45001 legt Anforderungen f�r Arbeitsschutzmanagementsysteme fest. Sie soll Organisationen dabei unterst�tzen, sicherere Arbeitsumgebungen zu schaffen und Unf�lle und Verletzungen am Arbeitsplatz zu minimieren.\n";

    cout << "ISO 22000 - Lebensmittelsicherheit: Diese Norm ist f�r Organisationen in der Lebensmittelindustrie relevant und stellt Anforderungen an Lebensmittelsicherheitsmanagementsysteme. Sie dient dazu, sicherzustellen, dass Lebensmittel sicher hergestellt und geliefert werden.\n";

    cout << "ISO 50001 - Energiemanagement: ISO 50001 legt Anforderungen f�r Energiemanagementsysteme fest und hilft Organisationen, Energieeffizienz zu steigern und Energiekosten zu senken.\n";

    cout << "ISO 26000 - Soziale Verantwortung von Organisationen: Diese Norm bietet Leitlinien f�r soziale Verantwortung und unterst�tzt Organisationen dabei, nachhaltige und sozial verantwortliche Gesch�ftspraktiken zu entwickeln und umzusetzen.\n";

    cout << "ISO 13485 - Qualit�tsmanagementsysteme f�r Medizinprodukte: Diese Norm ist speziell f�r Hersteller von Medizinprodukten relevant und legt Anforderungen an Qualit�tsmanagementsysteme f�r diese Branche fest.\n";
}

void anzeigenFinanzierungsarten() {
    cout << "Beispiele f�r Finanzierungsarten sind: \n";
    cout << "Finanzierungsarten:\n";
    cout << "1. Innenfinanzierung\n";
    cout << " 2. Selbstfinanzierung\n";
    cout << "  3. Finanzierung als R�ckstellung\n";
    cout << "   4. Finanzierung als Abschreibung\n";
    cout << "    5. Kapitalfreisetzungseffekt\n";
    cout << "     6. Finanzierung aus Rationalisierungsma�nahmen\n";
    cout << "      7. Verm�gensumschichtung\n";
}

void anzeigenmagischesdreieck()
{
    R"(

         Qualit�t
            / \
           /   \
          /Ziel \
         /       \
   Zeit ---------- Kosten


Qualit�t: Die Qualit�t eines Produkts, einer Dienstleistung oder eines Projekts. Dies bezieht sich darauf,
 wie gut etwas gemacht ist oder wie gut es den Anforderungen und Erwartungen entspricht.

Zeit: Die Zeit, die ben�tigt wird, um ein Projekt abzuschlie�en oder ein Produkt zu erstellen.
 Zeit ist ein entscheidender Faktor in vielen Projekten, da Verz�gerungen Auswirkungen auf den Erfolg und die Kosten haben k�nnen.

Kosten: Die finanziellen Ressourcen, die ben�tigt werden, um ein Projekt oder ein Produkt zu realisieren. 
Kosten sind ein kritischer Aspekt, da sie Auswirkungen auf die Rentabilit�t und den finanziellen Erfolg eines Unternehmens haben.

Die Beziehung zwischen diesen drei Elementen wird als "magisches Dreieck" bezeichnet, weil es schwierig ist, 
alle drei gleichzeitig zu optimieren. Wenn Sie eine der Gr��en �ndern, wirkt sich das oft auf die anderen aus. 
Zum Beispiel, wenn Sie die Qualit�t erh�hen m�chten, k�nnten sich die Kosten erh�hen und/oder die Zeit verl�ngern.
)";
}

void anzeigenmagischesviereck()
{
    R"(



         Preisniveaustabilit�t
                / \
               /   \
              /     \
             /       \
            /         \
           /           \
Vollbesch�ftigung  -  Au�enwirtschaftliches Gleichgewicht
           \           /
            \         /
             \       /
              \     /
               \   /
                \ /
          Wirtschaftswachstum


Preisniveaustabilit�t: Dieses Ziel zielt darauf ab, Inflation oder Deflation auf einem stabilen und niedrigen Niveau zu halten. Eine moderate Inflation wird oft als gesund angesehen, da sie Anreize f�r Investitionen und Konsum schafft, jedoch sollte sie in einem akzeptablen Rahmen gehalten werden, um die Kaufkraft der Bev�lkerung zu erhalten.

Vollbesch�ftigung: Vollbesch�ftigung bedeutet, dass m�glichst viele Menschen, die arbeiten wollen, auch tats�chlich Arbeit finden. Es wird angestrebt, die Arbeitslosenquote niedrig zu halten und die Besch�ftigung zu f�rdern, um soziale Stabilit�t zu gew�hrleisten und die Lebensqualit�t der Bev�lkerung zu verbessern.

Au�enwirtschaftliches Gleichgewicht: Dieses Ziel strebt an, ein Gleichgewicht in den Au�enhandelsbeziehungen zu erreichen. Es bedeutet, dass Exporte und Importe ausgeglichen sein sollten, um die Zahlungsbilanz zu stabilisieren und die wirtschaftliche Unabh�ngigkeit zu sichern.

Wirtschaftswachstum: Dieses Ziel zielt darauf ab, das langfristige Wirtschaftswachstum zu f�rdern und das Bruttoinlandsprodukt (BIP) zu steigern. Ein kontinuierliches, nachhaltiges Wirtschaftswachstum wird als entscheidend angesehen, um den Lebensstandard zu verbessern und zuk�nftige Generationen besser abzusichern.
)";
}

void anzeigenDarlehensarten() {
    R"(
Hypothekendarlehen (Immobilienkredite):
Hypothekendarlehen werden verwendet, um Immobilien zu kaufen oder zu refinanzieren. Die Immobilie dient als Sicherheit f�r das Darlehen.
Autokredite:
Autokredite werden genutzt, um den Kauf eines Fahrzeugs zu finanzieren. Das Fahrzeug dient als Sicherheit f�r das Darlehen.
Studentendarlehen:
Studentendarlehen werden genutzt, um die Ausbildungskosten f�r Studenten zu decken. Diese k�nnen staatlich unterst�tzt oder privat sein.
Pers�nliche Darlehen:
Pers�nliche Darlehen sind nicht durch Sicherheiten abgesichert und k�nnen f�r verschiedene pers�nliche Ausgaben verwendet werden, z.B. Schuldenkonsolidierung, medizinische Ausgaben, Urlaub usw.
Kreditkartenkredite:
Kreditkarten erm�glichen Kreditlinien, die f�r Eink�ufe oder Barabhebungen genutzt werden k�nnen. Die ausstehenden Betr�ge m�ssen monatlich zur�ckgezahlt werden.
Gesch�ftsdarlehen:
Gesch�ftsdarlehen werden Unternehmen gew�hrt, um Betriebskosten zu decken, Ausr�stung zu kaufen, Expansionen durchzuf�hren oder andere gesch�ftsrelevante Ausgaben zu finanzieren.
Baukredite:
Baukredite werden genutzt, um den Bau oder die Renovierung von Immobilien zu finanzieren. Die Auszahlung erfolgt in Tranchen gem�� dem Baufortschritt.
Konsumentenkredite:
Konsumentenkredite k�nnen f�r den Kauf von Haushaltsger�ten, M�beln oder andere Konsumg�ter verwendet werden.
Mikrokredite:
Mikrokredite sind kleine Darlehen, die an Einzelpersonen oder kleine Unternehmer in wirtschaftlich benachteiligten Regionen vergeben werden, um ihre Gesch�ftst�tigkeit zu unterst�tzen.
Darlehen mit festen oder variablen Zinss�tzen:
Je nach Zinsstruktur k�nnen Darlehen entweder feste Zinss�tze haben, die w�hrend der Laufzeit konstant bleiben, oder variable Zinss�tze, die sich basierend auf einem Referenzzinssatz �ndern k�nnen.
Revolvierende Kredite:
Revolvierende Kredite erm�glichen es dem Kreditnehmer, den Kreditbetrag wiederholt zu nutzen, nachdem er zur�ckgezahlt wurde, �hnlich wie bei Kreditkarten.
Eigent�merdarlehen:
Eigent�merdarlehen sind Darlehen, bei denen eine bereits abbezahlte Immobilie als Sicherheit genutzt wird.
Annuit�tendarhlehnen
)";
}

void anzeigenVertragsarten() {
    R"(
Arbeitsvertrag:
Ein Vertrag zwischen einem Arbeitgeber und einem Arbeitnehmer, der die Bedingungen der Besch�ftigung regelt.

Mietvertrag:
Ein Vertrag, der die Bedingungen f�r die Miete einer Immobilie festlegt, einschlie�lich Mietdauer, Mietpreis und Pflichten des Mieters und Vermieters.

Kaufvertrag:
Ein Vertrag, der den Verkauf von Waren oder Immobilien regelt und die Bedingungen f�r den Kauf, den Preis und die Lieferung festlegt.

Dienstleistungsvertrag:
Ein Vertrag, der die Erbringung von Dienstleistungen durch einen Dienstleister an einen Kunden regelt, einschlie�lich Leistungsbeschreibungen, Verg�tung und Verpflichtungen.

Lizenzvertrag:
Ein Vertrag, der dem Lizenznehmer das Recht gew�hrt, geistiges Eigentum (z.B. Software, Patente, Marken) des Lizenzgebers zu nutzen, unter bestimmten Bedingungen und Einschr�nkungen.

Kooperationsvertrag:
Ein Vertrag, der die Zusammenarbeit zwischen zwei oder mehr Parteien f�r ein bestimmtes Projekt oder Ziel regelt, einschlie�lich der Aufgabenverteilung, Verantwortlichkeiten und Gewinnbeteiligung.

Pachtvertrag:
Ein Vertrag, der die Nutzung von Immobilien oder Grundst�cken regelt, bei dem der P�chter dem Verp�chter Miete zahlt und bestimmte Bedingungen erf�llt.

Partnerschaftsvertrag:
Ein Vertrag, der die Bedingungen und Regelungen f�r eine Partnerschaft zwischen zwei oder mehr Parteien festlegt, einschlie�lich der Aufgabenverteilung, Gewinnbeteiligung und Verantwortlichkeiten.

Versicherungsvertrag:
Ein Vertrag, der die Bedingungen und Leistungen einer Versicherungspolice regelt, einschlie�lich der Versicherungsdeckung, Pr�mien und Ausschl�sse.

Kreditvertrag:
Ein Vertrag zwischen einem Kreditgeber und einem Kreditnehmer, der die Bedingungen f�r die Kreditaufnahme, R�ckzahlung und Zinss�tze festlegt.
)";
}

void anzeigenKreditarten() {
    R"(
Avalkredit
Der Avalkredit ist im Bankwesen eine �bernahme von B�rgschaften,Garantieen,
oder �hnliche Eventualverbindlichkeiten durch Kreditinstitute im Auftrag von Bankkunden im Rahmen des Kreditgesch�ftes.
Dokumentenakkreditiv:
Ein Dokumentenakkreditiv, auch bekannt als Letter of Credit (LC), ist eine Zahlungsvereinbarung, bei der eine Bank im Auftrag ihres Kunden eine Zahlung an den Verk�ufer leistet, vorausgesetzt, dieser erf�llt bestimmte im Akkreditiv festgelegte Dokumentationsanforderungen.
Kontokorrentkredit:
Ein Kontokorrentkredit ist eine kurzfristige Kreditlinie, die einem Unternehmen oder einer Person gew�hrt wird, 
um kurzfristige Finanzierungsbed�rfnisse abzudecken. Es erm�glicht, das Konto zu �berziehen, bis zu einem vereinbarten Kreditlimit.
Kundenkredit:
Ein Kundenkredit bezieht sich auf eine Kreditvereinbarung zwischen einem Kreditgeber
 (normalerweise eine Bank oder ein Finanzinstitut) und einem Kunden. Der Kreditgeber gew�hrt dem Kunden einen bestimmten Betrag an Finanzmitteln,
 die dieser zur�ckzahlen muss, oft zu einem festgelegten Zinssatz und in regelm��igen Raten.
Lieferantenkredit:
Ein Lieferantenkredit tritt auf, wenn ein Lieferant Waren oder Dienstleistungen an einen Kunden liefert, bevor die Zahlung erfolgt.
 Dies ist eine Art von kurzfristiger Finanzierung, die es dem Kunden erm�glicht, die erhaltenen G�ter oder Dienstleistungen zu nutzen, bevor er daf�r bezahlt.
Wechselkredit:
Ein Wechselkredit bezieht sich auf eine Form des kurzfristigen Kredits, der durch die Ausstellung eines Wechsels erfolgt. 
Ein Wechsel ist eine schriftliche Anweisung an eine Bank oder einen anderen Zahlungsdienstleister, 
einen bestimmten Betrag zu einem bestimmten Datum an den Inhaber des Wechsels zu zahlen.
Hypothekendarlehen:
Ein Hypothekendarlehen ist ein Darlehen, bei dem Immobilien als Sicherheit f�r das geliehene Geld dienen. 
Es wird h�ufig f�r den Kauf von Immobilien verwendet, und die Immobilie dient als Sicherheit f�r das Darlehen.
Konsumentendarlehen:
Konsumentendarlehen sind Darlehen, die an Einzelpersonen f�r pers�nliche Ausgaben wie Autokauf, Bildung, 
medizinische Kosten oder andere allgemeine Ausgaben vergeben werden. Sie k�nnen gesichert oder ungesichert sein, abh�ngig von den Bedingungen.
Autokredit:
Ein Autokredit ist speziell f�r den Kauf eines Fahrzeugs gedacht. Das Fahrzeug dient als Sicherheit f�r das Darlehen, 
und der Kreditnehmer zahlt das Darlehen in monatlichen Raten zur�ck.
Gesch�ftsdarlehen:
Gesch�ftsdarlehen werden Unternehmen gew�hrt, um Betriebskapital zu erhalten, Investitionen zu t�tigen, 
Ausr�stung zu kaufen oder andere gesch�ftliche Bed�rfnisse zu decken.
Studentendarlehen:
Studentendarlehen sind speziell f�r Bildungszwecke konzipiert. Sie erm�glichen es Studenten, ihre Ausbildung zu finanzieren, 
und die R�ckzahlung beginnt normalerweise nach dem Abschluss.
Baukredit:
Baukredite werden genutzt, um den Bau oder die Renovierung von Immobilien zu finanzieren. 
Die R�ckzahlung erfolgt normalerweise nach Abschluss des Projekts.
Ratenkredit:
Bei einem Ratenkredit zahlt der Kreditnehmer das Darlehen in regelm��igen Raten zur�ck, 
die aus einem Teil des Kapitals und einem Zinsanteil bestehen
)";
}

void anzeigenpdca()
{
    R"(
Der DemingKreis und die PDCA (Plan-Do-Check-Act) wird in der Qualit�tssicherung oft genutzt,
er besteht aus folgenden Punkten:
Planen (Plan):
In dieser Phase werden Ziele und Prozesse identifiziert, die verbessert werden sollen. Es geht darum, klare Ziele zu setzen, m�gliche Hindernisse zu identifizieren, L�sungsans�tze zu entwickeln und Ressourcen zu planen.

Umsetzen (Do):
Hier werden die geplanten Ma�nahmen und Prozesse implementiert. Es ist wichtig, die geplanten Aktionen durchzuf�hren und sicherzustellen, dass alles nach den vorher festgelegten Pl�nen und Spezifikationen verl�uft.

�berpr�fen (Check):
In dieser Phase wird �berpr�ft, ob die implementierten Ma�nahmen die gew�nschten Ergebnisse erzielen und den Zielen entsprechen. Daten werden gesammelt und analysiert, um festzustellen, ob Abweichungen auftreten und ob weitere Anpassungen erforderlich sind.

Handeln (Act):
Basierend auf den Erkenntnissen aus der �berpr�fung werden Anpassungen vorgenommen, um die Effektivit�t und Effizienz der Prozesse zu verbessern. Wenn Verbesserungen erzielt wurden, werden diese standardisiert und in den Arbeitsablauf integriert. Wenn notwendig, beginnt der Zyklus erneut, um weitere Verbesserungen anzustreben.
)";
}

void anzeigenRechtsformen() {
    R"(
Einzelunternehmen (e.K.):

Einzelunternehmer f�hrt das Unternehmen alleine und tr�gt das volle pers�nliche Haftungsrisiko.
Offene Handelsgesellschaft (OHG):

Zusammenschluss von zwei oder mehreren nat�rlichen oder juristischen Personen (Personengesellschaft).
Die Gesellschafter haften pers�nlich, unbeschr�nkt und solidarisch.
Kommanditgesellschaft (KG):

Besteht aus Komplement�ren (unbeschr�nkte Haftung) und Kommanditisten (beschr�nkte Haftung auf ihre Einlage).
Gesellschaft mit beschr�nkter Haftung (GmbH):

Kapitalgesellschaft mit mindestens einem Gesellschafter.
Haftung beschr�nkt sich auf das Gesellschaftsverm�gen.
Unternehmergesellschaft (haftungsbeschr�nkt) (UG):

Variante der GmbH, speziell f�r Gr�nder mit geringem Stammkapital.
Aktiengesellschaft (AG):

Kapitalgesellschaft, deren Grundkapital in Aktien zerlegt ist.
Aktion�re haften nur mit ihrer Einlage.
Europ�ische Gesellschaft (SE):

Gesellschaft mit Sitz in einem EU-Mitgliedsstaat, die nach einheitlichen Regeln gegr�ndet und gef�hrt wird.
Genossenschaft (eG):

Zusammenschluss von Personen oder Unternehmen, um gemeinsame wirtschaftliche Interessen zu verfolgen.
Mitglieder haften in der Regel beschr�nkt auf ihre Einlage.
Gesellschaft b�rgerlichen Rechts (GbR):

Zusammenschluss von mindestens zwei nat�rlichen oder juristischen Personen ohne festes Kapital.
Partnerschaftsgesellschaft (PartG):

Zusammenschluss von Freiberuflern, z.B. Anw�lten, Steuerberatern, �rzten, zu einer Partnerschaft mit gemeinschaftlicher Berufsaus�bung.
Stiftung:
Rechtliche Einrichtung, bei der Verm�gen zur Verfolgung eines bestimmten gemeinn�tzigen Zwecks eingesetzt wird.
Einzelkaufmann (e.Kfm.):
Nat�rliche Person, die ein Handelsgewerbe betreibt, ohne eine bestimmte Rechtsform anzunehmen.
)";
}

void anzeigenSteuern()
{
    R"(

K�rperschaftssteuer: Die K�rperschaftssteuer ist eine Steuer, die von juristischen Personen wie Kapitalgesellschaften (z. B. GmbHs und AGs) auf ihre Gewinne erhoben wird. Es handelt sich um eine Unternehmenssteuer, die auf den erzielten Gewinn vor Steuern berechnet wird.

Einkommenssteuer: Die Einkommenssteuer ist eine Steuer, die von nat�rlichen Personen auf ihr Einkommen erhoben wird. Dieses Einkommen kann aus verschiedenen Quellen stammen, einschlie�lich Geh�ltern, Mieteinnahmen, Kapitalertr�gen und selbstst�ndiger Arbeit.

Umsatzsteuer: Die Umsatzsteuer (auch Mehrwertsteuer genannt) ist eine Verbrauchssteuer, die auf den Verkauf von Waren und Dienstleistungen erhoben wird. Sie wird in der Regel von Unternehmen an den Staat abgef�hrt und auf den Endverbraucher �bertragen. Dies bedeutet, dass Endverbraucher die Umsatzsteuer auf den von ihnen gekauften Produkten und Dienstleistungen bezahlen.

Gewerbesteuer: Die Gewerbesteuer ist eine Steuer, die von Unternehmen auf ihre Gewinne erhoben wird. Im Gegensatz zur K�rperschaftssteuer betrifft die Gewerbesteuer nicht die Rechtsform des Unternehmens, sondern h�ngt von der Art des Gewerbes und dem erzielten Gewinn ab. Sie ist eine kommunale Steuer, was bedeutet, dass die H�he der Steuer von der jeweiligen Gemeinde festgelegt wird.

Kapitalertragsteuer: Die Kapitalertragsteuer ist eine Steuer, die von Unternehmen auf ihre Kapitalertr�ge erhoben wird.

Grundsteuer: Diese Steuer wird auf Grundst�cke und Geb�ude erhoben. Die H�he der Grundsteuer basiert in der Regel auf dem Einheitswert und dem Hebesatz, der von den Gemeinden festgelegt wird.

Erbschaftssteuer und Schenkungssteuer: Diese Steuern werden auf ererbtes oder geschenktes Verm�gen erhoben. Die Steuers�tze k�nnen je nach Verwandtschaftsgrad und H�he des �bertragenen Verm�gens variieren.

Kfz-Steuer: Diese Steuer wird f�r den Besitz und die Nutzung von Kraftfahrzeugen erhoben. Die H�he h�ngt von verschiedenen Faktoren ab, wie z.B. Hubraum, CO2-Emissionen und Art des Fahrzeugs.

Versicherungssteuer: Diese Steuer wird auf Versicherungspr�mien f�r verschiedene Versicherungsarten (z.B. Lebensversicherungen, Sachversicherungen) erhoben.

Tabaksteuer und Alkoholsteuer: Diese Steuern werden auf Tabakprodukte und alkoholische Getr�nke erhoben, um den Konsum zu regulieren und Einnahmen f�r den Staat zu generieren.

Luftverkehrsabgabe: Eine Steuer, die auf Flugreisen erhoben wird, um die Umweltauswirkungen des Luftverkehrs auszugleichen.

Energiesteuer: Eine Steuer auf Energieprodukte wie Benzin, Diesel, Erdgas und Strom. Sie soll Anreize f�r einen sparsamen Energieverbrauch setzen und Einnahmen f�r den Staat generieren.

Zweitwohnungssteuer: Diese Steuer wird von Personen erhoben, die eine Zweitwohnung besitzen oder nutzen.

Mehrwertsteuer auf Importe (Einfuhrumsatzsteuer): Eine Steuer auf Waren und Dienstleistungen, die aus dem Ausland importiert werden.

Hundesteuer: Eine Steuer, die auf den Besitz von Hunden erhoben wird, um die Kommunen zu finanzieren und die Haltung von Hunden zu regulieren.
)";
}

void anzeigenUrheberrecht()
{
    R"(
Das Urheberrecht ist ein Rechtsgebiet, das Kreatoren und Sch�pfern das ausschlie�liche Recht gibt, 
ihre kreativen Werke zu nutzen und zu kontrollieren. Es sch�tzt die geistige Sch�pfung, nicht die Ideen an sich. 
Es ist ein wesentlicher Bestandteil des geistigen Eigentums und soll Anreize f�r K�nstler, Autoren, Musiker, 
Designer, Entwickler und andere schaffen, indem es ihnen erm�glicht, von ihrer Arbeit zu 
profitieren und ihre Investitionen zu sch�tzen.

Hier sind einige wichtige Punkte zum Urheberrecht:

1. **Schutzumfang**: Das Urheberrecht sch�tzt Werke der Literatur, Kunst, Musik, Film, Architektur, 
Software und anderen kreativen Ausdrucksformen. Beispiele sind B�cher, Gem�lde, Musikst�cke, Filme, 
Softwarecodes und Architekturpl�ne.

2. **Urheberrechtliche Rechte**: Der Urheber (der Sch�pfer des Werks) hat bestimmte Rechte an seinem Werk, 
darunter das Recht auf Vervielf�ltigung, Verbreitung, �ffentliche Auff�hrung, Bearbeitung und �bersetzung.

3. **Urheberrechtsdauer**: Die Dauer des Urheberrechts variiert je nach Land, kann aber oft sehr lange 
dauern (in der Regel bis zu 70 Jahre nach dem Tod des Urhebers). Danach f�llt das Werk in die Public 
Domain und kann frei genutzt werden.

4. **Anmeldung und Schutz**: In den meisten L�ndern entsteht das Urheberrecht automatisch, sobald ein 
Werk in einer festen Form festgehalten wird. Eine f�rmliche Registrierung ist in vielen L�ndern jedoch 
empfehlenswert, da sie bestimmte Rechte st�rkt und erm�glicht, Schadensersatz bei Verletzung einzufordern.

5. **Fair Use / Fair Dealing**: In einigen L�ndern gibt es Ausnahmen im Urheberrechtsgesetz f�r bestimmte Verwendungen, 
wie Kritik, Kommentare, Nachrichtenberichterstattung, Bildung und Forschung. Diese Ausnahmen werden als "Fair Use" 
in den USA und als "Fair Dealing" in anderen L�ndern bezeichnet.

6. **Digitales Zeitalter und Internet**: Das digitale Zeitalter hat neue Herausforderungen f�r das Urheberrecht 
mit sich gebracht, insbesondere in Bezug auf die Verbreitung und Nutzung von Inhalten im Internet. 
Fragen zu Filesharing, Streaming, Open Source-Software und Creative Commons-Lizenzen sind nur einige der aktuellen Themen.

7. **Internationale Harmonisierung**: Das Urheberrecht ist in verschiedenen L�ndern unterschiedlich geregelt. 
Internationale Abkommen wie der TRIPS-Vertrag (Teil des �bereinkommens �ber Handelsaspekte der Rechte des 
geistigen Eigentums) streben jedoch an, eine gewisse Harmonisierung und Schutzstandards weltweit zu schaffen.

Es ist wichtig zu beachten, dass das Urheberrecht eine komplexe rechtliche Materie ist, und es ist ratsam, 
bei Fragen oder Bedenken einen Rechtsanwalt oder Experten f�r geistiges Eigentum zu konsultieren.
)";
}

void anzeigenMarktKundenbeziehung()
{
    R"(
Markt- und Kundenbeziehungen sind zentral f�r den Erfolg eines Unternehmens. 
Eine gute Beziehung zu den Kunden hilft bei der Kundenbindung und erm�glicht es Unternehmen, 
ihre Produkte und Dienstleistungen besser an die Bed�rfnisse des Marktes anzupassen.
)";
}

void anzeigenMarktstrukturenUnternehmenszieleUnternehmensleitlinien()
{
    R"(
Marktstrukturen beschreiben, wie ein Markt organisiert ist, z.B. Wettbewerbsformen wie Monopol, 
Oligopol oder vollkommener Wettbewerb. Unternehmensziele sind die angestrebten Resultate, 
die ein Unternehmen erreichen m�chte. Unternehmensleitlinien sind die Grundprinzipien, nach denen ein Unternehmen handelt.
)";
}

void anzeigenCorporateIdentityCommunicationBehaviorDesign()
{
    R"(
Corporate Identity umfasst das Erscheinungsbild, die Werte und die Identit�t eines Unternehmens. 
Corporate Communication bezieht sich auf die Art und Weise, wie das Unternehmen mit internen und 
externen Stakeholdern kommuniziert. Corporate Behavior bezieht sich auf das Verhalten und die Kultur 
innerhalb des Unternehmens. Corporate Design betrifft das visuelle Erscheinungsbild des Unternehmens.
)";
}

void anzeigenOperativestrategischeZiele()
{
    R"(
Operative Ziele sind kurzfristige, konkrete Ziele, w�hrend strategische Ziele langfristige, �bergeordnete Ziele sind.
)";
}

void anzeigenMotivationMaslowKompetenzen()
{
    R"(
Motivation bezieht sich auf die inneren und �u�eren Faktoren, die das Verhalten und die Leistung von Mitarbeitern 
beeinflussen. Maslows Bed�rfnispyramide ist eine Theorie, die die Hierarchie der menschlichen Bed�rfnisse beschreibt. 
Kompetenzen beziehen sich auf die F�higkeiten, Kenntnisse und Erfahrungen, die zur erfolgreichen 
Durchf�hrung von Aufgaben ben�tigt werden.
)";
}

void anzeigenMarktforschungprim�resekund�reDaten()
{
    R"(

)";
}

void anzeigenMarketingMix4P()
{
    R"(
Der Marketing Mix umfasst die vier Elemente Price (Preisgestaltung), Product (Produktgestaltung), 
Placement (Vertrieb) und Promotion (Kommunikation), die gemeinsam die Marketingstrategie eines Unternehmens bilden.
)";
}

void anzeigenFunktionendesPreisesHochNiedrigpreisRabattpolitik()
{
    R"(
Der Preis erf�llt verschiedene Funktionen wie Signalfunktion, Lenkungsfunktion und Einkommensfunktion. 
Hoch- und Niedrigpreisstrategien beziehen sich auf die Preispositionierung von Produkten. 
Rabattpolitik bezieht sich auf die Verwendung von Rabatten als Marketinginstrument.
)";
}

void anzeigenDifferenzierungpsychologischerPreisZahlungsbedingungen()
{
    R"(
Differenzierung bezieht sich auf die Schaffung von Unterscheidungsmerkmalen f�r ein Produkt, 
um sich von der Konkurrenz abzuheben. Psychologischer Preis bezieht sich auf die Preisgestaltung, 
die auf psychologische Faktoren abzielt. Zahlungsbedingungen sind die festgelegten Bedingungen, 
unter denen Zahlungen erfolgen.
)";
}

void anzeigenLieferbedingungenINCOTermsKreditpolitikLeasingFactoring()
{
    R"(
Lieferbedingungen regeln die Bedingungen f�r den Transport und die Lieferung von Waren. 
INCO-Terms sind internationale Regeln zur Auslegung von Liefervertr�gen. Kreditpolitik bezieht sich auf 
die Strategien zur Kreditvergabe. Leasing und Factoring sind Finanzierungsinstrumente f�r Unternehmen.
)";
}

void anzeigenHandelsklauselnKreditpolitikMindestreserveOffenmarktpolitik()
{
    R"(
Handelsklauseln sind Bestimmungen in Handelsvertr�gen. Die Kreditpolitik regelt die Kreditvergabe und -r�ckzahlung. 
Mindestreserve ist der Mindestbetrag, den Banken als Reserve halten m�ssen. Offenmarktpolitik bezieht sich auf 
Ma�nahmen der Zentralbank zur Steuerung der Geldmenge und der Zinsen.
)";
}

void anzeigenGewinnberechnungOHGKG()
{
    R"(
Die Gewinnberechnung f�r Offene Handelsgesellschaften (OHG) und Kommanditgesellschaften (KG) 
erfolgt auf Grundlage der Gesellschaftsvertr�ge und Beteiligungsverh�ltnisse.
)";
}

void anzeigenDatenschutzgrundverordnungDSGVO()
{
    R"(
Die Datenschutzgrundverordnung der EU regelt den Datenschutz und die Privatsph�re f�r alle Personen innerhalb der EU. 
Artikel 1 bis 18 beziehen sich auf die Grundprinzipien und Rechte der betroffenen Personen.
)";
}

void anzeigenProduktpolitikDistributionspolitikKommunikationspolitik()
{
    R"(
Produktpolitik umfasst die Gestaltung von Produkten, Marken und Produktvariationen. 
Distributionspolitik bezieht sich auf Entscheidungen �ber Vertriebskan�le. Kommunikationspolitik 
beinhaltet die Planung und Umsetzung der Kommunikation mit Kunden und anderen Interessengruppen.
)";
}

void anzeigenMarktpotentialWachstumReifungS�ttigungEliminierung()
{
    R"(
Marktpotential bezieht sich auf das ungenutzte Marktvolumen. Wachstum ist die Phase, in der ein Markt expandiert. 
Reifung ist die Phase, in der das Marktwachstum abflacht. S�ttigung ist der Punkt, an dem der Markt ges�ttigt ist. 
Eliminierung bezieht sich auf das Ausscheiden von Produkten aus dem Markt.
)";
}

void anzeigenKommunikationsmodellSchulzvonThun()
{
    R"(
Das Kommunikationsmodell nach Schulz von Thun beschreibt die Kommunikation mit vier Ebenen: 
Sachinhalt, Selbstoffenbarung, Beziehung und Appell. Es betont die Bedeutung von verbaler und nonverbaler 
Kommunikation bei der Interpretation von Botschaften.
)";
}

void anzeigenProzesskontrolle()
{
    R"(
Kontrolle von Prozessen
Prozesscontrolling bezeichnet die Planung und Kontrolle von Gesch�ftsprozessen sowie die daf�r notwendige Informationensversorgung und Koordination.
Schwerpunkt der Planung ist die Definition von Ziel und Messgr��en und deren Kontrolle in Gesch�ftsprozessen.
Das Management Informations System ist eine Software das dieses Controlling erleichtert.
Beispiele daf�r sind das V-Model und das Spiralmodel.
)";
}

void anzeigenprojektmanagement()
{
    R"(
Projektmanagement ist eine strukturierte Herangehensweise zur Planung, Durchf�hrung, �berwachung und Steuerung von Projekten, 
um die definierten Ziele und Anforderungen innerhalb bestimmter Zeit-, Kosten- und Qualit�tsvorgaben zu erreichen. 
Es beinhaltet die effektive Nutzung von Ressourcen, das Management von Risiken, Kommunikation und Zusammenarbeit 
im Team sowie die Einhaltung von Projektmeilensteinen.
Im Allgemeinen umfasst Projektmanagement die folgenden Schritte:

Initiierung: Kl�rung der Projektziele, Festlegung des Umfangs und der Rahmenbedingungen,
Identifizierung der Stakeholder und Erstellung des Projektauftrags.
Planung: Entwicklung eines detaillierten Projektplans, Aufstellung von Arbeitspaketen, 
Ressourcenallokation, Zeit- und Kostenabsch�tzung sowie Risikomanagement.
Durchf�hrung: Umsetzung des Projektplans, Koordination der Teammitglieder, �berwachung des Fortschritts und Sicherstellung,
dass das Projekt im Einklang mit den definierten Anforderungen und Zielen bleibt.
�berwachung und Steuerung: Kontinuierliche �berpr�fung des Projektstatus, 
Vergleich von tats�chlichem Fortschritt mit dem geplanten Fortschritt,
Anpassung des Plans bei Abweichungen und Implementierung von Korrekturma�nahmen.
Abschluss: Abschluss des Projekts, �berpr�fung der Zielerreichung, Dokumentation von Erfahrungen und Lernen f�r zuk�nftige Projekte.
Effektives Projektmanagement zielt darauf ab, die Qualit�t der Arbeit zu maximieren, Risiken zu minimieren und sicherzustellen,
dass das Projekt erfolgreich abgeschlossen wird, um den gew�nschten Nutzen zu erzielen.
)";
}

void anzeigenTotalQualityManagement()
{
    R"(
TQM bezeichnet als umfassendes QM Qualit�tsmanagement nach der DIN eine "durchg�ngige,
 fortw�hrende und alle Bereiche des Unternehmens
erfassende, aufzeichnende, sichtende, organisierende, und kontrollierende T�tigkeit mit dem Ziel,
 Qualit�t als das unternehmerische Ziel permanent zu garantieren.
Grunds�tze des TQL
Kundenorientierung
Einbeziehung der Menschen
F�hrung durch Zielorientierung
Sachlicher Ansatz zur Entscheidungsfindung
Prozessorientierter Ansatz zur Verfahrensoptimierung
Systemorientierter Ansatz
St�ndige Verbesserung ( KVP)
Lieferantenbeziehung zum gegenseitigen Nutzen
)";
}

void anzeigenVersi()
{
    R"(
Kfz-Versicherung (Kraftfahrzeugversicherung):
Eine Kfz-Versicherung deckt Sch�den oder Verluste an Ihrem Fahrzeug sowie Haftpflichtanspr�che Dritter ab, 
die durch den Betrieb des Fahrzeugs entstehen.

Krankenversicherung:
Eine Krankenversicherung �bernimmt die Kosten f�r medizinische Behandlungen, Arzneimittel, Krankenhausaufenthalte 
und andere Gesundheitsleistungen, abh�ngig von den Bedingungen des Versicherungsvertrags.

Lebensversicherung:
Eine Lebensversicherung bietet finanziellen Schutz f�r Angeh�rige oder Beg�nstigte im Falle des Todes 
des Versicherungsnehmers. Sie kann auch als Investition genutzt werden.

Hausratversicherung:
Eine Hausratversicherung deckt Sch�den oder Verluste von pers�nlichem Eigentum in Ihrem Haus ab, 
wie z. B. M�bel, Elektronik, Schmuck und andere Gegenst�nde.

Haftpflichtversicherung:
Die Haftpflichtversicherung deckt Sch�den ab, die Sie einer anderen Person oder ihrem Eigentum zuf�gen. 
Dies kann in verschiedenen Kontexten auftreten, z. B. Privathaftpflicht, Berufshaftpflicht oder Produkthaftpflicht.

Berufsunf�higkeitsversicherung:
Diese Versicherung zahlt eine regelm��ige Rente aus, wenn Sie aufgrund von Krankheit oder Unfall dauerhaft 
berufsunf�hig sind und nicht mehr arbeiten k�nnen.

Unfallversicherung:
Eine Unfallversicherung zahlt im Falle eines Unfalls eine bestimmte Geldsumme aus oder deckt die Kosten 
f�r medizinische Behandlung und Rehabilitation ab.

Rechtsschutzversicherung:
Eine Rechtsschutzversicherung deckt die Kosten f�r rechtliche Auseinandersetzungen und bietet Rechtshilfe 
in verschiedenen Rechtsangelegenheiten.

Reiseversicherung:
Eine Reiseversicherung deckt verschiedene Risiken ab, die w�hrend einer Reise auftreten k�nnen, 
wie z. B. Reiseabbruch, Krankheitskosten im Ausland, Gep�ckverlust und Reiser�cktritt.

G�terversicherung (Frachtversicherung):
Diese Versicherung deckt die Waren ab, w�hrend sie von einem Ort zum anderen transportiert werden. 
Sie sch�tzt gegen Sch�den oder Verluste, die w�hrend des Transports auf dem Land, auf See oder in der Luft auftreten k�nnen.

Transportmittelversicherung:
Diese Versicherung deckt das Transportmittel selbst ab, wie beispielsweise Schiffe, Flugzeuge, Lastwagen oder Z�ge. 
Sie bietet Schutz gegen Sch�den am Transportmittel, die w�hrend des Transports auftreten k�nnen.

Transporteurs-Haftpflichtversicherung:
Diese Versicherung sch�tzt den Transporteur (das Transportunternehmen) vor Haftungsanspr�chen Dritter, 
die durch den Transport von Waren entstehen k�nnten. Sie deckt auch die Haftung f�r Sch�den an den transportierten G�tern ab.

Logistikversicherung:
Diese Versicherung bietet einen umfassenden Schutz f�r Logistikdienstleister, der Sch�den oder Verluste abdeckt, 
die w�hrend der gesamten Lieferkette entstehen k�nnen, einschlie�lich Lagerung, Umschlag und Transport.

)";
}

void anzeigenGesetze()
{
    R"(
Gesetzb�cher zum auswendig lernen f�r die Pr�fung:
Jugendarbeitsschutzgesetz JArbSchG
Arbeitsschutzgesetz ArbSchG
Betriebssicherheitsverordnung BetrSichV
B�rgerliches Gesetzbuch BgB

)";
}

void anzeigenproablauf()
{
    R"(
Beschaffungsprozess:

Dieser Prozess umfasst die Identifikation, Auswahl und Beschaffung von Rohstoffen, Materialien, Ausr�stungen und Dienstleistungen,
 die f�r die Produktion ben�tigt werden.
Eine prozessorientierte Ablauforganisation kann sicherstellen, dass die Beschaffungsprozesse transparent und effizient sind, 
indem sie klare Verfahren f�r Lieferantenauswahl, Bestellabwicklung, Lagerhaltung und Bestandsmanagement festlegt.
Produktionsprozess:

Der Produktionsprozess konzentriert sich auf die Herstellung von Waren oder die Bereitstellung von Dienstleistungen gem�� den spezifizierten Anforderungen.
Durch eine prozessorientierte Ablauforganisation k�nnen die Produktionsabl�ufe optimiert werden, um eine h�here Qualit�t, 
Kostenkontrolle und Zeiteffizienz zu gew�hrleisten.
Marketingprozess:

Der Marketingprozess beinhaltet die Entwicklung und Umsetzung von Strategien zur Marktforschung, Markenpositionierung, 
Produktentwicklung, Preisbildung und Werbung, um die Produkte/Dienstleistungen auf dem Markt erfolgreich zu platzieren.
Mit einer prozessorientierten Ablauforganisation k�nnen Marketingaktivit�ten besser koordiniert, 
Ressourcen effizienter eingesetzt und die Reaktion auf Marktanforderungen verbessert werden.
Vertriebsprozess:

Der Vertriebsprozess befasst sich mit der Vermarktung und dem Verkauf von Produkten oder Dienstleistungen an Kunden, 
einschlie�lich Bestellung, Lieferung und Kundendienst.
Durch eine prozessorientierte Ablauforganisation k�nnen Vertriebsabl�ufe optimiert und koordiniert werden, 
um einen reibungslosen Bestellvorgang, eine effektive Lieferung und eine gute Kundenbeziehung sicherzustellen.
)";
}

void anzeigenereigv()
{
    R"(
Der erweiterte Eigentumsvorbehalt sichert die Rechte eines Verk�ufers.
Bei der Vereinbarung mit dem K�ufer muss er darauf achten, dass sich keine Gr�ne ergeben, die zur Unwirsamkeit des �Vertrags f�hren.
Mit dem erweiterten Eigentumsvorbehalt sichert sich der Verk�ufer einer Sache ein zusetzliches Recht zu. 
Weigert sich der Verk�ufer den vereinbarten Kaufpreis zu zahlen oder wenn ihm dies nicht m�glich ist, 
kann der Verk�ufer die verkaufte Sache so lange vorbehalten bis der K�ufer alle offenen Forderungen von ihm beglichen hat.
Im Kaufvertragsrecht gibt es folgende Arten des Eigentumsvorbehalts:
einfacher Eigentumsvorbehalt   Eigentumswechsel bei Tilgung des Kaufpreises
erweitertes Eigentumsvorbehalt  + weitere Forderungen
nachgeschalteter Eigentumsvorbehalt
verl�ngerter Eigentumsvorbehalt
nachtr�glicher Eigentumsvorbehalt 
)";
}

void anzeigenrealsich()
{
    R"(
Realsicherheiten sind Verm�gensgegenst�nde, die verpf�ndet werden, falls der Schuldner seine Schuld nicht bezahlt. 
Zu diesen Verm�gensgegenst�nden geh�ren bewegliche und unbewegliche Sachen. Sicherungsmittel an Grundst�cken sind Grundschuld und Hypothek.
)";
}

void anzeigenholschuld()
{
    R"(
Holschuld ist ein Begriff aus dem Schuldrecht und bedeutet, dass Leistungs- und Erfolgsort beim Schuldner liegt. 
Bei ihm sollen die Leistungshandlungen erfolgen und der Leistungserfolg eintreten. Bei der Holschuld muss sich der Gl�ubiger
 die Leistung beim Schuldner abholen.
)";
}

void anzeigenzession()
{
    R"(
Eine Zession ist eine Forderungsabtretung oder Sicherungsabtretung. Dabei �ndert sich das Schuldverh�ltnis, 
indem die Forderung an einen neuen Gl�ubiger �bertragen wird. 
Der Zedent (Abtretender) verkauft also die Forderung an den sogenannten Zessionar (Abtretungsempf�nger).
� 398 Abs. 1 BGB
)";
}

void anzeigensixsigma()
{
    R"(
Six Sigma ist ein Managementsystem zur Prozessverbesserung, statistisches Qualit�tsziel und zugleich eine Methode des Qualit�tsmanagements.
Ihr Kernelement ist die Beschreibung, Messung, Analyse, Verbesserung und �berwachung von Gesch�ftsvorg�ngen mit statistischen Mitteln.


                                                  Definieren
                                                                                Messen
                                                              Sig Sigma
                                         Kontrollieren                              Analysieren
                                                               Verbessern
)";
}

void anzeigenkaizen()
{
    R"(
Die Kaizen-Philosophie beschreibt laut Definition eine Denkweise, bei der kleine, schrittweise �nderungen im Laufe der Zeit 
eine gro�e Wirkung erzielen. Bei Kaizen handelt es sich um eine Methode des Qualit�tsmanagement.
Kai steht f�r Verbesserung eines Produktes,  Zen bedeutet dass diese Produkt zum Bessen verwendet wird�.


                                         Kundenorientierung
                    Standartisierung
                                                                  Kritikorientierung
                                       Das Kaizen Prinzip
             Qualit�tsorientierung                     
                                                        Prozessorientierung
)";
}

void anzeigensteuererk()
{
    R"(
Eine Steuererkl�rung ist ein formaler Prozess, bei dem eine steuerpflichtige Person oder ein Unternehmen
 dem Finanzamt Informationen �ber ihre Einkommensverh�ltnisse, Ausgaben und finanziellen Transaktionen 
f�r einen bestimmten Zeitraum meldet. Dieser Zeitraum entspricht normalerweise dem Steuerjahr, das in den meisten L�ndern dem Kalenderjahr entspricht.
Die Steuererkl�rung dient dazu, die H�he der f�lligen Steuern zu berechnen. Dabei werden die Einnahmen, 
Ausgaben, Abz�ge, Steuerverg�nstigungen und sonstigen relevanten finanziellen Informationen ber�cksichtigt. 
Sie erm�glicht es dem Finanzamt, die Steuerpflichtigen zu besteuern oder eventuell �berzahlte Steuern zur�ckzuerstatten.
Hier sind die Schl�sselelemente einer Steuererkl�rung:
1. **Einkommensangaben:** Angaben zum erzielten Einkommen aus verschiedenen Quellen wie Geh�lter, Zinsen, Mieten, Kapitalgewinne, etc.
2. **Abz�ge und Ausgaben:** Angaben zu abzugsf�higen Ausgaben wie Krankenversicherungsbeitr�gen, 
Spenden, berufsbezogenen Ausgaben und anderen absetzbaren Kosten.
3. **Steuerverg�nstigungen und -gutschriften:** Informationen zu m�glichen Steuerverg�nstigungen, 
Gutschriften oder Abz�gen, die die steuerliche Belastung mindern k�nnen.
4. **Pers�nliche Informationen:** Angaben zur pers�nlichen Identit�t, Familienstand, Abh�ngige und andere relevante pers�nliche Informationen
5. **Anhang und Nachweise:** Beif�gen von Belegen, Belegen und zus�tzlichen Unterlagen, die die angegebenen Informationen st�tzen und validieren.
Die Steuererkl�rung ist in den meisten L�ndern gesetzlich vorgeschrieben, und die Einreichungsfristen variieren je nach Land und Rechtsvorschriften. Sie ist ein wichtiges Instrument f�r die Steuerbeh�rden, um die Steuerzahlungen zu �berpr�fen und sicherzustellen, dass die Steuerpflichtigen ihre finanziellen Verpflichtungen gegen�ber dem Staat erf�llen.
)";
}

void anzeigeninvestrech()
{
    R"(
Mit der Investitionsrechnung sollen Investitionsentscheidungen bez�glich der monet�ren Unternehmensziele fundiert und vorbereitet werden. 
Der durch das Investitionsprojekt generierte Zahlungsstrom wird ermittelt und zu einer Zielgr��e, beispielsweise der Rentabilit�t, verdichtet.
)";
}

void anzeigenoekoprinz()
{
    R"(
�konomisches Prinzip:
Das �konomische Prinzip besagt, dass �konomische Entscheidungen auf rationale Weise getroffen werden, 
um knappe Ressourcen effizient zu nutzen, um bestm�gliche Ergebnisse zu erzielen. Es setzt sich aus drei Teilen zusammen:
Minimalprinzip: Auch als Prinzip der sparsamen Mittelverwendung bekannt. Es besagt, dass ein bestimmtes Ziel 
mit minimalen Ressourcen oder Aufwand erreicht werden sollte. Im �konomischen Kontext bedeutet dies, 
dass ein Unternehmen versucht, eine bestimmte Produktionsmenge mit minimalen Kosten zu produzieren, 
um den Gewinn zu maximieren.
Maximalprinzip: Auch als Prinzip der optimalen Zielerreichung bekannt. Es besagt, dass mit gegebenen
Ressourcen das Maximum an Zielen erreicht werden soll. Im �konomischen Kontext bedeutet dies, dass ein 
Unternehmen versucht, mit den vorhandenen Ressourcen den gr��tm�glichen Gewinn zu erzielen.
)";
}

    //*   char auswahl{};
    //   bool beenden = false;
    //   while (!beenden) {*/
    void showbwlmenu()
    {
        //    system("cls"); // Bildschirm l�schen (funktioniert in Windows)
        cout << "\033[1;32m"; // Setzt die Farbe auf hellgr�n
        cout << R"(
     
                                  _.-"\
                              _.-"     \
                           ,-"          \
                          ( \            \
                           \ \            \
                            \ \            \
                             \ \         _.-;
                              \ \    _.-"   :
                               \ \,-"    _.-"
                                \(   _.-"  
                                 `--"
)";
        cout << "\033[0m"; // Setzt die Farbe zur�ck auf den Standardwert
        cout << "Men�:\n";
        cout << "     |  1. Gesetze \n";
        cout << "     |  2. Gesch�ftsprozesse\n";
        cout << "     |  3. ISO Normen\n";
        cout << "     |  4. Bilanz\n";
        cout << "     |  5. Rechtsformen\n";
        cout << "     |  6. Projektmanagement\n";
        cout << "     |  7. Vertragsarten\n";
        cout << "     |  8. Versicherungsarten\n";
        cout << "     |  9. Kapital und Kapitalstruktur\n";
        cout << "     | 10. Beenden (ESC)\n";
        cout << "     | 11. Finanzierungsarten\n";
        cout << "     | 12. Darlehensarten\n";
        cout << "Bitte w�hlen Sie eine Option: ";
    }
    // auswahl = _getch(); // Warten auf Tastatureingabe ohne Enter
    ////   char auswahl[9];
    ////   for (int i = 0; i < 2; ++i) {
    ////       auswahl[i] = _getch();  // Ein Zeichen lesen
    ////       if (auswahl[i] == '\r') // Wenn Enter gedr�ckt wurde, beenden
    ////           break;
    ////       std::cout << auswahl[i];  // Zeichen anzeigen
    ////   }

       //if (auswahl == 27) { // 27 ist der ASCII-Wert f�r die Escape-Taste
       //    beenden = true; // Programm beenden
       //}
    ////   switch (auswahl) {

    int bwlmain() {
        bool running = true;
        int choice;
    while (running)
    {
        showbwlmenu();
        cout << "W�hlen Sie eine Option: ";
        if (!(cin >> choice))
        {
            cin.clear(); // Clear error flags
         //   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << std::endl;
            this_thread::sleep_for(std::chrono::seconds(2)); // Delay for 2 seconds
            continue;
        }
        switch (choice)
        {
        case 1:
            animateTransition();
            clearScreen();
            gesetzemain();
            break;
        case 2:
            animateTransition();
            clearScreen();
            anzeigenGeschaeftsprozesse();
            break;
        case 3:
            animateTransition();
            clearScreen();
            anzeigenISONormen();
            break;
        case 4:
            animateTransition();
            clearScreen();
            anzeigenBilanz();
            break;
        case 5:
            animateTransition();
            clearScreen();
            anzeigenRechtsformen();
            break;
        case 6:
            animateTransition();
            clearScreen();
            anzeigenprojektmanagement();
            break;
        case 7:
            animateTransition();
            clearScreen();
            anzeigenVertragsarten();
            break;
        case 8:
            animateTransition();
            clearScreen();
            anzeigenVersi();
            break;
        case 9:
            animateTransition();
            clearScreen();
            anzeigenSteuern();
            break;
        case 10:
            animateTransition();
            clearScreen();
            anzeigenGesetze();
            break;
        case 11:
            animateTransition();
            clearScreen();
            anzeigenFinanzierungsarten();
            break;
        case 12:
            animateTransition();
            clearScreen();
            anzeigenDarlehensarten();
            break;
        case 13:
            animateTransition();
            clearScreen();
            anzeigenCorporateIdentityCommunicationBehaviorDesign();
            break;
        case 14:
            animateTransition();
            clearScreen();
            anzeigenoekoprinz();
            break;
        case 15:
            animateTransition();
            clearScreen();
            anzeigeninvestrech();
            break;
        case 16:
            animateTransition();
            clearScreen();
            anzeigenUrheberrecht();
            break;
        case 17:
            animateTransition();
            clearScreen();
            anzeigenKreditarten();
            break;
        case 18:
            animateTransition();
            clearScreen();
            anzeigensteuererk();
            break;
        case 19:
            animateTransition();
            clearScreen();
            anzeigenprojektmanagement();
            break;
        case 20:
            animateTransition();
            clearScreen();
            anzeigenUrheberrecht();
            break;
        case 21:
            animateTransition();
            clearScreen();
            anzeigenKreditarten();
            break;
        case 22:
            animateTransition();
            clearScreen();
            anzeigensteuererk();
            break;
   /*     case '27':
            beenden = true;*/       
                case 0:
                    running = false;
                    break;
                default:
                    cout << "Ung�ltige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
                    std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay for 2 seconds
                    break;
        }
    }
    return 0;
}
////
////        if (auswahl == 27) { // 27 ist der ASCII-Wert f�r die Escape-Taste
////            beenden = true; // Programm beenden
////        }
////        else {
////            std::cout << "\nDr�cken Sie eine beliebige Taste, um fortzufahren...";
////            _getch(); // Warten auf Tastendruck, bevor das Men� erneut angezeigt wird
////        }
////        return 0;
////    
////}
 //   std::cout << "\nDr�cken Sie eine beliebige Taste, um fortzufahren...";
 //   _getch(); // Warten auf Tastendruck, bevor das Men� erneut angezeigt wird
