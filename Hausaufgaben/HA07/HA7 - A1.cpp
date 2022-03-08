#include <iostream>
#include <cmath>


int main() {

	const int n = 4;

	double punkte[n][2];

	for (int i = 0; i < n; i++) {
		std::cout << "Punkt " << i + 1 << ":" << std::endl;
		std::cout << "x = ";
		std::cin >> punkte[i][0];
		std::cout << "y = ";
		std::cin >> punkte[i][1];
	}

	
	// Schwerpunktberechnung
	double s[2];
	for (int i = 0; i < n; i++) {
		s[0] += punkte[i][0];
		s[1] += punkte[i][1];
	}
	s[0] = s[0] / n; // x-koordinate des Schwerpunktes
	s[1] = s[1] / n; // y-koordinate des Schwerpunktes

	// Abstandsberechnung
	double d[n];
	for (int i = 0; i < n; i++) {
		d[i] = sqrt(pow(s[0] - punkte[i][0], 2) + pow(s[1] - punkte[i][1], 2));
	}


	// Ausgabe
	std::cout << "Geometrischer Schwerpunkt: " << s[0] << ", " << s[1] << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << "Abstand zum Punkt " << i + 1 << ": " << d[i] << std::endl;
	}
	
	return 0;
}