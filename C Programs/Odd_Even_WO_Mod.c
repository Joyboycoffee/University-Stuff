#include<stdio.h>
int main()
{
    int Number;
    printf("Enter the number: ");
    scanf("%d", &Number);

    if (Number & 1)
    printf("The number is odd");

    else
    printf("The number is even"); 

return 0;
}