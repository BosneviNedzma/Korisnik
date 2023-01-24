#include <iostream>
#include "Korisnik.h"

int Menu(Korisnik& k) {
	k.ispisKorisnika();
	cout << "------------------------------\n";
	cout << "Menu:\n";
	cout << "\t1. Promjena korisnika";
	cout << "\n\t2. Dodaj sastanak";
	cout << "\n\t3. Pregledaj sastanke";
	cout << "\n\t4. Brisi sastanke";
	cout << "\n\t5. Kraj";
	cout << "\nOdabir: ";
	int odabir;
	do {
		cin >> odabir;
		cin.ignore();
	} while (odabir < 0 || odabir>5);
	return odabir;
}

int main(int argc, char** argv) {
	Korisnik korisnik;
	cin >> korisnik;
	korisnik++;
	cout << korisnik;
	cout << endl;
	int izbor;
	do {
		izbor = Menu(korisnik);
		switch (izbor) {
		case 1:
			!korisnik;
			break;
		case 2:
			korisnik.unosSastanka();
			break;
		case 3:
			korisnik.ispisSastanka();
			break;
		case 4:
			korisnik.brisiIzabraniSastanak();
			break;
		case 5:
			break;
		default:
			cout << "Pogresan odabir!\n";
		}

	} while (izbor != 5);

}