// Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnummer: 221200260; 221200827

#include <iostream>

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
		if ((temp - ziffer % 10) == 0 || (temp - ziffer % 10) == 1) 
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