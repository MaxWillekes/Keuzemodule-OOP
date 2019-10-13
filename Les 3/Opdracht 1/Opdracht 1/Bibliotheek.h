#pragma once

#include "Boek.h"

class Bibliotheek {
public:
	Bibliotheek();
	virtual ~Bibliotheek();
	Bibliotheek(const Bibliotheek& bibliotheek);

	void toonCollectie();
	void voegBoekToe(string titel);
	void leenUit();

private:
	Boek* boek = new Boek();
};