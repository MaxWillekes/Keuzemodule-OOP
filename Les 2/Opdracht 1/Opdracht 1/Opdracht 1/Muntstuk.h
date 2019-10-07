#pragma once
#include <string>

using namespace std;

class Muntstuk
{
private:
	string name;
	float worth;

public:
	Muntstuk();
	Muntstuk(const string name, float worth);
	string getName();
	float getWorth();
};