#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter age of first person A: ");
    scanf("%d", &a);
    printf("Enter age of second person B: ");
    scanf("%d", &b);
    printf("Enter age of third person C: ");
    scanf("%d", &c);

    int smallest = a;
    if(b < smallest){
        smallest = b;
    }
    if(c < smallest){
        smallest = c;
    }
    printf("The smallest age is: %d\n", smallest);

    //tell who is youngest out of a, b and c
    if(smallest == a)
        printf("First person A is the youngest.\n");
    else if(smallest == b)
        printf("Second person B is the youngest.\n");
    else
        printf("Third person C is the youngest.\n");


    return 0;
}