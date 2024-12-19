#include <iostream>

// implement a selection sort algorithm - finds the least value and moves it to the front of the array.
int main() {
    int age[] = {45, 23, 43, 6, 45, 32, 12, 1};
    int ageLen = sizeof(age) / sizeof(*age);
    int count = 0;
    int changeIndex;
    
    // iterate one less than the array length
    while (count < (ageLen - 1)) {
        bool leastChanged = false;
        int leastVal = age[count];

        // check for least value and
        // prevent interation through already sorted values at the beginning of the array
        for (int i = count; i < ageLen; i++) {
            if (age[i] < leastVal) {
                leastVal = age[i];
                changeIndex = i;
                leastChanged = true;
            }
        }
        // swap values if least value was changed
        if (leastChanged) {
            age[changeIndex] = age[count];
            age[count] = leastVal;
        }
        count++;
    }
    
    for (int i : age)
        std::cout << i << '\n';

    return 0;   
}

