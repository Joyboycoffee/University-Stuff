#include <stdio.h>

int main() {
    int a[4][4] = {
        {16, 3, 9, 1},
        {8, 14, 2, 7},
        {5, 11, 4, 10},
        {13, 6, 15, 12}
    };
    
    int arr[16];
    int i, j, k = 0;

    // copy matrix elements to 1D array
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            arr[k++] = a[i][j];

    // bubble sort
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // put sorted values back into matrix
    k = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            a[i][j] = arr[k++];

    // print sorted matrix
    printf("Sorted 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
