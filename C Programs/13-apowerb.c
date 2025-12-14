#include<stdio.h>

int main(){
    int b, e;
    unsigned long long result = 1;

    printf("Enter base number: ");
    scanf("%d", &b);
    printf("Enter exponent number: ");
    scanf("%d", &e);

    for(int i = 1; i <= e; i++)
    {
        result *= b;
    }

    printf("%d raised to the power of %d is %llu", b, e, result);

    return 0;
}