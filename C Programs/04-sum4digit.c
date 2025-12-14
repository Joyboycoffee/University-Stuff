#include<stdio.h>

int main(){
    int n;
    int sum = 0;

   
    while (1)
    {
        printf("Enter a 4-digit integer: ");
        scanf("%d", &n);

        if (n>=1000 && n<=9999)
            break;  
        else 
            printf("Not 4 digit. Enter again.");
    }


    int temp = n;
    while (temp!=0)
    {
        sum += temp%10;
        temp /=10;
    }
    
    printf("Sum : %d", sum);

    return 0;

}
    