//Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnummer: 221200260; 221200827

#include <iostream>


int main() {

	int breite;
	std::cout << "Bitte geben Sie die Höhe der Pyramide an: ";
	std::cin >> breite;

	for (int i = 0; i < breite; i++) {
		for (int j = 0; j < breite - i; j++) {
			std::cout << "  ";
		}
		for (int j = 1; j <= (2*i)+1; j++) {
			std::cout << "* ";
		}
		std::cout << std::endl;
	}

	return 0;
}