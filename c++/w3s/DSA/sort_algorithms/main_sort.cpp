#include <iostream>
#include "bubble_sort_2.h"

int main() {
	int age[] = {45, 23, 43, 64, 34, 42, 22, 32, 25, 35};
	int ageLen = sizeof(age) / sizeof(*age);

	bubbleSort(age, ageLen);

	for (int i = 0; i < ageLen; i++) {
        	if (i == (ageLen - 1)) {
            		std::cout << age[i] << '\n';
        	} else {
            		std::cout << age[i] << ", ";
        	}
    	}

	return 0;
}
