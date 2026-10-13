// WAP to find the factorial of a given number using for loop.

#include <stdio.h>
int main()
{
    int i, fact=1, num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}
// the logic of this program is as follows:
// 1. Initialize a variable 'fact' to 1, which will hold the factorial.
// 2. Use a for loop to iterate from 1 to the given number 'num'.
// 3. In each iteration, multiply 'fact' by the current value of 'i''
// 4. After the loop ends, 'fact' will contain the factorial of 'num'.
// 5. Print the result to the user.