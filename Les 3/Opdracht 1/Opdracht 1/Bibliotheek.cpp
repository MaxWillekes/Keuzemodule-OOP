#include "pch.h"
#include <iostream>
#include "Bibliotheek.h"
#include <string>

using namespace std;

Bibliotheek::Bibliotheek() {}

Bibliotheek::~Bibliotheek() { cout << "Bibliotheek destructor" << endl;}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) {
	cout << "Bibliotheek copy constructor" << endl;
	boek = new Boek();
	boek->Titel = bibliotheek.boek->Titel;
}

void Bibliotheek::toonCollectie() {
	if (boek->Titel != "Boek") {
		cout << "Bibliotheek heeft: geen boek in de collectie" << endl;
	}
	else {
		cout << "Bibliotheek heeft: " << boek->Titel << " in de collectie" << endl;
	}
}

void Bibliotheek::voegBoekToe(string titel) {
	if (boek) {
		delete boek;
	}
	boek = new Boek(titel);
}

void Bibliotheek::leenUit() {
	cout << "Boek uitlenen" << endl;
	if (boek) {
		delete boek;
	}
}