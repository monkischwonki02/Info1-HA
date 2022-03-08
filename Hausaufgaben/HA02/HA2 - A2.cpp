#include <iostream>
using namespace std;

int main(){
	int budget;
	int artikel_anzahl;
	int artikel_preis;
	// Budget, Anzahl der Artikel und Stueckpreis einlesen
	cout << "Budget eingeben: ";
	cin >> budget;
	cout << "Anzahl der Artikel eingeben: ";
	cin >> artikel_anzahl;
	cout << "Stueckpreis eingeben: ";
	cin >> artikel_preis;
	
	// Berechnung des Gesamtpreises
	int gesamtpreis = artikel_anzahl * artikel_preis;
	
	// Ausgabe
	cout << "Sie haben " << artikel_anzahl << " Artikel zu je " << artikel_preis << " Euro bestellt." << endl;
	cout << "Der Gesamtpreis der Bestellung betraegt " << gesamtpreis << " Euro. " << endl;
	// Berechnung des Restbudgets
	int restbudget = budget - gesamtpreis;
	
	// Budget pr�fen (Restbudget groesser gleich 0) und Ausgabe
	if (restbudget >= 0) 
		cout << "Sie haben ein Restbudget von " << restbudget << " Euro. " << endl;
	else 
		cout << "Sie ueberschreiten Ihr Budget um " << -restbudget << " Euro." << endl;
	return 0;
}
