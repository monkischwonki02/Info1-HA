#include <iostream>
#include <cmath>

double wurzel(int n, double a) {
	if (n == 0) return 1;

	return 0.5 * (wurzel(n-1, a) + (a / wurzel(n-1, a)));
}


int main() {

	double a;
	int n;

	std::cout << "Bitte geben Sie eine Zahl ein: ";
	std::cin >> a;
	std::cout << "Bitte geben Sie die Anzahl der Rekursionen ein: ";
	std::cin >> n;
	if (n >= 1 && a >= 0) {
		double res = wurzel(n,a);
		std::cout << "wurzel(" << n << "," << a << "): " << res << std::endl;
		std::cout << "sqrt(" << a << "): " << sqrt(a) << std::endl;
	}
	else {
		std::cout << "Es ist ein Fehler aufgetreten." << std::endl;
	}


	return 0;
}