#include<stdio.h>
#include <math.h>

int main(){
    float ar, p, l, b;
    printf("Enter the area of the rectangle: ");
    scanf("%f", &ar);

    printf("Enter the preimeter of the rectangle: ");
    scanf("%f", &p);

    //using are and perimeter well find the formula of l and b using the quadratric eqn

    float temp = ((p*p)/16) - ar;

    if(temp<0){
        printf("No such rectangle can exist.\n");
    } else{
    float diff = sqrt(temp);
    l = (p/4)+diff;
    b = (p/4)-diff;

    printf("\nLength of rectangle : %f units.", l);
    printf("\nBreadth of rectanble : %f units.", b);
    }

    return 0;
}