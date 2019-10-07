#include "Vijftigcent.h"
#include "Eeneuro.h"
#include "Koffiemuntje.h"

using namespace std;

class Koffieautomaat
{
private:
	float saldo = 0;
public:
	Koffieautomaat();
	Koffieautomaat(float saldo);
	void Inworp(float worth);
	void KoffieGeven();


	float getSaldo();
};

