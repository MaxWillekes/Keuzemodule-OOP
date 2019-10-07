// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include "Vijftigcent.h"
#include "Eeneuro.h"
#include "Koffiemuntje.h"
#include "Koffieautomaat.h"

using namespace std;

float main() {

	float ingeworpenMunt;

	Koffieautomaat koffieautomaat = Koffieautomaat();
	
	//
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