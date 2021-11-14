// Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnr.: 221200260; 221200827
#include <iostream>

int main() {

	int budget;
	int woche = 1;
	int gesamt = 20;
	int preis = 50;
	std::cout << "Welches Budget steht zur Verfuegung? ";
	std::cin >> budget;

	if (budget < gesamt) 
		std::cout << "Sie haben zu wenig Budget um sich einen Lagerraum zu mieten." << std::endl;
	else {
		do{		
			if (woche >= 4 && woche < 8) {

				if (woche == 6)  
					gesamt -= 100;

				preis = 45;			
			}
			else if (woche >= 8) {
				preis = 40;
				
			}
			gesamt += preis;
			std::cout << woche << ". Woche: \t" << preis << ".00 Euro \tGesamtpreis: \t" << gesamt << " Euro" << std::endl;
			woche++;
		} while((budget - gesamt) >= preis);
	}
	return 0;
}

// Teilaufgabe (c)
// 1. Wert: 500 - Begruendung: Testen, ob die Schleife so funktioniert, wie sie es soll + Ueberpruefung, ob die 100€ Rabatt in der 6. Woche funktioniert
// 2. Wert: 50  - Begruendung: Testen, ob die "Fehlermeldung" ausgegeben wird.
// 3. Wert: 200 - Begruendung: Testen, ob bei anderen Wert fruehzeitig beendet wird.
