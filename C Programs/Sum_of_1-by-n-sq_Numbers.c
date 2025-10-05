#include<stdio.h>
int main()
{
    float input, sum;
    sum=0;

    printf("Enter the number you want a sum of: ");
    scanf("%f", &input);

    sum=1/((input*(input+1)*(2*input+1))/6);
    printf("The sum is %f\n", sum);

    return 0;
}