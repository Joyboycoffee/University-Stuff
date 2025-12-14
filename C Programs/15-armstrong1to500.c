// Print all Armstrong numbers from 1 to 500
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, count = 0;
    int result = 0;

    printf("Armstrong numbers from 1 to 500 are:\n");
    for (n = 1; n <= 500; n++) {
        temp = n;
        count = 0;
        result = 0;

        // Count number of digits
        while (temp != 0) {
            temp /= 10;
            ++count;
        }

        temp = n;

        // Calculate sum of each digit raised to 'count'
        while (temp != 0) {
            rem = temp % 10;
            result += pow(rem, count);
            temp /= 10;
        }

        // Check if number is Armstrong
        if (result == n) {
            printf("%d\n", n);
        }
    }

    return 0;
}
