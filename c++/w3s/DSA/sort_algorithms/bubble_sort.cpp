#include <iostream>

int main() {
    int age[] = {45, 23, 43, 6, 45, 32, 12, 1};
    int ageLen = sizeof(age) / sizeof(*age);
    int maxValue;
    int count = 0;
    
    while (count < ageLen) {
        for (int i = 0; i < ageLen; i++){
            if (i == (ageLen - 1))
                break;
            if (age[i] > age[i + 1]) {
                maxValue = age[i];
                age[i] = age[i + 1];
                age[i + 1] = maxValue;
            }
        }
        count++;
    }

    for (int i = 0; i < ageLen; i++) {
        if (i == (ageLen - 1)) {
            std::cout << age[i] << '\n';
        } else {
            std::cout << age[i] << ", ";
        }
    }
    
    return 0;
}
