#pragma once
#include <string>

using namespace std;

class Persoon
{
private:
	string name;
	int leeftijd;

public:
	Persoon();
	Persoon(const string name, int leeftijd);
    string getName();
	int getLeeftijd();
};