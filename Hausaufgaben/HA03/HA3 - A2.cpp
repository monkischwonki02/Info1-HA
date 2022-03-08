#include <iostream>

int a2() {

	int n;
	int res = 0;
	std::cout << "Geben Sie eine Zahl ein: ";
	std::cin >> n;
	if (n >= 1) {
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				res += i * j;
			}
		}
		std::cout << "Ergebnis: " << res << std::endl;
	}
	else {
		std::cout << "Die Eingabe ist ungueltig" << std::endl;
	}
	

	return 0;
}