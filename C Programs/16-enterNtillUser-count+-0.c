//let user enter numbers until they want, then print the count of positive, negative and 0 numbers entered
#include <stdio.h>
int main() {
    int number;
    char choice;
    int pcount = 0, ncount = 0, zcount = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0) {
            pcount++;
        } else if (number < 0) {
            ncount++;
        } else {
            zcount++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // space before %c to consume any leftover newline character

    } while (choice == 'y' || choice == 'Y');

    printf("Count of positive numbers: %d\n", pcount);
    printf("Count of negative numbers: %d\n", ncount);
    printf("Count of zeros: %d\n", zcount);

    return 0;
}
