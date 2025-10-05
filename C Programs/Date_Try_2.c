#include <stdio.h>

int LeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() 
{
    int day, month, year;
    printf("Enter the Date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (day <= 0 || month <= 0 || month > 12 || year <= 0 || year > 9999) 
    {
        printf("Error! The Date is wrong!\n");
        return 0;
    }

    int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (month == 2 && LeapYear(year))
    daysInMonth[1] = 29;

    if (day > daysInMonth[month - 1]) 
    {
        printf("Invalid date! Month %d has only %d days.\n", month, daysInMonth[month - 1]);
        return 0;
    }

    int originalDay = day;

    for (int i = 0; i < 18; i++) 
    {
        month = month + 2;
        if (month > 12)
        {
            month = month - 12;
            year = year + 1;
        }

        day = originalDay;

        if (month == 2) {
            if ((LeapYear(year) && day > 29) || (!LeapYear(year) && day > 28)) {
                printf("Date %d does not exist in February %d\n", day, year);
                continue;
            }
        }
        else if (day > daysInMonth[month - 1]) 
            {
                day = daysInMonth[month - 1];
            }

        printf("Date is: %02d/%02d/%d\n", day, month, year);
    }

    return 0;
}