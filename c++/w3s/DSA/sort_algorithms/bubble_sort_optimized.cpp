#include <iostream>
void bubbleSort(int*, int);

/*
 * main: entry point
 * description: sort an array from lowest to highest value
 */
int main() {
    int age[] = {45, 23, 43, 6, 45, 32, 12, 1};
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

// sort function
void bubbleSort(int* arr, int arrLen) {
    int maxValue;
    int count = 0;
    
    // (arrLen - 1) since the swap operation is on paired elements.
    while (count < (arrLen - 1)) {
        bool swapped = false; // check if a swap occured
	// prevent iter through the already sorted end of the array
        for (int i = 0; i < (arrLen - count - 1); i++) {
                // perform the swap by dereferencing the arr address.
                if (*(arr + i) > *((arr + i) + 1)) {
                        maxValue = *(arr + i);
                        *(arr + i) = *((arr + i) + 1);
                        *((arr + i) + 1) = maxValue;
                        swapped = true;
                }
        }
        // ends program if no swap occured, arr is sorted.
        if (!swapped)
            break;
        count++;
    }
}
