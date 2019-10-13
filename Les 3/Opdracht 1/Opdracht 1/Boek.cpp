#include "pch.h"
#include "Boek.h"
#include <iostream>
#include <string>

using namespace std;

Boek::Boek() {}

Boek::Boek(string titel) {
	this->Titel = titel;
}

Boek::~Boek() { cout << "Boek: destructor" << endl; }

string Boek::getTitel() {
	return this->Titel;
}