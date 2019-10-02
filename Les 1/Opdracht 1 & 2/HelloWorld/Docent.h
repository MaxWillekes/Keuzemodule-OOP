#pragma once
#include <string>
#include "Persoon.h"

using namespace std;

class Docent : public Persoon
{
private:
	string name;
	float salary;
	
public:
	Docent();
	Docent(const string name, int leeftijd, float salary);
	float getSalary();
};