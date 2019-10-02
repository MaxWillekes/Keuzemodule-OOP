#include "pch.h"
#include "Docent.h"

using namespace std;

Docent::Docent(const std::string name, int leeftijd, float salary) : Persoon(name, leeftijd), salary(salary) {}
Docent::Docent() {}

float Docent::getSalary() {
	return salary;
}