#include <iostream>
#include <vector>

int main() {
    Sorter ageSorter;
    
    std::vector<int> ages = {2, 2, 5, 1, 1, 8, 9, 3, 2, 7, 4, 1, 8};
    int agesArray[] = {5, 4, 3, 7, 1, 1, 34, 23, 1, 25, 63};
    int agesLen = sizeof(agesArray) / sizeof(*agesArray);
    
    // sorts agesArray
    ageSorter.arrayPtr = agesArray; // assign &ages.at(0) sorts vector
    ageSorter.arrayLength = agesLen; // assign ages.size() sorts vector;
    ageSorter.selectionSort();

    for (int i : agesArray) std::cout << i << ", ";
    
    return 0;
}
