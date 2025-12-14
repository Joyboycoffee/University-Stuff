#include <stdio.h>

int main() {
    int n, num, isDuplicate;
    int count = 0;

    printf("Enter how many unique numbers you want to store: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers (duplicates will be ignored):\n");

    while (count < n) {
        scanf("%d", &num);
        isDuplicate = 0;

        // Check if number already exists
        for (int j = 0; j < count; j++) {
            if (arr[j] == num) {
                isDuplicate = 1;
                printf("Duplicate %d ignored. Enter another number:\n", num);
                break;
            }
        }

        // If not duplicate, store it
        if (!isDuplicate) {
            arr[count] = num;
            count++;
        }
    }

    printf("\nUnique elements are:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nTotal unique elements: %d\n", count);
    return 0;
}
