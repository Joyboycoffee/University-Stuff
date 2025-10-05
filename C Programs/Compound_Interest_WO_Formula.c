#include <stdio.h>
int main()
{
    float Principal_Amount, Rate, Compound_Amount;
    int Time;

    printf("Enter the Principal Amount: ");
    scanf("%f", &Principal_Amount);

    printf("Enter the Time (in years): ");
    scanf("%d", &Time);

    printf("Enter the Rate of Interest (per year): ");
    scanf("%f", &Rate);

    Rate = Rate/100;

    Compound_Amount = Principal_Amount;


    for(int iter = 1; iter <= Time; iter++)
    {
        float interest = Compound_Amount * Rate;
        Compound_Amount = Compound_Amount + interest; 
    }

    printf("\nTotal Amount after %d years: %.2f\n", Time, Compound_Amount);
    printf("Compound Interest Earned: %.2f\n", Compound_Amount - Principal_Amount);

    return 0;
}
