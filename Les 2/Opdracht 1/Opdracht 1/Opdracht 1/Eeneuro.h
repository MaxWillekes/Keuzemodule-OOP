#pragma once
#include <string>
#include "Muntstuk.h"

using namespace std;

class Eeneuro : public Muntstuk
{
private:
	string name;
	float worth;

public:
	Eeneuro();
	Eeneuro(string name, float worth);
};