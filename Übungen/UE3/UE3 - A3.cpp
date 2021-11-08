#include <iostream>

int main() {
	int breite;

	std::cin >> breite;
	for (int i = 1; i <= breite; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}