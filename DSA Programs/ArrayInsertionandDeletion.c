//1. Array Insertion and Deletion

#include <stdio.h>

int main() {
    int a[100], n, i, choice, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\n1. Insert an element");
    printf("\n2. Delete an element");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter position to insert (1 to %d): ", n + 1);
            scanf("%d", &pos);

            printf("Enter element to insert: ");
            scanf("%d", &element);

            for (i = n; i >= pos; i--) {
                a[i] = a[i - 1];
            }

            a[pos - 1] = element;
            n++;

            printf("Array after insertion:\n");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            break;

        case 2:
            printf("Enter position to delete (1 to %d): ", n);
            scanf("%d", &pos);

            for (i = pos - 1; i < n - 1; i++) {
                a[i] = a[i + 1];
            }

            n--;

            printf("Array after deletion:\n");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}