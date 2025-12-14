#include<stdio.h>

int main(){
    int n;
    int rev = 0, temp, digit, i = 1;

   
    while (1)
    {
        printf("Enter a 4-digit integer: ");
        scanf("%d", &n);

        if (n>=1000 && n<=9999)
            break;  
        else 
            printf("Not 4 digit. Enter again.");
    }
    
    

    while(n!=0){
        rev *= 10;
        rev += n%10;
        n/=10;
    }
    
    printf("Reversed number is: %d\n", rev);

    return 0;
}