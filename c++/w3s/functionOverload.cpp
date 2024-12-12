#include <iostream>
using namespace std;

int multiply(int, int);
float multiply(float, float);

int main() {
	cout << "Integer function call: " << multiply(5, 6) << "\n";
	cout << "Floating point function call: " << multiply((float)4.3, 5.0); // type casting was needed to avoid ambiguity

	return 0;
}

// define overloaded functions
int multiply(int a, int b) {
	return a * b;
}

float multiply(float a, float b) {
	return a * b;
}
