#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	char line1[100];
	char line2[100];
	int lengthFile1;
	int lengthFile2;
	int n1 = 0;
	int n2 = 0;

	ifstream inputfile1;
	ifstream inputfile2;
	ofstream outputfile;

	lengthFile1 = inputfile1.tellg();
	lengthFile2 = inputfile2.tellg();

	inputfile1.open("C:/Users/Max Willekes/Desktop/School/HKU/Jaar 2/Keuzemodules/OOP/Les 2/Opdracht2/Text1.txt");
	inputfile2.open("C:/Users/Max Willekes/Desktop/School/HKU/Jaar 2/Keuzemodules/OOP/Les 2/Opdracht2/Text2.txt");
	outputfile.open("C:/Users/Max Willekes/Desktop/School/HKU/Jaar 2/Keuzemodules/OOP/Les 2/Opdracht2/Output.txt");

	if (!inputfile1 || !inputfile2 || !outputfile) {
		cout << "Probleem bij openen file" << endl;
		exit(1);
	}

	cout << lengthFile1 << endl;
	cout << lengthFile2 << endl;

	while (inputfile1.peek() != '\n') {
		cout << "Writing line from file 1" << endl;
		inputfile1 >> line1;

		if (n1 >= 1) { outputfile << " " << line1; }
		else { outputfile << line1; n1++; }
	}
	outputfile << endl;

	while (inputfile2.peek() != '\n') {
		cout << "Writing line from file 2" << endl;
		inputfile2 >> line2;

		if (n2 >= 1) { outputfile << " " << line2; }
		else { outputfile << line2; n2++; }
	}
	outputfile << endl;

	cout << "Written everything to file" << endl;

	inputfile1.close();
	inputfile2.close();
	outputfile.close();

	return 0;
}