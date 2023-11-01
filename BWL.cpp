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
#include <conio.h> // Für _getch-Funktion
#include "Mainframe.h"
#include "BWLLink.h"
#include "Links.h"
#include "Gesetze.h"

using namespace std;

void anzeigenFinanzierungsregeln() {
    cout << "Finanzierungsregeln sind Regeln und Vorschriften, die die finanzielle Struktur und das Kapital eines Unternehmens regeln. Sie umfassen:\n";
    cout << "Die Finanzierungsregeln sind in der BWL aufgestellte normierte Regeln. Es handelt sich um Mindestanforderungen an die aus einer Bilanz ersichtliche Kapitalstruktur.[1] Im Hinblick auf eine optimale Kapitalstruktur, was eine Kosten minimierende und damit auch Unternehmenswert maximierende Auslegung der Finanzierung bedeutet, haben sich einige Finanzierungsregeln ausgeprägt. Diese zielen nicht nur auf einen optimalen Verschuldungsgrad, sondern auch auf die Erhaltung der Zahlungsfähigkeit, also eine optimale Liquidität. Bei der Bewertung der Liquidität wird vom Grundsatz der Fristenkongruenz ausgegangen. Die meisten der unten genannten Regeln erweisen sich in der Praxis oft als unerreichbar, da sie je nach Branche kaum bis gar nicht umzusetzen sind. Außerdem vermindern sie häufig die Rentabilität zu Gunsten der Liquidität, ermöglichen aber auch, je besser die Regeln erfüllt sind, längere wirtschaftliche Unternehmenskrisen zu überwinden. Aus dieser Perspektive ist eine Anpassung der starren Regeln auf jedes einzelne Unternehmen (Betriebsgröße) oder zumindest auf einen Wirtschaftszweig nötig, um den Praxisbezug herzustellen. Eine besondere Rolle spielt der Leverage-Effekt, das heißt die Hebelwirkung des Fremdkapitals auf die Eigenkapitalrentabilität.";

}

void anzeigenGeschaeftsprozesse() {
    cout << "Geschäftsprozesse sind systematische und wiederholbare Aktivitätsabläufe, die in einer Organisation durchgeführt werden, um Ziele zu erreichen. Beispiele für Geschäftsprozesse sind:\n";

}

void anzeigenBilanz()
{
    R"(
   Es handelt sich um Mindestanforderungen an die aus einer Bilanz ersichtliche Kapitalstruktur.
 Im Hinblick auf eine optimale Kapitalstruktur, was eine Kosten minimierende und damit auch
 Unternehmenswert maximierende Auslegung der Finanzierung bedeutet, haben sich einige Finanzierungsregeln ausgeprägt.
 Diese zielen nicht nur auf einen optimalen Verschuldungsgrad, sondern auch auf die Erhaltung der Zahlungsfähigkeit,
 also eine optimale Liquidität. Bei der Bewertung der Liquidität wird vom Grundsatz der Fristenkongruenz ausgegangen.
 Die meisten der unten genannten Regeln erweisen sich in der Praxis oft als unerreichbar, da sie je nach Branche kaum
 bis gar nicht umzusetzen sind. Außerdem vermindern sie häufig die Rentabilität zu Gunsten der Liquidität, ermöglichen aber auch,
 je besser die Regeln erfüllt sind, längere wirtschaftliche Unternehmenskrisen zu überwinden. Aus dieser Perspektive ist
 eine Anpassung der starren Regeln auf jedes einzelne Unternehmen (Betriebsgröße) oder zumindest auf einen Wirtschaftszweig nötig,
 um den Praxisbezug herzustellen. Eine besondere Rolle spielt der Leverage-Effekt, das heißt die Hebelwirkung des Fremdkapitals auf die 
Eigenkapitalrentabilität.";

Übersicht aller Vermögensbestandteile, finanzielle Buchführung.
)";
}

void anzeigenISONormen() {
    cout << "Die ISO-Normen, auch als Internationale Normen der Internationalen Organisation für Normung (ISO) bekannt, sind eine Reihe von international anerkannten Standards, die entwickelt wurden, um sicherzustellen, dass Produkte, Dienstleistungen und Systeme weltweit einheitliche Qualitäts- und Sicherheitsstandards erfüllen. Diese Normen werden von Expertengremien aus verschiedenen Ländern entwickelt und regelmäßig überarbeitet, um sicherzustellen, dass sie den aktuellen Anforderungen und technologischen Entwicklungen entsprechen.";

    cout << "\nDie ISO-Normen sind in vielen Branchen weit verbreitet und dienen dazu, die Qualität, Sicherheit und Effizienz von Produkten und Dienstleistungen zu verbessern. Hier sind einige der beliebtesten ISO-Normen und ihre Anwendungsgebiete:\n";

    cout << "ISO 9001 - Qualitätsmanagement: ISO 9001 ist eine der bekanntesten ISO-Normen und legt die Anforderungen an ein Qualitätsmanagementsystem fest. Diese Norm hilft Organisationen, die Qualität ihrer Produkte und Dienstleistungen zu verbessern und die Kundenzufriedenheit zu steigern.\n";

    cout << "ISO 14001 - Umweltmanagement: ISO 14001 legt die Anforderungen an Umweltmanagementsysteme fest. Sie hilft Organisationen dabei, umweltfreundlichere Praktiken zu entwickeln, Umweltauswirkungen zu reduzieren und die Einhaltung von Umweltvorschriften sicherzustellen.\n";

    cout << "ISO 27001 - Informationssicherheitsmanagement: Diese Norm definiert Anforderungen für Informationssicherheitsmanagementsysteme. Sie ist besonders wichtig für Unternehmen, die vertrauliche Informationen und Daten verarbeiten, um sicherzustellen, dass diese sicher geschützt sind.\n";

    cout << "ISO 45001 - Arbeitsschutzmanagement: ISO 45001 legt Anforderungen für Arbeitsschutzmanagementsysteme fest. Sie soll Organisationen dabei unterstützen, sicherere Arbeitsumgebungen zu schaffen und Unfälle und Verletzungen am Arbeitsplatz zu minimieren.\n";

    cout << "ISO 22000 - Lebensmittelsicherheit: Diese Norm ist für Organisationen in der Lebensmittelindustrie relevant und stellt Anforderungen an Lebensmittelsicherheitsmanagementsysteme. Sie dient dazu, sicherzustellen, dass Lebensmittel sicher hergestellt und geliefert werden.\n";

    cout << "ISO 50001 - Energiemanagement: ISO 50001 legt Anforderungen für Energiemanagementsysteme fest und hilft Organisationen, Energieeffizienz zu steigern und Energiekosten zu senken.\n";

    cout << "ISO 26000 - Soziale Verantwortung von Organisationen: Diese Norm bietet Leitlinien für soziale Verantwortung und unterstützt Organisationen dabei, nachhaltige und sozial verantwortliche Geschäftspraktiken zu entwickeln und umzusetzen.\n";

    cout << "ISO 13485 - Qualitätsmanagementsysteme für Medizinprodukte: Diese Norm ist speziell für Hersteller von Medizinprodukten relevant und legt Anforderungen an Qualitätsmanagementsysteme für diese Branche fest.\n";
}

void anzeigenFinanzierungsarten() {
    cout << "Beispiele für Finanzierungsarten sind: \n";
    cout << "Finanzierungsarten:\n";
    cout << "1. Innenfinanzierung\n";
    cout << " 2. Selbstfinanzierung\n";
    cout << "  3. Finanzierung als Rückstellung\n";
    cout << "   4. Finanzierung als Abschreibung\n";
    cout << "    5. Kapitalfreisetzungseffekt\n";
    cout << "     6. Finanzierung aus Rationalisierungsmaßnahmen\n";
    cout << "      7. Vermögensumschichtung\n";
}

void anzeigenmagischesdreieck()
{
    R"(

         Qualität
            / \
           /   \
          /Ziel \
         /       \
   Zeit ---------- Kosten


Qualität: Die Qualität eines Produkts, einer Dienstleistung oder eines Projekts. Dies bezieht sich darauf,
 wie gut etwas gemacht ist oder wie gut es den Anforderungen und Erwartungen entspricht.

Zeit: Die Zeit, die benötigt wird, um ein Projekt abzuschließen oder ein Produkt zu erstellen.
 Zeit ist ein entscheidender Faktor in vielen Projekten, da Verzögerungen Auswirkungen auf den Erfolg und die Kosten haben können.

Kosten: Die finanziellen Ressourcen, die benötigt werden, um ein Projekt oder ein Produkt zu realisieren. 
Kosten sind ein kritischer Aspekt, da sie Auswirkungen auf die Rentabilität und den finanziellen Erfolg eines Unternehmens haben.

Die Beziehung zwischen diesen drei Elementen wird als "magisches Dreieck" bezeichnet, weil es schwierig ist, 
alle drei gleichzeitig zu optimieren. Wenn Sie eine der Größen ändern, wirkt sich das oft auf die anderen aus. 
Zum Beispiel, wenn Sie die Qualität erhöhen möchten, könnten sich die Kosten erhöhen und/oder die Zeit verlängern.
)";
}

void anzeigenmagischesviereck()
{
    R"(



         Preisniveaustabilität
                / \
               /   \
              /     \
             /       \
            /         \
           /           \
Vollbeschäftigung  -  Außenwirtschaftliches Gleichgewicht
           \           /
            \         /
             \       /
              \     /
               \   /
                \ /
          Wirtschaftswachstum


Preisniveaustabilität: Dieses Ziel zielt darauf ab, Inflation oder Deflation auf einem stabilen und niedrigen Niveau zu halten. Eine moderate Inflation wird oft als gesund angesehen, da sie Anreize für Investitionen und Konsum schafft, jedoch sollte sie in einem akzeptablen Rahmen gehalten werden, um die Kaufkraft der Bevölkerung zu erhalten.

Vollbeschäftigung: Vollbeschäftigung bedeutet, dass möglichst viele Menschen, die arbeiten wollen, auch tatsächlich Arbeit finden. Es wird angestrebt, die Arbeitslosenquote niedrig zu halten und die Beschäftigung zu fördern, um soziale Stabilität zu gewährleisten und die Lebensqualität der Bevölkerung zu verbessern.

Außenwirtschaftliches Gleichgewicht: Dieses Ziel strebt an, ein Gleichgewicht in den Außenhandelsbeziehungen zu erreichen. Es bedeutet, dass Exporte und Importe ausgeglichen sein sollten, um die Zahlungsbilanz zu stabilisieren und die wirtschaftliche Unabhängigkeit zu sichern.

Wirtschaftswachstum: Dieses Ziel zielt darauf ab, das langfristige Wirtschaftswachstum zu fördern und das Bruttoinlandsprodukt (BIP) zu steigern. Ein kontinuierliches, nachhaltiges Wirtschaftswachstum wird als entscheidend angesehen, um den Lebensstandard zu verbessern und zukünftige Generationen besser abzusichern.
)";
}

void anzeigenDarlehensarten() {
    R"(
Hypothekendarlehen (Immobilienkredite):
Hypothekendarlehen werden verwendet, um Immobilien zu kaufen oder zu refinanzieren. Die Immobilie dient als Sicherheit für das Darlehen.
Autokredite:
Autokredite werden genutzt, um den Kauf eines Fahrzeugs zu finanzieren. Das Fahrzeug dient als Sicherheit für das Darlehen.
Studentendarlehen:
Studentendarlehen werden genutzt, um die Ausbildungskosten für Studenten zu decken. Diese können staatlich unterstützt oder privat sein.
Persönliche Darlehen:
Persönliche Darlehen sind nicht durch Sicherheiten abgesichert und können für verschiedene persönliche Ausgaben verwendet werden, z.B. Schuldenkonsolidierung, medizinische Ausgaben, Urlaub usw.
Kreditkartenkredite:
Kreditkarten ermöglichen Kreditlinien, die für Einkäufe oder Barabhebungen genutzt werden können. Die ausstehenden Beträge müssen monatlich zurückgezahlt werden.
Geschäftsdarlehen:
Geschäftsdarlehen werden Unternehmen gewährt, um Betriebskosten zu decken, Ausrüstung zu kaufen, Expansionen durchzuführen oder andere geschäftsrelevante Ausgaben zu finanzieren.
Baukredite:
Baukredite werden genutzt, um den Bau oder die Renovierung von Immobilien zu finanzieren. Die Auszahlung erfolgt in Tranchen gemäß dem Baufortschritt.
Konsumentenkredite:
Konsumentenkredite können für den Kauf von Haushaltsgeräten, Möbeln oder andere Konsumgüter verwendet werden.
Mikrokredite:
Mikrokredite sind kleine Darlehen, die an Einzelpersonen oder kleine Unternehmer in wirtschaftlich benachteiligten Regionen vergeben werden, um ihre Geschäftstätigkeit zu unterstützen.
Darlehen mit festen oder variablen Zinssätzen:
Je nach Zinsstruktur können Darlehen entweder feste Zinssätze haben, die während der Laufzeit konstant bleiben, oder variable Zinssätze, die sich basierend auf einem Referenzzinssatz ändern können.
Revolvierende Kredite:
Revolvierende Kredite ermöglichen es dem Kreditnehmer, den Kreditbetrag wiederholt zu nutzen, nachdem er zurückgezahlt wurde, ähnlich wie bei Kreditkarten.
Eigentümerdarlehen:
Eigentümerdarlehen sind Darlehen, bei denen eine bereits abbezahlte Immobilie als Sicherheit genutzt wird.
Annuitätendarhlehnen
)";
}

void anzeigenVertragsarten() {
    R"(
Arbeitsvertrag:
Ein Vertrag zwischen einem Arbeitgeber und einem Arbeitnehmer, der die Bedingungen der Beschäftigung regelt.

Mietvertrag:
Ein Vertrag, der die Bedingungen für die Miete einer Immobilie festlegt, einschließlich Mietdauer, Mietpreis und Pflichten des Mieters und Vermieters.

Kaufvertrag:
Ein Vertrag, der den Verkauf von Waren oder Immobilien regelt und die Bedingungen für den Kauf, den Preis und die Lieferung festlegt.

Dienstleistungsvertrag:
Ein Vertrag, der die Erbringung von Dienstleistungen durch einen Dienstleister an einen Kunden regelt, einschließlich Leistungsbeschreibungen, Vergütung und Verpflichtungen.

Lizenzvertrag:
Ein Vertrag, der dem Lizenznehmer das Recht gewährt, geistiges Eigentum (z.B. Software, Patente, Marken) des Lizenzgebers zu nutzen, unter bestimmten Bedingungen und Einschränkungen.

Kooperationsvertrag:
Ein Vertrag, der die Zusammenarbeit zwischen zwei oder mehr Parteien für ein bestimmtes Projekt oder Ziel regelt, einschließlich der Aufgabenverteilung, Verantwortlichkeiten und Gewinnbeteiligung.

Pachtvertrag:
Ein Vertrag, der die Nutzung von Immobilien oder Grundstücken regelt, bei dem der Pächter dem Verpächter Miete zahlt und bestimmte Bedingungen erfüllt.

Partnerschaftsvertrag:
Ein Vertrag, der die Bedingungen und Regelungen für eine Partnerschaft zwischen zwei oder mehr Parteien festlegt, einschließlich der Aufgabenverteilung, Gewinnbeteiligung und Verantwortlichkeiten.

Versicherungsvertrag:
Ein Vertrag, der die Bedingungen und Leistungen einer Versicherungspolice regelt, einschließlich der Versicherungsdeckung, Prämien und Ausschlüsse.

Kreditvertrag:
Ein Vertrag zwischen einem Kreditgeber und einem Kreditnehmer, der die Bedingungen für die Kreditaufnahme, Rückzahlung und Zinssätze festlegt.
)";
}

void anzeigenKreditarten() {
    R"(
Avalkredit
Der Avalkredit ist im Bankwesen eine Übernahme von Bürgschaften,Garantieen,
oder ähnliche Eventualverbindlichkeiten durch Kreditinstitute im Auftrag von Bankkunden im Rahmen des Kreditgeschäftes.
Dokumentenakkreditiv:
Ein Dokumentenakkreditiv, auch bekannt als Letter of Credit (LC), ist eine Zahlungsvereinbarung, bei der eine Bank im Auftrag ihres Kunden eine Zahlung an den Verkäufer leistet, vorausgesetzt, dieser erfüllt bestimmte im Akkreditiv festgelegte Dokumentationsanforderungen.
Kontokorrentkredit:
Ein Kontokorrentkredit ist eine kurzfristige Kreditlinie, die einem Unternehmen oder einer Person gewährt wird, 
um kurzfristige Finanzierungsbedürfnisse abzudecken. Es ermöglicht, das Konto zu überziehen, bis zu einem vereinbarten Kreditlimit.
Kundenkredit:
Ein Kundenkredit bezieht sich auf eine Kreditvereinbarung zwischen einem Kreditgeber
 (normalerweise eine Bank oder ein Finanzinstitut) und einem Kunden. Der Kreditgeber gewährt dem Kunden einen bestimmten Betrag an Finanzmitteln,
 die dieser zurückzahlen muss, oft zu einem festgelegten Zinssatz und in regelmäßigen Raten.
Lieferantenkredit:
Ein Lieferantenkredit tritt auf, wenn ein Lieferant Waren oder Dienstleistungen an einen Kunden liefert, bevor die Zahlung erfolgt.
 Dies ist eine Art von kurzfristiger Finanzierung, die es dem Kunden ermöglicht, die erhaltenen Güter oder Dienstleistungen zu nutzen, bevor er dafür bezahlt.
Wechselkredit:
Ein Wechselkredit bezieht sich auf eine Form des kurzfristigen Kredits, der durch die Ausstellung eines Wechsels erfolgt. 
Ein Wechsel ist eine schriftliche Anweisung an eine Bank oder einen anderen Zahlungsdienstleister, 
einen bestimmten Betrag zu einem bestimmten Datum an den Inhaber des Wechsels zu zahlen.
Hypothekendarlehen:
Ein Hypothekendarlehen ist ein Darlehen, bei dem Immobilien als Sicherheit für das geliehene Geld dienen. 
Es wird häufig für den Kauf von Immobilien verwendet, und die Immobilie dient als Sicherheit für das Darlehen.
Konsumentendarlehen:
Konsumentendarlehen sind Darlehen, die an Einzelpersonen für persönliche Ausgaben wie Autokauf, Bildung, 
medizinische Kosten oder andere allgemeine Ausgaben vergeben werden. Sie können gesichert oder ungesichert sein, abhängig von den Bedingungen.
Autokredit:
Ein Autokredit ist speziell für den Kauf eines Fahrzeugs gedacht. Das Fahrzeug dient als Sicherheit für das Darlehen, 
und der Kreditnehmer zahlt das Darlehen in monatlichen Raten zurück.
Geschäftsdarlehen:
Geschäftsdarlehen werden Unternehmen gewährt, um Betriebskapital zu erhalten, Investitionen zu tätigen, 
Ausrüstung zu kaufen oder andere geschäftliche Bedürfnisse zu decken.
Studentendarlehen:
Studentendarlehen sind speziell für Bildungszwecke konzipiert. Sie ermöglichen es Studenten, ihre Ausbildung zu finanzieren, 
und die Rückzahlung beginnt normalerweise nach dem Abschluss.
Baukredit:
Baukredite werden genutzt, um den Bau oder die Renovierung von Immobilien zu finanzieren. 
Die Rückzahlung erfolgt normalerweise nach Abschluss des Projekts.
Ratenkredit:
Bei einem Ratenkredit zahlt der Kreditnehmer das Darlehen in regelmäßigen Raten zurück, 
die aus einem Teil des Kapitals und einem Zinsanteil bestehen
)";
}

void anzeigenpdca()
{
    R"(
Der DemingKreis und die PDCA (Plan-Do-Check-Act) wird in der Qualitätssicherung oft genutzt,
er besteht aus folgenden Punkten:
Planen (Plan):
In dieser Phase werden Ziele und Prozesse identifiziert, die verbessert werden sollen. Es geht darum, klare Ziele zu setzen, mögliche Hindernisse zu identifizieren, Lösungsansätze zu entwickeln und Ressourcen zu planen.

Umsetzen (Do):
Hier werden die geplanten Maßnahmen und Prozesse implementiert. Es ist wichtig, die geplanten Aktionen durchzuführen und sicherzustellen, dass alles nach den vorher festgelegten Plänen und Spezifikationen verläuft.

Überprüfen (Check):
In dieser Phase wird überprüft, ob die implementierten Maßnahmen die gewünschten Ergebnisse erzielen und den Zielen entsprechen. Daten werden gesammelt und analysiert, um festzustellen, ob Abweichungen auftreten und ob weitere Anpassungen erforderlich sind.

Handeln (Act):
Basierend auf den Erkenntnissen aus der Überprüfung werden Anpassungen vorgenommen, um die Effektivität und Effizienz der Prozesse zu verbessern. Wenn Verbesserungen erzielt wurden, werden diese standardisiert und in den Arbeitsablauf integriert. Wenn notwendig, beginnt der Zyklus erneut, um weitere Verbesserungen anzustreben.
)";
}

void anzeigenRechtsformen() {
    R"(
Einzelunternehmen (e.K.):

Einzelunternehmer führt das Unternehmen alleine und trägt das volle persönliche Haftungsrisiko.
Offene Handelsgesellschaft (OHG):

Zusammenschluss von zwei oder mehreren natürlichen oder juristischen Personen (Personengesellschaft).
Die Gesellschafter haften persönlich, unbeschränkt und solidarisch.
Kommanditgesellschaft (KG):

Besteht aus Komplementären (unbeschränkte Haftung) und Kommanditisten (beschränkte Haftung auf ihre Einlage).
Gesellschaft mit beschränkter Haftung (GmbH):

Kapitalgesellschaft mit mindestens einem Gesellschafter.
Haftung beschränkt sich auf das Gesellschaftsvermögen.
Unternehmergesellschaft (haftungsbeschränkt) (UG):

Variante der GmbH, speziell für Gründer mit geringem Stammkapital.
Aktiengesellschaft (AG):

Kapitalgesellschaft, deren Grundkapital in Aktien zerlegt ist.
Aktionäre haften nur mit ihrer Einlage.
Europäische Gesellschaft (SE):

Gesellschaft mit Sitz in einem EU-Mitgliedsstaat, die nach einheitlichen Regeln gegründet und geführt wird.
Genossenschaft (eG):

Zusammenschluss von Personen oder Unternehmen, um gemeinsame wirtschaftliche Interessen zu verfolgen.
Mitglieder haften in der Regel beschränkt auf ihre Einlage.
Gesellschaft bürgerlichen Rechts (GbR):

Zusammenschluss von mindestens zwei natürlichen oder juristischen Personen ohne festes Kapital.
Partnerschaftsgesellschaft (PartG):

Zusammenschluss von Freiberuflern, z.B. Anwälten, Steuerberatern, Ärzten, zu einer Partnerschaft mit gemeinschaftlicher Berufsausübung.
Stiftung:
Rechtliche Einrichtung, bei der Vermögen zur Verfolgung eines bestimmten gemeinnützigen Zwecks eingesetzt wird.
Einzelkaufmann (e.Kfm.):
Natürliche Person, die ein Handelsgewerbe betreibt, ohne eine bestimmte Rechtsform anzunehmen.
)";
}

void anzeigenSteuern()
{
    R"(

Körperschaftssteuer: Die Körperschaftssteuer ist eine Steuer, die von juristischen Personen wie Kapitalgesellschaften (z. B. GmbHs und AGs) auf ihre Gewinne erhoben wird. Es handelt sich um eine Unternehmenssteuer, die auf den erzielten Gewinn vor Steuern berechnet wird.

Einkommenssteuer: Die Einkommenssteuer ist eine Steuer, die von natürlichen Personen auf ihr Einkommen erhoben wird. Dieses Einkommen kann aus verschiedenen Quellen stammen, einschließlich Gehältern, Mieteinnahmen, Kapitalerträgen und selbstständiger Arbeit.

Umsatzsteuer: Die Umsatzsteuer (auch Mehrwertsteuer genannt) ist eine Verbrauchssteuer, die auf den Verkauf von Waren und Dienstleistungen erhoben wird. Sie wird in der Regel von Unternehmen an den Staat abgeführt und auf den Endverbraucher übertragen. Dies bedeutet, dass Endverbraucher die Umsatzsteuer auf den von ihnen gekauften Produkten und Dienstleistungen bezahlen.

Gewerbesteuer: Die Gewerbesteuer ist eine Steuer, die von Unternehmen auf ihre Gewinne erhoben wird. Im Gegensatz zur Körperschaftssteuer betrifft die Gewerbesteuer nicht die Rechtsform des Unternehmens, sondern hängt von der Art des Gewerbes und dem erzielten Gewinn ab. Sie ist eine kommunale Steuer, was bedeutet, dass die Höhe der Steuer von der jeweiligen Gemeinde festgelegt wird.

Kapitalertragsteuer: Die Kapitalertragsteuer ist eine Steuer, die von Unternehmen auf ihre Kapitalerträge erhoben wird.

Grundsteuer: Diese Steuer wird auf Grundstücke und Gebäude erhoben. Die Höhe der Grundsteuer basiert in der Regel auf dem Einheitswert und dem Hebesatz, der von den Gemeinden festgelegt wird.

Erbschaftssteuer und Schenkungssteuer: Diese Steuern werden auf ererbtes oder geschenktes Vermögen erhoben. Die Steuersätze können je nach Verwandtschaftsgrad und Höhe des übertragenen Vermögens variieren.

Kfz-Steuer: Diese Steuer wird für den Besitz und die Nutzung von Kraftfahrzeugen erhoben. Die Höhe hängt von verschiedenen Faktoren ab, wie z.B. Hubraum, CO2-Emissionen und Art des Fahrzeugs.

Versicherungssteuer: Diese Steuer wird auf Versicherungsprämien für verschiedene Versicherungsarten (z.B. Lebensversicherungen, Sachversicherungen) erhoben.

Tabaksteuer und Alkoholsteuer: Diese Steuern werden auf Tabakprodukte und alkoholische Getränke erhoben, um den Konsum zu regulieren und Einnahmen für den Staat zu generieren.

Luftverkehrsabgabe: Eine Steuer, die auf Flugreisen erhoben wird, um die Umweltauswirkungen des Luftverkehrs auszugleichen.

Energiesteuer: Eine Steuer auf Energieprodukte wie Benzin, Diesel, Erdgas und Strom. Sie soll Anreize für einen sparsamen Energieverbrauch setzen und Einnahmen für den Staat generieren.

Zweitwohnungssteuer: Diese Steuer wird von Personen erhoben, die eine Zweitwohnung besitzen oder nutzen.

Mehrwertsteuer auf Importe (Einfuhrumsatzsteuer): Eine Steuer auf Waren und Dienstleistungen, die aus dem Ausland importiert werden.

Hundesteuer: Eine Steuer, die auf den Besitz von Hunden erhoben wird, um die Kommunen zu finanzieren und die Haltung von Hunden zu regulieren.
)";
}

void anzeigenUrheberrecht()
{
    R"(
Das Urheberrecht ist ein Rechtsgebiet, das Kreatoren und Schöpfern das ausschließliche Recht gibt, 
ihre kreativen Werke zu nutzen und zu kontrollieren. Es schützt die geistige Schöpfung, nicht die Ideen an sich. 
Es ist ein wesentlicher Bestandteil des geistigen Eigentums und soll Anreize für Künstler, Autoren, Musiker, 
Designer, Entwickler und andere schaffen, indem es ihnen ermöglicht, von ihrer Arbeit zu 
profitieren und ihre Investitionen zu schützen.

Hier sind einige wichtige Punkte zum Urheberrecht:

1. **Schutzumfang**: Das Urheberrecht schützt Werke der Literatur, Kunst, Musik, Film, Architektur, 
Software und anderen kreativen Ausdrucksformen. Beispiele sind Bücher, Gemälde, Musikstücke, Filme, 
Softwarecodes und Architekturpläne.

2. **Urheberrechtliche Rechte**: Der Urheber (der Schöpfer des Werks) hat bestimmte Rechte an seinem Werk, 
darunter das Recht auf Vervielfältigung, Verbreitung, öffentliche Aufführung, Bearbeitung und Übersetzung.

3. **Urheberrechtsdauer**: Die Dauer des Urheberrechts variiert je nach Land, kann aber oft sehr lange 
dauern (in der Regel bis zu 70 Jahre nach dem Tod des Urhebers). Danach fällt das Werk in die Public 
Domain und kann frei genutzt werden.

4. **Anmeldung und Schutz**: In den meisten Ländern entsteht das Urheberrecht automatisch, sobald ein 
Werk in einer festen Form festgehalten wird. Eine förmliche Registrierung ist in vielen Ländern jedoch 
empfehlenswert, da sie bestimmte Rechte stärkt und ermöglicht, Schadensersatz bei Verletzung einzufordern.

5. **Fair Use / Fair Dealing**: In einigen Ländern gibt es Ausnahmen im Urheberrechtsgesetz für bestimmte Verwendungen, 
wie Kritik, Kommentare, Nachrichtenberichterstattung, Bildung und Forschung. Diese Ausnahmen werden als "Fair Use" 
in den USA und als "Fair Dealing" in anderen Ländern bezeichnet.

6. **Digitales Zeitalter und Internet**: Das digitale Zeitalter hat neue Herausforderungen für das Urheberrecht 
mit sich gebracht, insbesondere in Bezug auf die Verbreitung und Nutzung von Inhalten im Internet. 
Fragen zu Filesharing, Streaming, Open Source-Software und Creative Commons-Lizenzen sind nur einige der aktuellen Themen.

7. **Internationale Harmonisierung**: Das Urheberrecht ist in verschiedenen Ländern unterschiedlich geregelt. 
Internationale Abkommen wie der TRIPS-Vertrag (Teil des Übereinkommens über Handelsaspekte der Rechte des 
geistigen Eigentums) streben jedoch an, eine gewisse Harmonisierung und Schutzstandards weltweit zu schaffen.

Es ist wichtig zu beachten, dass das Urheberrecht eine komplexe rechtliche Materie ist, und es ist ratsam, 
bei Fragen oder Bedenken einen Rechtsanwalt oder Experten für geistiges Eigentum zu konsultieren.
)";
}

void anzeigenMarktKundenbeziehung()
{
    R"(
Markt- und Kundenbeziehungen sind zentral für den Erfolg eines Unternehmens. 
Eine gute Beziehung zu den Kunden hilft bei der Kundenbindung und ermöglicht es Unternehmen, 
ihre Produkte und Dienstleistungen besser an die Bedürfnisse des Marktes anzupassen.
)";
}

void anzeigenMarktstrukturenUnternehmenszieleUnternehmensleitlinien()
{
    R"(
Marktstrukturen beschreiben, wie ein Markt organisiert ist, z.B. Wettbewerbsformen wie Monopol, 
Oligopol oder vollkommener Wettbewerb. Unternehmensziele sind die angestrebten Resultate, 
die ein Unternehmen erreichen möchte. Unternehmensleitlinien sind die Grundprinzipien, nach denen ein Unternehmen handelt.
)";
}

void anzeigenCorporateIdentityCommunicationBehaviorDesign()
{
    R"(
Corporate Identity umfasst das Erscheinungsbild, die Werte und die Identität eines Unternehmens. 
Corporate Communication bezieht sich auf die Art und Weise, wie das Unternehmen mit internen und 
externen Stakeholdern kommuniziert. Corporate Behavior bezieht sich auf das Verhalten und die Kultur 
innerhalb des Unternehmens. Corporate Design betrifft das visuelle Erscheinungsbild des Unternehmens.
)";
}

void anzeigenOperativestrategischeZiele()
{
    R"(
Operative Ziele sind kurzfristige, konkrete Ziele, während strategische Ziele langfristige, übergeordnete Ziele sind.
)";
}

void anzeigenMotivationMaslowKompetenzen()
{
    R"(
Motivation bezieht sich auf die inneren und äußeren Faktoren, die das Verhalten und die Leistung von Mitarbeitern 
beeinflussen. Maslows Bedürfnispyramide ist eine Theorie, die die Hierarchie der menschlichen Bedürfnisse beschreibt. 
Kompetenzen beziehen sich auf die Fähigkeiten, Kenntnisse und Erfahrungen, die zur erfolgreichen 
Durchführung von Aufgaben benötigt werden.
)";
}

void anzeigenMarktforschungprimäresekundäreDaten()
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
Der Preis erfüllt verschiedene Funktionen wie Signalfunktion, Lenkungsfunktion und Einkommensfunktion. 
Hoch- und Niedrigpreisstrategien beziehen sich auf die Preispositionierung von Produkten. 
Rabattpolitik bezieht sich auf die Verwendung von Rabatten als Marketinginstrument.
)";
}

void anzeigenDifferenzierungpsychologischerPreisZahlungsbedingungen()
{
    R"(
Differenzierung bezieht sich auf die Schaffung von Unterscheidungsmerkmalen für ein Produkt, 
um sich von der Konkurrenz abzuheben. Psychologischer Preis bezieht sich auf die Preisgestaltung, 
die auf psychologische Faktoren abzielt. Zahlungsbedingungen sind die festgelegten Bedingungen, 
unter denen Zahlungen erfolgen.
)";
}

void anzeigenLieferbedingungenINCOTermsKreditpolitikLeasingFactoring()
{
    R"(
Lieferbedingungen regeln die Bedingungen für den Transport und die Lieferung von Waren. 
INCO-Terms sind internationale Regeln zur Auslegung von Lieferverträgen. Kreditpolitik bezieht sich auf 
die Strategien zur Kreditvergabe. Leasing und Factoring sind Finanzierungsinstrumente für Unternehmen.
)";
}

void anzeigenHandelsklauselnKreditpolitikMindestreserveOffenmarktpolitik()
{
    R"(
Handelsklauseln sind Bestimmungen in Handelsverträgen. Die Kreditpolitik regelt die Kreditvergabe und -rückzahlung. 
Mindestreserve ist der Mindestbetrag, den Banken als Reserve halten müssen. Offenmarktpolitik bezieht sich auf 
Maßnahmen der Zentralbank zur Steuerung der Geldmenge und der Zinsen.
)";
}

void anzeigenGewinnberechnungOHGKG()
{
    R"(
Die Gewinnberechnung für Offene Handelsgesellschaften (OHG) und Kommanditgesellschaften (KG) 
erfolgt auf Grundlage der Gesellschaftsverträge und Beteiligungsverhältnisse.
)";
}

void anzeigenDatenschutzgrundverordnungDSGVO()
{
    R"(
Die Datenschutzgrundverordnung der EU regelt den Datenschutz und die Privatsphäre für alle Personen innerhalb der EU. 
Artikel 1 bis 18 beziehen sich auf die Grundprinzipien und Rechte der betroffenen Personen.
)";
}

void anzeigenProduktpolitikDistributionspolitikKommunikationspolitik()
{
    R"(
Produktpolitik umfasst die Gestaltung von Produkten, Marken und Produktvariationen. 
Distributionspolitik bezieht sich auf Entscheidungen über Vertriebskanäle. Kommunikationspolitik 
beinhaltet die Planung und Umsetzung der Kommunikation mit Kunden und anderen Interessengruppen.
)";
}

void anzeigenMarktpotentialWachstumReifungSättigungEliminierung()
{
    R"(
Marktpotential bezieht sich auf das ungenutzte Marktvolumen. Wachstum ist die Phase, in der ein Markt expandiert. 
Reifung ist die Phase, in der das Marktwachstum abflacht. Sättigung ist der Punkt, an dem der Markt gesättigt ist. 
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
Prozesscontrolling bezeichnet die Planung und Kontrolle von Geschäftsprozessen sowie die dafür notwendige Informationensversorgung und Koordination.
Schwerpunkt der Planung ist die Definition von Ziel und Messgrößen und deren Kontrolle in Geschäftsprozessen.
Das Management Informations System ist eine Software das dieses Controlling erleichtert.
Beispiele dafür sind das V-Model und das Spiralmodel.
)";
}

void anzeigenprojektmanagement()
{
    R"(
Projektmanagement ist eine strukturierte Herangehensweise zur Planung, Durchführung, Überwachung und Steuerung von Projekten, 
um die definierten Ziele und Anforderungen innerhalb bestimmter Zeit-, Kosten- und Qualitätsvorgaben zu erreichen. 
Es beinhaltet die effektive Nutzung von Ressourcen, das Management von Risiken, Kommunikation und Zusammenarbeit 
im Team sowie die Einhaltung von Projektmeilensteinen.
Im Allgemeinen umfasst Projektmanagement die folgenden Schritte:

Initiierung: Klärung der Projektziele, Festlegung des Umfangs und der Rahmenbedingungen,
Identifizierung der Stakeholder und Erstellung des Projektauftrags.
Planung: Entwicklung eines detaillierten Projektplans, Aufstellung von Arbeitspaketen, 
Ressourcenallokation, Zeit- und Kostenabschätzung sowie Risikomanagement.
Durchführung: Umsetzung des Projektplans, Koordination der Teammitglieder, Überwachung des Fortschritts und Sicherstellung,
dass das Projekt im Einklang mit den definierten Anforderungen und Zielen bleibt.
Überwachung und Steuerung: Kontinuierliche Überprüfung des Projektstatus, 
Vergleich von tatsächlichem Fortschritt mit dem geplanten Fortschritt,
Anpassung des Plans bei Abweichungen und Implementierung von Korrekturmaßnahmen.
Abschluss: Abschluss des Projekts, Überprüfung der Zielerreichung, Dokumentation von Erfahrungen und Lernen für zukünftige Projekte.
Effektives Projektmanagement zielt darauf ab, die Qualität der Arbeit zu maximieren, Risiken zu minimieren und sicherzustellen,
dass das Projekt erfolgreich abgeschlossen wird, um den gewünschten Nutzen zu erzielen.
)";
}

void anzeigenTotalQualityManagement()
{
    R"(
TQM bezeichnet als umfassendes QM Qualitätsmanagement nach der DIN eine "durchgängige,
 fortwährende und alle Bereiche des Unternehmens
erfassende, aufzeichnende, sichtende, organisierende, und kontrollierende Tätigkeit mit dem Ziel,
 Qualität als das unternehmerische Ziel permanent zu garantieren.
Grundsätze des TQL
Kundenorientierung
Einbeziehung der Menschen
Führung durch Zielorientierung
Sachlicher Ansatz zur Entscheidungsfindung
Prozessorientierter Ansatz zur Verfahrensoptimierung
Systemorientierter Ansatz
Ständige Verbesserung ( KVP)
Lieferantenbeziehung zum gegenseitigen Nutzen
)";
}

void anzeigenVersi()
{
    R"(
Kfz-Versicherung (Kraftfahrzeugversicherung):
Eine Kfz-Versicherung deckt Schäden oder Verluste an Ihrem Fahrzeug sowie Haftpflichtansprüche Dritter ab, 
die durch den Betrieb des Fahrzeugs entstehen.

Krankenversicherung:
Eine Krankenversicherung übernimmt die Kosten für medizinische Behandlungen, Arzneimittel, Krankenhausaufenthalte 
und andere Gesundheitsleistungen, abhängig von den Bedingungen des Versicherungsvertrags.

Lebensversicherung:
Eine Lebensversicherung bietet finanziellen Schutz für Angehörige oder Begünstigte im Falle des Todes 
des Versicherungsnehmers. Sie kann auch als Investition genutzt werden.

Hausratversicherung:
Eine Hausratversicherung deckt Schäden oder Verluste von persönlichem Eigentum in Ihrem Haus ab, 
wie z. B. Möbel, Elektronik, Schmuck und andere Gegenstände.

Haftpflichtversicherung:
Die Haftpflichtversicherung deckt Schäden ab, die Sie einer anderen Person oder ihrem Eigentum zufügen. 
Dies kann in verschiedenen Kontexten auftreten, z. B. Privathaftpflicht, Berufshaftpflicht oder Produkthaftpflicht.

Berufsunfähigkeitsversicherung:
Diese Versicherung zahlt eine regelmäßige Rente aus, wenn Sie aufgrund von Krankheit oder Unfall dauerhaft 
berufsunfähig sind und nicht mehr arbeiten können.

Unfallversicherung:
Eine Unfallversicherung zahlt im Falle eines Unfalls eine bestimmte Geldsumme aus oder deckt die Kosten 
für medizinische Behandlung und Rehabilitation ab.

Rechtsschutzversicherung:
Eine Rechtsschutzversicherung deckt die Kosten für rechtliche Auseinandersetzungen und bietet Rechtshilfe 
in verschiedenen Rechtsangelegenheiten.

Reiseversicherung:
Eine Reiseversicherung deckt verschiedene Risiken ab, die während einer Reise auftreten können, 
wie z. B. Reiseabbruch, Krankheitskosten im Ausland, Gepäckverlust und Reiserücktritt.

Güterversicherung (Frachtversicherung):
Diese Versicherung deckt die Waren ab, während sie von einem Ort zum anderen transportiert werden. 
Sie schützt gegen Schäden oder Verluste, die während des Transports auf dem Land, auf See oder in der Luft auftreten können.

Transportmittelversicherung:
Diese Versicherung deckt das Transportmittel selbst ab, wie beispielsweise Schiffe, Flugzeuge, Lastwagen oder Züge. 
Sie bietet Schutz gegen Schäden am Transportmittel, die während des Transports auftreten können.

Transporteurs-Haftpflichtversicherung:
Diese Versicherung schützt den Transporteur (das Transportunternehmen) vor Haftungsansprüchen Dritter, 
die durch den Transport von Waren entstehen könnten. Sie deckt auch die Haftung für Schäden an den transportierten Gütern ab.

Logistikversicherung:
Diese Versicherung bietet einen umfassenden Schutz für Logistikdienstleister, der Schäden oder Verluste abdeckt, 
die während der gesamten Lieferkette entstehen können, einschließlich Lagerung, Umschlag und Transport.

)";
}

void anzeigenGesetze()
{
    R"(
Gesetzbücher zum auswendig lernen für die Prüfung:
Jugendarbeitsschutzgesetz JArbSchG
Arbeitsschutzgesetz ArbSchG
Betriebssicherheitsverordnung BetrSichV
Bürgerliches Gesetzbuch BgB

)";
}

void anzeigenproablauf()
{
    R"(
Beschaffungsprozess:

Dieser Prozess umfasst die Identifikation, Auswahl und Beschaffung von Rohstoffen, Materialien, Ausrüstungen und Dienstleistungen,
 die für die Produktion benötigt werden.
Eine prozessorientierte Ablauforganisation kann sicherstellen, dass die Beschaffungsprozesse transparent und effizient sind, 
indem sie klare Verfahren für Lieferantenauswahl, Bestellabwicklung, Lagerhaltung und Bestandsmanagement festlegt.
Produktionsprozess:

Der Produktionsprozess konzentriert sich auf die Herstellung von Waren oder die Bereitstellung von Dienstleistungen gemäß den spezifizierten Anforderungen.
Durch eine prozessorientierte Ablauforganisation können die Produktionsabläufe optimiert werden, um eine höhere Qualität, 
Kostenkontrolle und Zeiteffizienz zu gewährleisten.
Marketingprozess:

Der Marketingprozess beinhaltet die Entwicklung und Umsetzung von Strategien zur Marktforschung, Markenpositionierung, 
Produktentwicklung, Preisbildung und Werbung, um die Produkte/Dienstleistungen auf dem Markt erfolgreich zu platzieren.
Mit einer prozessorientierten Ablauforganisation können Marketingaktivitäten besser koordiniert, 
Ressourcen effizienter eingesetzt und die Reaktion auf Marktanforderungen verbessert werden.
Vertriebsprozess:

Der Vertriebsprozess befasst sich mit der Vermarktung und dem Verkauf von Produkten oder Dienstleistungen an Kunden, 
einschließlich Bestellung, Lieferung und Kundendienst.
Durch eine prozessorientierte Ablauforganisation können Vertriebsabläufe optimiert und koordiniert werden, 
um einen reibungslosen Bestellvorgang, eine effektive Lieferung und eine gute Kundenbeziehung sicherzustellen.
)";
}

void anzeigenereigv()
{
    R"(
Der erweiterte Eigentumsvorbehalt sichert die Rechte eines Verkäufers.
Bei der Vereinbarung mit dem Käufer muss er darauf achten, dass sich keine Grüne ergeben, die zur Unwirsamkeit des ´Vertrags führen.
Mit dem erweiterten Eigentumsvorbehalt sichert sich der Verkäufer einer Sache ein zusetzliches Recht zu. 
Weigert sich der Verkäufer den vereinbarten Kaufpreis zu zahlen oder wenn ihm dies nicht möglich ist, 
kann der Verkäufer die verkaufte Sache so lange vorbehalten bis der Käufer alle offenen Forderungen von ihm beglichen hat.
Im Kaufvertragsrecht gibt es folgende Arten des Eigentumsvorbehalts:
einfacher Eigentumsvorbehalt   Eigentumswechsel bei Tilgung des Kaufpreises
erweitertes Eigentumsvorbehalt  + weitere Forderungen
nachgeschalteter Eigentumsvorbehalt
verlängerter Eigentumsvorbehalt
nachträglicher Eigentumsvorbehalt 
)";
}

void anzeigenrealsich()
{
    R"(
Realsicherheiten sind Vermögensgegenstände, die verpfändet werden, falls der Schuldner seine Schuld nicht bezahlt. 
Zu diesen Vermögensgegenständen gehören bewegliche und unbewegliche Sachen. Sicherungsmittel an Grundstücken sind Grundschuld und Hypothek.
)";
}

void anzeigenholschuld()
{
    R"(
Holschuld ist ein Begriff aus dem Schuldrecht und bedeutet, dass Leistungs- und Erfolgsort beim Schuldner liegt. 
Bei ihm sollen die Leistungshandlungen erfolgen und der Leistungserfolg eintreten. Bei der Holschuld muss sich der Gläubiger
 die Leistung beim Schuldner abholen.
)";
}

void anzeigenzession()
{
    R"(
Eine Zession ist eine Forderungsabtretung oder Sicherungsabtretung. Dabei ändert sich das Schuldverhältnis, 
indem die Forderung an einen neuen Gläubiger übertragen wird. 
Der Zedent (Abtretender) verkauft also die Forderung an den sogenannten Zessionar (Abtretungsempfänger).
§ 398 Abs. 1 BGB
)";
}

void anzeigensixsigma()
{
    R"(
Six Sigma ist ein Managementsystem zur Prozessverbesserung, statistisches Qualitätsziel und zugleich eine Methode des Qualitätsmanagements.
Ihr Kernelement ist die Beschreibung, Messung, Analyse, Verbesserung und Überwachung von Geschäftsvorgängen mit statistischen Mitteln.


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
Die Kaizen-Philosophie beschreibt laut Definition eine Denkweise, bei der kleine, schrittweise Änderungen im Laufe der Zeit 
eine große Wirkung erzielen. Bei Kaizen handelt es sich um eine Methode des Qualitätsmanagement.
Kai steht für Verbesserung eines Produktes,  Zen bedeutet dass diese Produkt zum Bessen verwendet wird´.


                                         Kundenorientierung
                    Standartisierung
                                                                  Kritikorientierung
                                       Das Kaizen Prinzip
             Qualitätsorientierung                     
                                                        Prozessorientierung
)";
}

void anzeigensteuererk()
{
    R"(
Eine Steuererklärung ist ein formaler Prozess, bei dem eine steuerpflichtige Person oder ein Unternehmen
 dem Finanzamt Informationen über ihre Einkommensverhältnisse, Ausgaben und finanziellen Transaktionen 
für einen bestimmten Zeitraum meldet. Dieser Zeitraum entspricht normalerweise dem Steuerjahr, das in den meisten Ländern dem Kalenderjahr entspricht.
Die Steuererklärung dient dazu, die Höhe der fälligen Steuern zu berechnen. Dabei werden die Einnahmen, 
Ausgaben, Abzüge, Steuervergünstigungen und sonstigen relevanten finanziellen Informationen berücksichtigt. 
Sie ermöglicht es dem Finanzamt, die Steuerpflichtigen zu besteuern oder eventuell überzahlte Steuern zurückzuerstatten.
Hier sind die Schlüsselelemente einer Steuererklärung:
1. **Einkommensangaben:** Angaben zum erzielten Einkommen aus verschiedenen Quellen wie Gehälter, Zinsen, Mieten, Kapitalgewinne, etc.
2. **Abzüge und Ausgaben:** Angaben zu abzugsfähigen Ausgaben wie Krankenversicherungsbeiträgen, 
Spenden, berufsbezogenen Ausgaben und anderen absetzbaren Kosten.
3. **Steuervergünstigungen und -gutschriften:** Informationen zu möglichen Steuervergünstigungen, 
Gutschriften oder Abzügen, die die steuerliche Belastung mindern können.
4. **Persönliche Informationen:** Angaben zur persönlichen Identität, Familienstand, Abhängige und andere relevante persönliche Informationen
5. **Anhang und Nachweise:** Beifügen von Belegen, Belegen und zusätzlichen Unterlagen, die die angegebenen Informationen stützen und validieren.
Die Steuererklärung ist in den meisten Ländern gesetzlich vorgeschrieben, und die Einreichungsfristen variieren je nach Land und Rechtsvorschriften. Sie ist ein wichtiges Instrument für die Steuerbehörden, um die Steuerzahlungen zu überprüfen und sicherzustellen, dass die Steuerpflichtigen ihre finanziellen Verpflichtungen gegenüber dem Staat erfüllen.
)";
}

void anzeigeninvestrech()
{
    R"(
Mit der Investitionsrechnung sollen Investitionsentscheidungen bezüglich der monetären Unternehmensziele fundiert und vorbereitet werden. 
Der durch das Investitionsprojekt generierte Zahlungsstrom wird ermittelt und zu einer Zielgröße, beispielsweise der Rentabilität, verdichtet.
)";
}

void anzeigenoekoprinz()
{
    R"(
Ökonomisches Prinzip:
Das ökonomische Prinzip besagt, dass ökonomische Entscheidungen auf rationale Weise getroffen werden, 
um knappe Ressourcen effizient zu nutzen, um bestmögliche Ergebnisse zu erzielen. Es setzt sich aus drei Teilen zusammen:
Minimalprinzip: Auch als Prinzip der sparsamen Mittelverwendung bekannt. Es besagt, dass ein bestimmtes Ziel 
mit minimalen Ressourcen oder Aufwand erreicht werden sollte. Im ökonomischen Kontext bedeutet dies, 
dass ein Unternehmen versucht, eine bestimmte Produktionsmenge mit minimalen Kosten zu produzieren, 
um den Gewinn zu maximieren.
Maximalprinzip: Auch als Prinzip der optimalen Zielerreichung bekannt. Es besagt, dass mit gegebenen
Ressourcen das Maximum an Zielen erreicht werden soll. Im ökonomischen Kontext bedeutet dies, dass ein 
Unternehmen versucht, mit den vorhandenen Ressourcen den größtmöglichen Gewinn zu erzielen.
)";
}

    //*   char auswahl{};
    //   bool beenden = false;
    //   while (!beenden) {*/
    void showbwlmenu()
    {
        //    system("cls"); // Bildschirm löschen (funktioniert in Windows)
        cout << "\033[1;32m"; // Setzt die Farbe auf hellgrün
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
        cout << "\033[0m"; // Setzt die Farbe zurück auf den Standardwert
        cout << "Menü:\n";
        cout << "     |  1. Gesetze \n";
        cout << "     |  2. Geschäftsprozesse\n";
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
        cout << "Bitte wählen Sie eine Option: ";
    }
    // auswahl = _getch(); // Warten auf Tastatureingabe ohne Enter
    ////   char auswahl[9];
    ////   for (int i = 0; i < 2; ++i) {
    ////       auswahl[i] = _getch();  // Ein Zeichen lesen
    ////       if (auswahl[i] == '\r') // Wenn Enter gedrückt wurde, beenden
    ////           break;
    ////       std::cout << auswahl[i];  // Zeichen anzeigen
    ////   }

       //if (auswahl == 27) { // 27 ist der ASCII-Wert für die Escape-Taste
       //    beenden = true; // Programm beenden
       //}
    ////   switch (auswahl) {

    int bwlmain() {
        bool running = true;
        int choice;
    while (running)
    {
        showbwlmenu();
        cout << "Wählen Sie eine Option: ";
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
                    cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << std::endl;
                    std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay for 2 seconds
                    break;
        }
    }
    return 0;
}
////
////        if (auswahl == 27) { // 27 ist der ASCII-Wert für die Escape-Taste
////            beenden = true; // Programm beenden
////        }
////        else {
////            std::cout << "\nDrücken Sie eine beliebige Taste, um fortzufahren...";
////            _getch(); // Warten auf Tastendruck, bevor das Menü erneut angezeigt wird
////        }
////        return 0;
////    
////}
 //   std::cout << "\nDrücken Sie eine beliebige Taste, um fortzufahren...";
 //   _getch(); // Warten auf Tastendruck, bevor das Menü erneut angezeigt wird
