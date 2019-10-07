#include "pch.h"
#include <iostream>
#include "Koffieautomaat.h"

using namespace std;

Koffieautomaat::Koffieautomaat(float saldo) : saldo(saldo) {}
Koffieautomaat::Koffieautomaat() {}

float Koffieautomaat::getSaldo() {
	return saldo;
}

void Koffieautomaat::Inworp(float worth) {
	if (worth == 1.5) {
		cout << "Ingeworpen Munt is Koffiemuntje" << endl;
		saldo = 1.5;
	}
	else if (worth == 1) {
		cout << "Ingeworpen Munt is 1-euro" << endl;
		saldo += 1.0;
	}
	else if (worth == 0.5) {
		cout << "Ingeworpen Munt is 50-cent" << endl;
		saldo += 0.5;
	};
}

void Koffieautomaat::KoffieGeven() {
	cout << "Huidig salde: " << saldo << endl;
	cout << "Beschikbare koffie: " << endl;

	if (saldo >= 0.5) { cout << "Espresso" << endl; }
	if (saldo >= 1.0) { cout << "Capuccino" << endl; }
	if (saldo >= 1.5) { cout << "Dark Roast" << endl; }
}