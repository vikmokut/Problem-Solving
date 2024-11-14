#include <iostream>
using namespace std;

/**
 * main - entry point
 * Description: Prints all prime numbers from 2 to specified range
 * @num: first prime number
 * @range: range of prime numbers to be printed
 *
 * Return: 0 (success)
 */

int main() {
    int num = 2;
    int range = 100;

    printf("Prime Numbers in range %d to %d\n%d\n", num, range, num);
    while (num <= range) {
        for (int i = 2; i < num; i++) {
            // catches the first instance of any number outside 1 & num that
            // returns 0 remainder, reducing compute time.
            if ((num % i) == 0) {
                break;
            }
            // prevents reading a number as prime at the first instance of
            // a non-zero remainder e.g 9%2 = 1 but not a prime number
            else if (i != (num-1)) {
                continue;
                } 
            else { // prints prime numbers
                printf("%d\n", num);
                break;
            } 
        }
        num++;
    }

    return 0;
}
