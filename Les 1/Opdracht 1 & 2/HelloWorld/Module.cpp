#include "pch.h"
#include "Module.h"

using namespace std;

Module::Module(const string name, int ec) : name(name), ec(ec) {}
Module::Module() {}

string Module::getName() {
	return name;
}

int Module::getEc() {
	return ec;
}