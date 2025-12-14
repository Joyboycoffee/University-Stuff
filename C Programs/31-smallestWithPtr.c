#include <stdio.h>

int main() {
    int arr[25]; 
    int *ptr;
    int smallest;


    printf("Enter 25 integers:\n");
    for (ptr = arr; ptr < arr + 25; ptr++) {
        scanf("%d", ptr);
    }

    // Initialize smallest with the first element
    smallest = *arr;

    // Traverse using pointer
    for (ptr = arr + 1; ptr < arr + 25; ptr++) {
        if (*ptr < smallest) {
            smallest = *ptr;
        }
    }

    printf("\nSmallest number in the array: %d\n", smallest);

    return 0;
}
