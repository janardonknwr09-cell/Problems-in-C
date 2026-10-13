//WAp to find the first and last digit of a number
#include<stdio.h>
int main()
{
    int num, last, first, number;
    printf("Enter the number\n");
    scanf("%d", &num);
    number = num;
    last = num % 10;
    first = num;
    while(first >= 10)
    {
        first = first / 10;
    }
    printf("First and last digit of %d is %d and %d\n", number, first, last);
    
    return 0;
}
