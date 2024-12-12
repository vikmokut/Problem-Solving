#include <iostream>
using namespace std;

int main() {
	int ages[8] = {45, 23, 64, 64, 34, 12, 32, 23};
	int sumAge = 0;
	int agesLength = sizeof(ages) / sizeof(*ages);
	// calculate average age
	for (int i : ages)
		sumAge += i;

	cout << "Average age is: " << sumAge / agesLength;

	return 0;
}
