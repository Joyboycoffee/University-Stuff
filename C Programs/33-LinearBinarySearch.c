#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (a[i] == key) return i;
    return -1;
}

int binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) return mid;
        else if (key < a[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    int unsorted[] = {45, 12, 90, 3, 25, 64, 5, 11, 22};
    int sorted[]   = {3, 5, 11, 12, 22, 25, 45, 64, 90};
    int n = sizeof(unsorted) / sizeof(unsorted[0]);
    int key;

    printf("Unsorted array:\n");
    printArray(unsorted, n);

    printf("Sorted array:\n");
    printArray(sorted, n);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int p1 = linearSearch(unsorted, n, key);
    int p2 = binarySearch(sorted, n, key);

    if (p1 == -1) printf("Linear search: not found\n");
    else printf("Linear search: found at index %d\n", p1);

    if (p2 == -1) printf("Binary search: not found\n");
    else printf("Binary search: found at index %d\n", p2);

    return 0;
}
