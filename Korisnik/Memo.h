#pragma once
#include <iostream>
using namespace std;

class Memo {
public:
	string poruka, datum;
	Memo() {
		this->poruka = "Novi sastanak";
		this->datum = "Novi datum";
	};
	virtual ~Memo() {};
	virtual void ispisSastanak() = 0;
	virtual void unesiSastanak() = 0;
};