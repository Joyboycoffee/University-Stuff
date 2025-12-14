#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    //check if armstrong
    int temp = n;
    int sum = 0, digit, count = 0;

    //count digits
    while(temp != 0){
        count++;
        temp /= 10;
    }

    //checking if armstrong or not
    temp = n;
    while(temp != 0){
        digit = temp % 10;
        int power;
        power = pow(digit, count);
        // for(int i = 0; i < count; i++){
        //     power *= digit;
        // }
        sum += power;
        temp /= 10;
    }

    
    if(sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}