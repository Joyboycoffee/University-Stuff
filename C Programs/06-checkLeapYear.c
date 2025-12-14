#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Using conditional (ternary) operator:
    ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) )
        ? printf("%d is a leap year.\n", year)
        : printf("%d is not a leap year.\n", year);

    return 0;
}
