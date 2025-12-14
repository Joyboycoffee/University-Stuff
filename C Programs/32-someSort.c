#include <stdio.h>

void selectionSort(int a[], int n) {        // selection sort
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void bubbleSort(int a[], int n) {           // bubble sort
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int a[], int n) {        // insertion sort
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void printArray(int a[], int n) {           // print array
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int n;
    
    // Preinitialized array
    int arr1[] = {64, 25, 12, 22, 11, 90, 5, 3, 45};
    int arr2[] = {64, 25, 12, 22, 11, 90, 5, 3, 45};
    int arr3[] = {64, 25, 12, 22, 11, 90, 5, 3, 45};
    n = sizeof(arr1) / sizeof(arr1[0]);


    selectionSort(arr1, n);                 // do selection sort
    bubbleSort(arr2, n);                    // do bubble sort
    insertionSort(arr3, n);                 // do insertion sort

    printf("\nselection sort:  ");
    printArray(arr1, n);

    printf("bubble sort:     ");
    printArray(arr2, n);

    printf("insertion sort:  ");
    printArray(arr3, n);

    return 0;
}

