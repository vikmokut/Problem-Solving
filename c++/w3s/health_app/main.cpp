#include <iostream>
#include "health_app.h"
using namespace std;


int main() {
	int a = 20;
	int b = 5;

	cout << a << '+' << b << '=' << addNum(a, b) << endl;
	cout << a << '-' << b << '=' << subNum(a, b) << endl;

	return 0;
}
