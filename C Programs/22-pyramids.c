#include <stdio.h>

int main() {
    int i, j, n;

    // Pyramid of stars
    printf("Enter the number of rows for the star pyramid: ");
    scanf("%d", &n);
    printf("Pyramid of stars:\n");
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n-i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pyramid of numbers
    printf("\nEnter the number of rows for the number pyramid: ");
    scanf("%d", &n);
    printf("Pyramid of numbers:\n");
    for (i = 1; i <= n; i++) {          // outer loop → controls rows
        for (j = 0; j < n-i; j++) {       // prints spaces before numbers
            printf(" ");
        }

        int num = 1;                    // starting number for this row

        for (j = 1; j <= i; j++) {      // prints increasing numbers (left side)
            printf("%d", num);
            num++;
        }

        num -= 2;                       // adjust to one less than last printed

        for (j = 1; j < i; j++) {       // prints decreasing numbers (right side)
            printf("%d", num);
            num--;
        }

    printf("\n");                   // move to next line after each row

}

    // Pyramid of alphabets
    printf("\nEnter the number of rows for the alphabet pyramid: ");
    scanf("%d", &n);
    printf("Pyramid of alphabets:\n");
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n-i; j++) {
            printf(" ");
        }

        char ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        ch -= 2;
        for (j = 1; j < i; j++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}
