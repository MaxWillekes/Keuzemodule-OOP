#include "pch.h"
#include <iostream>
#include "Boek.h"
#include "Bibliotheek.h"

using namespace std;

int main()
{
	Bibliotheek* bieb = new Bibliotheek();
	bieb->voegBoekToe("Boek");
	bieb->toonCollectie();

	bieb->leenUit();
	bieb->toonCollectie();

	delete bieb;
	return 0;
}