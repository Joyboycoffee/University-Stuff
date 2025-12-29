//2. Quick Sort

#include <stdio.h>
// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // last element as pivot
    int i = low - 1;

// Traverse and place smaller elements before pivot
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
        i++;
        swap(&arr[i], &arr[j]);
    }
}

// Place pivot at correct position
     swap(&arr[i + 1], &arr[high]);
     return i + 1;
}

// Recursive QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
    int pivotIndex = partition(arr, low, high);

       quickSort(arr, low, pivotIndex - 1);    // left side
       quickSort(arr, pivotIndex + 1, high);   // right side
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

     quickSort(arr, 0, n - 1);

// Print sorted array
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

    return 0;
}