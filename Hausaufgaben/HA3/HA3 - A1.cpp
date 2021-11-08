// Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnr.: 221200260; 221200827
#include <iostream>

int main() {

	int budget;
	int woche = 1;
	int gesamt = 70;
	int preis = 50;
	std::cout << "Welches Budget steht zur Verfuegung? ";
	std::cin >> budget;

	if (budget < gesamt) 
		std::cout << "Sie haben zu wenig Budget um sich einen Lagerraum zu mieten." << std::endl;

	while (budget >= gesamt){
		if (woche >= 4 && woche < 8) {

			if (woche == 6)  
				gesamt -= 100;
			
			std::cout << woche << ". Woche: \t" << "45.00 Euro \tGesamtpreis: \t" << gesamt << " Euro" << std::endl;
			gesamt += preis * 0.9;
		}
		else if (woche >= 8) {
			
			std::cout << woche << ". Woche: \t" << "40.00 Euro \tGesamtpreis: \t" << gesamt << " Euro" << std::endl;
			gesamt += preis * 0.8;
		}
		else {
			std::cout << woche << ". Woche: \t" << "50.00 Euro \tGesamtpreis: \t" << gesamt << " Euro" << std::endl;
			gesamt += 50;
		}
		woche++;
	}

	return 0;
}

// Teilaufgabe (c)
// 1. Wert: 500 - Begruendung: Testen, ob die Schleife so funktioniert, wie sie es soll + Ueberpruefung, ob die 100€ Rabatt in der 6. Woche funktioniert
// 2. Wert: 50  - Begruendung: Testen, ob die "Fehlermeldung" ausgegeben wird.
// 3. Wert: 200 - Begruendung: Testen, ob bei anderen Wert fruehzeitig beendet wird.
