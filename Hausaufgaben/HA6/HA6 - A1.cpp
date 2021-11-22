//Name: Adrian Hammermeister; Ailina Steg
//Studiengang: Physik (Bachelor)
//Matrikelnr.: 221200260; 221200827

#include <iostream>

// Aufgabe 1a
void tauschen(int& a, int& b) {
	int temp = b;
	b = a;
	a = temp;
}

/* Mit Pointern
void tauschenPtr(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
} */

// Aufgabe b

void sortieren(int a, int b, int c) {
	while (!(a <= b && b <= c)) {
		if (a >= b) {
			tauschen(a, b);
			continue;
		}
		else if (a >= c) {
			tauschen(a, c);
			continue;
		}
		else if (b >= c) {
			tauschen(b, c);
			continue;
		}
	}
	std::cout << "Sortiert: " << a << ", " << b << ", " << c << std::endl;
	std::cout << "Differenz: " << c - a << std::endl;
}


int main() {
	int a = -5;
	int b = -1;
	int c = -3;



	sortieren(a, b, c);
	
	return 0;
}