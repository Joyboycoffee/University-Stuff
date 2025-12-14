#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two integers to swap: ");
    scanf("%d %d", &a, &b);

    //print before swap
    printf("Before swap:\na : %d, b : %d", a, b);

    a = a+b;
    b = a-b;
    a = a-b;

    //print again

    printf("\nAfter swap:\na : %d, b : %d", a, b);

    return 0;
}