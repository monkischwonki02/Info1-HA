// Name: Adrian Hammermeister; Ailina Steg
// Studiengang: Physik (Bachelor)
// Matrikelnr.: 221200260; 221200827
#include <iostream>



int main() {
	double sek, kurs;
	std::cout << "Betrag in SEK eingeben: ";
	std::cin >> sek;
	std::cout << "SEK in Euro eingeben: ";
	std::cin >> kurs;
	std::cout << "Betrag in Euro: " << sek * kurs << std::endl;

	return 0;

}