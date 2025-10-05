#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int Phone_Number, Operator_Code = 71, iter;
    unsigned long long int Unique_Numbers;

    // Number of times a unique 12 digit phone number can be distributed is : 10^10

    Unique_Numbers=pow(10,10);

    printf ("Total Number of times a unique 12 digit number can be distributed is : %llu\n", Unique_Numbers);

    // Generating Random 12 digit number

    srand(time(0));
    
    for (int j=0; j<10; j++)
    {
        printf("Random 12-digit phone number: +%d ", Operator_Code);
        for (iter=0; iter<10; iter++)
        {
            printf("%d", rand() % 10);
            
        }
        printf("\n");
    }
 
    return 0; 

}