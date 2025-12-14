#include<stdio.h>

int main(){
    int n;
    int rev = 0, temp;

   
    while (1)
    {
        printf("Enter a 4-digit integer: ");
        scanf("%d", &n);

        if (n>=1000 && n<=9999)
            break;  
        else 
            printf("Not 4 digit. Enter again.");
    }
    
    
    temp = n;
    while(temp!=0){
        rev *= 10;
        rev += temp%10;
        temp/=10;
    }
    
    printf("Reversed number is: %d\n", rev);

    //compare with original
    if(rev == n)
        printf("The reverse is same as number.\n");
    else
        printf("The reverse is not same as number.\n");

    return 0;
}