#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

void aufgabe2a() {
	float durchmesser = 1;
	float flaecheninhalt, umfang;

	flaecheninhalt = M_PI * pow(durchmesser / 2, 2);
	umfang = M_PI * durchmesser;

	std::cout << "Der Flaecheninhalt betraegt: " << flaecheninhalt << std::endl;
	std::cout << "Der Umfang des Kreises betraegt: " << umfang << std::endl;
}

void aufgabe2b() {
	float durchmesser, flaecheninhalt, umfang;

	std::cout << "Wie groß ist der Durchmesser des Kreises? ";
	std::cin >> durchmesser;

	flaecheninhalt = M_PI * pow(durchmesser / 2, 2);
	umfang = M_PI * durchmesser;

	std::cout << "Der Flaecheninhalt betraegt: " << flaecheninhalt << std::endl;
	std::cout << "Der Umfang des Kreises betraegt: " << umfang << std::endl;
}

void aufgabe2c() {
	float durchmesser, flaecheninhalt, umfang;

	std::cout << "Wie groß ist der Durchmesser des Kreises? ";
	std::cin >> durchmesser;


	if (durchmesser > 0) {
		flaecheninhalt = M_PI * pow(durchmesser / 2, 2);
		umfang = M_PI * durchmesser;

		std::cout << "Der Flaecheninhalt betraegt: " << flaecheninhalt << std::endl;
		std::cout << "Der Umfang des Kreises betraegt: " << umfang << std::endl;
	}
	else {
		std::cout << "Der Durchmesser ist kleiner gleich 0" << std::endl;
		std::cout << "Bitte einen durchmesser von mehr als 0 eingeben!" << std::endl;
	}
}

