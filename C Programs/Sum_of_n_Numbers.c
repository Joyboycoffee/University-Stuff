#include<stdio.h>
int main()
{
    int input, sum;
    sum=0;

    printf("Enter the number you want a sum of: ");
    scanf("%d", &input);

    sum=(input*(input+1))/2;
    printf("The sum is: %d\n", sum);
    
    return 0;
}