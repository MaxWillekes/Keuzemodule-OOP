#include "pch.h"
#include "Persoon.h"

using namespace std;

Persoon::Persoon(const string name, int leeftijd) : name(name), leeftijd(leeftijd) {}
Persoon::Persoon() {}

string Persoon::getName() {
	return name;
}