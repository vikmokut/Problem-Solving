#include <stdio.h>
#include <time.h>
long long largestPrimeFactor(long long);

int main() {
    clock_t start = clock();
    long long n = 600851475143;
    printf("Largest factor: %lld\n", largestPrimeFactor(n));
    clock_t end = clock();

    double time_taken = (double)(end - start);
    printf("Runtime: %f", time_taken);
    return 0;
}

// 
long long largestPrimeFactor(long long n) {
    long long factor = 2;
    // eliminates all factors of 2
    while ((n % factor) == 0) {
    	n /= factor;
    }

    factor = 3;
    // tests odd factors begining from 3
    while (n != 1) {
        while ((n % factor) == 0) {
            n /= factor;
        }
        factor += 2;
    }
    return factor - 2; // subtracts the last increment
}

/*
Hers is the pseudocode I used:

START 
INIT factor = 2
WHILE n % 2 == 0
    n = n/factor
ENDWHILE
SET factor = 3
WHILE n != 1
    WHILE n % factor == 0
        n = n/factor
    ENDWHILE
    factor = 2
ENDWHILE
RETURN (factor - 2)
*/
