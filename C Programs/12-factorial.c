//finding factorial of entered number
#include<stdio.h>

int main(){
    int n = 0;
    unsigned long long fact=1;
    printf("Enter number for factorial: ");
    scanf("%d", &n);
    

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    

    printf("Factorial of %d is %llu", n, fact);



    return 0;
}