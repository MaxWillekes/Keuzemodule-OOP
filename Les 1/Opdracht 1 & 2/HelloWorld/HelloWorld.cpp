// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include "Docent.h"
#include "Student.h"
#include "Module.h"

using namespace std;

int main() {
    
	Docent docent1 = Docent("Edwin", 51, 25.00);
	Docent docent2 = Docent("Henk", 22, 26.00);
	Docent docent3 = Docent("Corné", 33, 24.00);

	cout << docent1.getName() << endl;
	cout << docent1.getSalary() << endl;
	cout << docent2.getName() << endl;
	cout << docent2.getSalary() << endl;
	cout << docent3.getName() << endl;
	cout << docent3.getSalary() << endl;

	Student student1 = Student("Max", 20, 3029575);
	Student student2 = Student("Mark", 20, 1111111);
	Student student3 = Student("Chantal", 20, 2222222);

	cout << student1.getName() << endl;
	cout << student1.getStudentNr() << endl;
	cout << student2.getName() << endl;
	cout << student2.getStudentNr() << endl;
	cout << student3.getName() << endl;
	cout << student3.getStudentNr() << endl;

	Module module1 = Module("GDV2", 5);
	Module module2 = Module("OOP", 2);
	Module module3 = Module("NEWT", 1);

	cout << module1.getName() << endl;
	cout << module1.getEc() << endl;
	cout << module2.getName() << endl;
	cout << module2.getEc() << endl;
	cout << module3.getName() << endl;
	cout << module3.getEc() << endl;

	return 0;
}