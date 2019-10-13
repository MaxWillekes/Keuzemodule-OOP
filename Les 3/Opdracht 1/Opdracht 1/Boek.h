#pragma once

#include <string>

using namespace std;

class Boek {
public:
	Boek();
	string Titel;
	Boek(string titel);
	virtual ~Boek();
	string getTitel();
};