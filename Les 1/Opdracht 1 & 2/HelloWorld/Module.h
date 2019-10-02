#pragma once
#include <string>
#include "Student.h"
#include "Docent.h"

using namespace std;

class Module
{
private:
	string name;
	int ec;

	Student student;
	Docent docent;
public:
	Module();
	Module(string name, int ec);

	string getName();
	int getEc();
};