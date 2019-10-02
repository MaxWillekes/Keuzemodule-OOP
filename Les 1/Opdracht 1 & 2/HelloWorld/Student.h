#pragma once
#include <string>
#include "Persoon.h"

using namespace std;

class Student : public Persoon
{
private:
	string name;
	int studentNr;

public:
	Student();
	Student(string name, int leeftijd, int studentNr);
	int getStudentNr();
};