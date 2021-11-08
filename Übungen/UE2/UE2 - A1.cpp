#include <iostream>

void aufgabe1a() {
	int geburtsjahr = 2002;
	int aktuellesJahr = 2021;
	int alter;



	alter = aktuellesJahr - geburtsjahr;

	std::cout << "Vorname: Adrian" << std::endl;
	std::cout << "Nachname: Hammermeister" << std::endl;
	std::cout << "Alter: " << alter << std::endl;
}

void aufgabe1b() {
	int geburtsjahr, alter;
	int aktuellesJahr = 2021;

	std::cout << "In welchem Jahr wurdest du geboren? ";
	std::cin >> geburtsjahr;


	alter = aktuellesJahr - geburtsjahr;

	std::cout << "Vorname: Adrian" << std::endl;
	std::cout << "Nachname: Hammermeister" << std::endl;
	std::cout << "Alter: " << alter << std::endl;
}
