#pragma once
#include <string>
#include "Muntstuk.h"

using namespace std;

class Koffiemuntje : public Muntstuk
{
private:
	string name;
	float worth;

public:
	Koffiemuntje();
	Koffiemuntje(string name, float worth);
};