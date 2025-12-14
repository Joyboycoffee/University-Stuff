#include <stdio.h>

int main() {
    int a[5][5] = {
        {12, 5, 9, 4, 25},
        {7, 18, 3, 11, 6},
        {14, 2, 30, 21, 8},
        {19, 1, 16, 17, 10},
        {13, 22, 20, 15, 24}
    };

    int max = a[0][0];

    for (int i = 0; i < 5; i++) {              // find largest
        for (int j = 0; j < 5; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }

    printf("largest number in matrix = %d\n", max);

    return 0;
}
