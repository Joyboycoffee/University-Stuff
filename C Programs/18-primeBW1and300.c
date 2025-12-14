//WAP to print all the prime numbers from 1 to 300.
#include <stdio.h>
int main() {
    int num, i, isPrime;

    printf("Prime numbers from 1 to 300 are:\n");
    for (num = 2; num <= 300; num++) {
        isPrime = 1; // Assume number is prime
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}