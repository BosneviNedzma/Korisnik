#pragma once
#include <iostream>
#include <vector>
#include "Sastanak.h"
using namespace std;

class Korisnik {
public:
	string ime, prezime;
	int godine;
	vector<Sastanak> sastanci;
	Korisnik();
	~Korisnik();
	void unesiKorisnika();
	void ispisKorisnika();
	void unosSastanka();
	void ispisSastanka();
	void brisiIzabraniSastanak();
	friend istream& operator>>(istream& stream, Korisnik& k);
	friend ostream& operator<<(ostream& stream, Korisnik& k);
	void operator!();
	void operator++(int);
};