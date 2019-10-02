#include "pch.h"
#include "Student.h"

using namespace std;

Student::Student(const string name, int leeftijd, int studentNr) : Persoon(name, leeftijd), studentNr(studentNr) {}
Student::Student() {}

int Student::getStudentNr() {
	return studentNr;
}