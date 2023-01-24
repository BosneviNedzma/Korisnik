#include "Sastanak.h"
using namespace std;

void Sastanak::ispisSastanak() {
	cout << this->pocetak << " na dan: " << this->datum << endl;
	cout << "OD: " << this->pocetak << " DO: " << this->kraj << endl;
}

void Sastanak::unesiSastanak() {
	cout << "Unesite poruku: ";
	getline(cin, this->poruka);
	cout << "Unesite datum: ";
	getline(cin, this->datum);
	cout << "Unesite pocetak sastanka: ";
	getline(cin, this->pocetak);
	cout << "Unesite kraj sastanka: ";
	getline(cin, this->kraj);

}
