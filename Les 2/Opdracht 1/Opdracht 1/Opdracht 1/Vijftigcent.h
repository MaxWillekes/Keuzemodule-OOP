#pragma once
#include <string>
#include "Muntstuk.h"

using namespace std;

class Vijftigcent : public Muntstuk
{
private:
	string name;
	float worth;

public:
	Vijftigcent();
	Vijftigcent(string name, float worth);
};