#include <iostream>
using namespace std;
#include <fstream>

int main() {
	ofstream MyFile("about.txt");

	MyFile << "I am Victor Mokut.\n\nI am a passionate computer scientist and software engineering looking to contribute immensely to the computer science through effective researching and discoveries that will impact the computer science landscape.\n\nInnovations drives me, and I do not intend to merely sit around and watch every other person innovate while I consume, though, not so much.";

	MyFile.close();


	return 0;
}
