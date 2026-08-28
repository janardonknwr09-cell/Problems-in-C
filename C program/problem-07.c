// WAP to count the number of digits in a number
#include<stdio.h>
int main()
{
    int num, count=0, number;
    printf("Enter the number\n");
    scanf("%d", &num);
    number = num;
    while(num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("Number of digits in %d is %d", number, count);
}