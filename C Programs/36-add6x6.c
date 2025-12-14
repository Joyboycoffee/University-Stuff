#include <stdio.h>

int main() {
    int a[6][6] = {
        {10,  3,  5,  7,  2,  8},
        {4,   9, 11,  6, 13, 12},
        {15, 14, 18, 16, 20, 19},
        {21, 25, 22, 23, 24, 26},
        {30, 28, 27, 29, 31, 33},
        {35, 32, 34, 36, 38, 37}
    };

    int b[6][6] = {
        {1,  2,  3,  4,  5,  6},
        {7,  8,  9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    int c[6][6];

    for (int i = 0; i < 6; i++) {             // add both matrices
        for (int j = 0; j < 6; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("result of addition:\n");          // print resulting matrix
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%02d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
