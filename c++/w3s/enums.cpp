#include <iostream>
using namespace std;

enum Weather {
	HOT = 37.5,
	NORMAL = 36.6,
	COLD = 18.0
};

int main() {
	float currentTemperature;
	cout << "What is the current temperature? \n\n";
	cin >> currentTemperature;

	enum weather condition;

	// determine weather condition
	if (currentTemperature >= 37.5) {
		condition = HOT;
		cout << "The weather is HOT";
	}
	else if (currentTemperature == 36.6) {
		condition = NORMAL;
		cout << "The weather is Normal";
	}
	else if (currentTemperature <= 18.0) {
		condition = COLD;
		cout << "The weather is COLD";
	}

	// the weather condition can be used to process other functions in the programs
	return 0;
}
