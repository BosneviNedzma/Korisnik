#pragma once
#include "Memo.h"
using namespace std;

class Sastanak :public Memo {
public:
	string pocetak, kraj;
	Sastanak() :Memo() {
		this->pocetak = "Pocetak";
		this->kraj = "Kraj";
	};
	~Sastanak() {};
	void ispisSastanak();
	void unesiSastanak();
protected:
};