#include <stdio.h>

int main() {
    int n, i, num, max, min, range;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements must be positive.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    range = max - min;

    printf("\nSmallest number: %d", min);
    printf("\nLargest number: %d", max);
    printf("\nRange = %d\n", range);

    return 0;
}
