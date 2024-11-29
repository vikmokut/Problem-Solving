#include <iostream>
using namespace std;

int main() {
    int arr_1[] = {6, 10, 7, 2, 1, 4, 8, 1, 5, 10};
    int arr_len = sizeof(arr_1)/sizeof(*arr_1);
    // int arr_1_sorted[arr_len];
    int bucket;

    for (int j = 0; j < arr_len; j++) {
        for (int i = 0; i < arr_len; i++) {
            if (arr_1[i] > arr_1[i + 1]) {
                if (i == (arr_len - 1))
                    break;
                else {
                    bucket = arr_1[i];
                    arr_1[i] = arr_1[i + 1];
                    arr_1[i + 1] = bucket;
                }
                
            }
        }
    }

    for (int k : arr_1) {
        cout << k << ' ';
    }

    return 0;
}
