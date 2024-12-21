#include <iostream>

// implement counting sort
int main() {
    int myArray[] = {2, 3, 0, 0, 0, 3, 1, 1, 1, 2, 3, 0, 2, 3, 2, 4, 5, 6, 4, 5, 6};
    int countArray[] = {0, 0, 0, 0, 0, 0, 0}; // find a way to determine the max value
			// use the max value to generate the countArray.
    
    int count = 0;
    while(count < (sizeof(countArray) / sizeof(*countArray))) {
        for (int i : myArray) {
            if (i == count) {
                countArray[count]++;
            }
        }
        count++;
    }
    
    int count_2 = 0;
    count = 0;
    while (count < (sizeof(countArray) / sizeof(*countArray))) {
        for (int i = 0; i < countArray[count]; i++) {
            myArray[count_2] = count;
            count_2++;
        }
        count++;
    }
    
    // prints the sorted array
    for (int i : myArray) {
        std::cout << i << ' ';
    }

    return 0;
}
