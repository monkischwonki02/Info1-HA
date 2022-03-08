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