#include <iostream>

// program sorts characters in ascending order using their ASCII values - implemented with the bubblesort algorithm.
int main() {
    char arr[] = {'b', 'g', 'e', 'h', 'e', 'c', 't', 'e'}; // sample
    int arrLen = sizeof(arr);
    char largeChar; // used to swap characters
   
    // sort characters
    int count = 0;
    while (count < (arrLen - 1)) {
        bool swapped = false; // to check if swap occured
        for (int i = 0; i < (arrLen - 1); i++) {
            // uses ASCII - casts char to int for comparison
            if ((int)arr[i] > (int)arr[i + 1]) {
                // performs swap
                largeChar = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = largeChar;
                swapped = true;
            }
        }
        if (!swapped) // ends program early as all char are sorted
            break;
        count++;
    }

    // prints sorted characters
    for (char ch : arr)
        std::cout << ch << ", ";

    return 0;
}
