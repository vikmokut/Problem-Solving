#include <iostream>

/*
 * Description - array variables are pointers, passing them as function parameters allow us to manipulate the original arrays by their memory addresses.
 * 
 * Passing arrays as function parameters may require that we explicitly pass the array size(length) if required for the function's operation because within the function, the sizeof() operator can only return the size of the array type in bytes.
 */

// makes a copy of an array, then changes the content
void changeArr(int arr[], int arrLen, int* copyArray) {
    // makes a copy of the original
    // ps: you can't use a for-each statement here dt addresses
    for (int i = 0; i < arrLen; i++) {
        copyArray[i] = arr[i];
    }
    // changes the content of the original array
    for (int i = 0; i < arrLen; i++) {
        arr[i] *= 5;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int arrLen = sizeof(array) / sizeof(*array);
    int arrCopy[arrLen];
    
    changeArr(array, arrLen, arrCopy);
    // prints a copy of the old array
    std::cout << "Old Array:\n";
    for (int i = 0; i < 5; i++) std::cout << arrCopy[i] << ", ";
    putchar('\n');
    
    // prints the new array
    std::cout << "New Array:\n";
    for (int i : array) std::cout << i << ", ";

    return 0;
}
