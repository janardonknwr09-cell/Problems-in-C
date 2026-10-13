// WAP to find the factors of a given number using for loop.
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number to find its factors: ");
    scanf("%d", &num);
    
    printf("Factors of %d are:\n", num);
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d \n", i);
        }
    }
    printf("\n");
    return 0;
}