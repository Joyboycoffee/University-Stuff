//print all ascii from 0 to 255 using while
#include<stdio.h>
int main(){
    int i = 0;
    printf("ASCII values from 0 to 255:\n");
    while(i <= 255)
    {
        printf("ASCII value of %d is %c\n", i, i);
        i++;
    }
    return 0;
}