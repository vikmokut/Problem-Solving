// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int arr[] = {45, 23, 43, 6, 45, 32, 12, 1};
    int arrLen = sizeof(arr) / sizeof(*arr);
    
    for (int i = 1; i < arrLen; i++) {
        int sortValue = arr[i];
        for (int j = i - 1; j >= 0; j--) {
            if ( arr[j+1] < arr[j]) {
                arr[j+1] = arr[j];
                arr[j] = sortValue;
            } else break;
        }
    }
    
    for (int i : arr) std::cout << i << ' ';

    return 0;
}
