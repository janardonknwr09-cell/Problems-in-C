// Program to check if a number is prime or composite
#include<stdio.h>
int main()
{
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for(i=2; i<=num/2; i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is a composite number.\n", num);
    return 0;
}

// Logic:
// A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
// A composite number is a natural number greater than 1 that is not prime, meaning it has positive divisors other than 1 and itself.