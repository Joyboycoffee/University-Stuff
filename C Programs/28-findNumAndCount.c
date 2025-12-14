//WAP to find if the number to be searched is present in the array and if yes then, display the number of times it appears.
#include <stdio.h>
int main() {
    //initialize array with random values  
    int n, i, num, count = 0, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
            found = 1;
        }
    }
    if (found) {
        printf("The number %d is present in the array and appears %d times.\n", num, count);
    } else {
        printf("The number %d is not present in the array.\n", num);
    }
    return 0;
}