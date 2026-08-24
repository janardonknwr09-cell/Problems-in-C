// WAP. to check wether a year is leap year or not.


// logic for leap year is as follows:
// year is leap year if it is divisible by 4 and not divisible by 100
// or year is leap year if it is divisible by 400
// example: 2024 is leap year because it is divisible by 400
// while 1900 is not leap year because it is divisible by 100 but not by 400
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}