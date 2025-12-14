//WAP to find out in a[25] how many are positive, how many are negative, how many are even and how many odd.
#include <stdio.h>
int main() {
    int a[25];
    int i;
    int positiveCount = 0, negativeCount = 0, evenCount = 0, oddCount = 0, zeroCount = 0;  
    printf("Enter 25 integers (positive and negative):\n");
    for (i = 0; i < 25; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 25; i++) {

        //pos neg check
        if (a[i]==0)
            zeroCount++;
        else if (a[i] > 0) {
            positiveCount++;
        } else if (a[i] < 0) {
            negativeCount++;
        }

        //odd even check
        if (a[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Number of positive integers: %d\n", positiveCount);
    printf("Number of negative integers: %d\n", negativeCount);
    printf("Number of zeros: %d\n", zeroCount);
    printf("Number of even integers: %d\n", evenCount);
    printf("Number of odd integers: %d\n", oddCount);
    return 0;
}