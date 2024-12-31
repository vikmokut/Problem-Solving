#include <iostream>

int main() {
    int arr[] = {6,5,3,2,1,0,7,3,2,2,6,1,7,8,6,8,3,2,0,0,9,0,4,9,8,7,0};
    int arrLen = sizeof(arr) / sizeof(*arr);
    int largeValue;
    
    // bubble sort - iteration is one less the the arr length
    for(int i = 0; i < (arrLen - 1); i++) {
        bool swapped = false;
        // inner loop reduces iteration by one at each ith instance
        for (int j = 0; j < ((arrLen - 1) - i); j++) {
            if (arr[j] > arr[j + 1]) {
                largeValue = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = largeValue;
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    for (int i : arr) std::cout << i << ", ";
    
    return 0;
}


