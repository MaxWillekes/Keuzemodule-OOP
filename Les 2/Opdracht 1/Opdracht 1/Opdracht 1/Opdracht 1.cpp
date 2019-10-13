// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include "Vijftigcent.h"
#include "Eeneuro.h"
#include "Koffiemuntje.h"
#include "Koffieautomaat.h"

using namespace std;

int main() {

	float ingeworpenMunt;

	Koffieautomaat koffieautomaat = Koffieautomaat();
	
	cout << "Inwerp opties zijn : 0.5  1  1.5" << endl;
	cout << "Ingeworpen waarde : " << endl;
	cin >> ingeworpenMunt;

	if (ingeworpenMunt == 0 || ingeworpenMunt == NULL) { 
		return 0; 
	}
	else 
	{
		koffieautomaat.Inworp(ingeworpenMunt);
		koffieautomaat.KoffieGeven();
	}

	return 0;
}