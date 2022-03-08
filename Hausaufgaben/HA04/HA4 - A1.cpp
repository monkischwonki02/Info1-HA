#include <iostream>

// Anmerkung:
// Differenzprüfung erfolgt von rechts nach links
// Wenn diff != 0 wird der Betrag gebildet und es wird geguckt, ob der betrag 1 ist
int main() {
	int ziffer = 0;

	while (ziffer < 100) {
		std::cout << "Bitte geben Sie eine Zahl (ueber 100) ein: ";
		std::cin >> ziffer;
		if (ziffer < 100) 
			std::cout << "Fehler: Bitte eine Zahl ueber 100 eingeben!" << std::endl;
		
	}

	int temp;
	bool diff = true;

	while (ziffer >= 10 && diff) {
		temp = ziffer % 10;
		ziffer /= 10;
		if ((temp - ziffer % 10) == 0 || abs(temp - ziffer % 10) == 1) 
			continue;
		
		else 
			diff = false;
		
	}

	if (diff) 
		std::cout << "Differenzpruefung bestanden!" << std::endl;
	
	else 
		std::cout << "Differenzpruefung nicht bestanden" << std::endl;
	

	return 0;
}