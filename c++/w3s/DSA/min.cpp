#include <iostream>
// an algorithm to find the minimum age in an array of ages.
int minimumAge(int*, int);

int main() {
	int ages[] = {48, 32, 53, 23, 25, 64, 7, 7, 45, 2, 43};
	int agesLen = sizeof(ages) / sizeof(*ages);
	std::cout << "The minimum age is: " << minimumAge(ages, agesLen) << '\n';
}

int minimumAge(int* agesArray, int arrayLen){
	int minAge = *agesArray;

	for (int i = 0; i < arrayLen; i++) {
		if (*(agesArray + i) < minAge) {
		// agesArray is a pointer to 0 index of the ages array,
		// so increment then dereference the address
			minAge = *(agesArray + i);
		}
	}
	
	return minAge;
}

