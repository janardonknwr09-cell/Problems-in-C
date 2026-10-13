// WAP to design a calculator using switch statement.

#include <stdio.h>
int main()
{
    int optr, num1, num2;
    printf("Enter the two numbers:");
    scanf("%d%d", &num1, &num2);

    printf("\nPress 1 for addition");
    printf("\nPress 2 for subtraction");
    printf("\nPress 3 for multiplication");
    printf("\nPress 4 for division");
    printf("\n Enter Operator number:");
    
    scanf("%d",&optr);

    switch(optr)
    {
        case 1:
        printf("Result: %d", num1+num2);
        break;

        case 2:
        printf("Result: %d", num1-num2);
        break;

        case 3:
        printf("Result: %d", num1*num2);
        break;

        case 4:
        printf("Result: %d", num1/num2);
        break;

        default:
        printf("Invalid operator number!");
    }

    return 0;
}