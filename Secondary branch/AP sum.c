// WAP to print the sum of AP series using for loop.
#include <stdio.h>
int main()
{
    int n, a, d, sum = 0, i;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    
    for(i = 0; i < n; i++)
    {
        sum += a + i * d;
    }
    
    printf("Sum of the AP series is: %d\n", sum);
    return 0;
}