#include "pch.h"
#include "Muntstuk.h"

using namespace std;

Muntstuk::Muntstuk(const string name, float worth) : name(name), worth(worth) {}
Muntstuk::Muntstuk() {}

string Muntstuk::getName()
{
	return name;
}

float Muntstuk::getWorth() {
	return worth;
}