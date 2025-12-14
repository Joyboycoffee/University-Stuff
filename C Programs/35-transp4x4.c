#include <stdio.h>

int main() {
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int t[4][4];

    for (int i = 0; i < 4; i++) {          // compute transpose
        for (int j = 0; j < 4; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("original matrix:\n");          // print original
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\ntranspose matrix:\n");       // print transpose
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
