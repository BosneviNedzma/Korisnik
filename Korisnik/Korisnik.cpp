#include "Korisnik.h"
#include <memory>
using namespace std;

Korisnik::Korisnik(){}

Korisnik::~Korisnik(){}

void Korisnik::unesiKorisnika() {
	cout << "Unesite ime korisnika: ";
	getline(cin, this->ime);
	cout << "Unesite prezime korisnika: ";
	getline(cin, this->prezime);
	cout << "Unesite broj godina korisnika: ";
	cin >> this->godine;
	cin.ignore();
}
void Korisnik::ispisKorisnika() {
	cout << this->ime << " " << this->prezime << " - " << this->godine << " godina";
}
void Korisnik::unosSastanka() {
	auto temp = make_shared<Sastanak>();
	temp->unesiSastanak();
	this->sastanci.emplace_back(*temp);
}
void Korisnik::ispisSastanka() {
	int br = 1;
	for (auto i : this->sastanci) {
		cout << "------------------------------\n";
		cout << br << ". ";
		i.ispisSastanak();
		cout << "------------------------------\n";
		br++;
	}
}

void Korisnik::brisiIzabraniSastanak() {
	this->ispisSastanka();
	int odabir;
	do {
		cout << "Unesite broj sastanka za obrisati: ";
		cin >> odabir;
		cin.ignore();
	} while (odabir<1 || odabir>this->sastanci.size());
	this->sastanci.erase(this->sastanci.begin() + odabir - 1);
}

istream& operator>>(istream& stream, Korisnik& k) {
	k.unesiKorisnika();
	return stream;
}

ostream& operator<<(ostream& stream, Korisnik& k) {
	k.ispisKorisnika();
	k.ispisSastanka();
	return stream;
}

void Korisnik::operator!() {
	this->sastanci.clear();
	cin >> *this;
}

void Korisnik::operator++(int) {
	this->godine++;
}