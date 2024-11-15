#include <stdio.h>
#include <math.h>

// Function to count the number of divisors of a number
int countDivisors(int num) {
    int count = 0;
    int sqrtNum = (int)sqrt(num);

    for (int i = 1; i <= sqrtNum; i++) {
        if (num % i == 0) {
            count += 2; // Count both divisors i and num/i
        }
    }

    if (sqrtNum * sqrtNum == num) {
        count--; // If num is a perfect square, adjust count
    }

    return count;
}

int main() {
    int triangle = 0;
    int n = 1;

    while (1) {
        triangle += n; // Generate the nth triangle number
        int divisors = countDivisors(triangle);

        if (divisors > 500) {
            printf("The first triangle number with over 500 divisors is: %d\n", triangle);
            break;
        }

        n++;
    }

    return 0;
}

