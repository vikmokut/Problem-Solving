#include <iostream>
using namespace std;
#include <fstream>

int main() {
	string fileContent;

	ifstream readFile("about.txt");

	getline(readFile, fileContent, '*');

	cout << fileContent;

	readFile.close();

}

