#include <iostream>
#include <cmath>

int verdoppeln(int* arr, int n) {
	int total = 0;
	for (int* i = arr; i != arr + n; ++i) {
		if (*i % 2 == 0)
			*i *= 2;
		total += *i;
	}

	return total;
}
int main() {

	int arr[] = { 2, 13, 6, 5, 7, 24, 32, 41, 48, 39 };
	std::cout << "Array vorher: ";
	for (int e : arr) {
		std::cout << e << " ";
	}

	int res = verdoppeln(arr, 10);

	std::cout << std::endl << "Array nachher: ";
	for (int e : arr) {
		std::cout << e << " ";
	}
	std::cout << std::endl << "Summe: " << res;
	return 0;
}