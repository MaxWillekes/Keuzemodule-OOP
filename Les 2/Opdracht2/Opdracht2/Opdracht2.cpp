#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Ik wist niet hope ik de string zou moeten reversen dus ben ik gaan zoeken en met hulp van
//https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/
//heb ik de de string reverse kunnen implementeren.

void reverseStr(string& str)
{
	int n = str.length();

	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

int main()
{
	string lineFile1;
	string lineFile2;
	int n1 = 0;
	int n2 = 0;
	int liner = 1;

	std::ifstream inputfile1;
	std::ifstream inputfile2;
	std::ofstream outputfile;

	inputfile1.open("C:/Users/Max Willekes/Desktop/School/HKU/Jaar 2/Keuzemodules/OOP/Les 2/Opdracht2/Text1.txt");
	inputfile2.open("C:/Users/Max Willekes/Desktop/School/HKU/Jaar 2/Keuzemodules/OOP/Les 2/Opdracht2/Text2.txt");
	outputfile.open("C:/Users/Max Willekes/Desktop/School/HKU/Jaar 2/Keuzemodules/OOP/Les 2/Opdracht2/Output.txt");

	if (!inputfile1 || !inputfile2 || !outputfile) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	while (liner <= 24) {

		std::cout << "Writing line from file 1" << std::endl;
		std::getline(inputfile1, lineFile1);

		reverseStr(lineFile1);

		if (n1 >= 1) { outputfile << lineFile1; }
		else { outputfile << lineFile1; n1++; }

		outputfile << std::endl;


		std::cout << "Writing line from file 2" << std::endl;
		std::getline(inputfile2, lineFile2);

		reverseStr(lineFile2);

		if (n2 >= 2) { outputfile << lineFile2; }
		else { outputfile << lineFile2; n2++; }

		outputfile << std::endl;
		liner++;
	}

	std::cout << "Written everything to file" << std::endl;

	inputfile1.close();
	inputfile2.close();
	outputfile.close();

	return 0;
}