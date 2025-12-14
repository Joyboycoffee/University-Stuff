#include <stdio.h>

int main() {
    int a[3][3] = {
        {2, 4, 1},
        {6, 5, 3},
        {1, 2, 0}
    };

    int b[3][3] = {
        {1, 3, 2},
        {4, 0, 5},
        {2, 1, 3}
    };

    int c[3][3];

    for (int i = 0; i < 3; i++) {              // multiply matrices
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("result of multiplication:\n");     // print result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
