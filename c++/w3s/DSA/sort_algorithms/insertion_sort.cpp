#include <iostream>

/*implement an insertion sort algorithm - the array is divided to two, 
 * a sorted part to the left and an unsorted part to the right.
 * Elements are taken from the unsorted area and correctly inserted in their sorted positions in the sorted area.
 */
int main() {
    int age[] = {45, 23, 43, 6, 45, 32, 12, 1};
    int ageLen = sizeof(age) / sizeof(*age);
    int count = 1;
    int changeIndex; // stores the location for insertion
    
    while (count < ageLen){
        int primaryVal = age[count];

        // insert primary value in the correct sort position
        for (int i = count; i > 0; i--){
            if (age[i-1] > primaryVal) {
                age[i] = age[i-1];
                age[i-1] = primaryVal;
            } else { // stop further action since the rest are sorted.
                break;
            }
        }
        count++;
    }

    // prints sorted array
    for (int i : age)
        std::cout << i << '\n';

    return 0;   
}
