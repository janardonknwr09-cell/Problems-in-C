#include <stdio.h>

int main()
{
    int a, b, c, d, sum;
    float average;
    
    printf("Enter four test marks: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Find the sum of three best marks by excluding the lowest
    if (a <= b && a <= c && a <= d) {
        // a is the lowest, so sum of best three = b + c + d
        sum = b + c + d;
    }
    else if (b <= a && b <= c && b <= d) {
        // b is the lowest, so sum of best three = a + c + d
        sum = a + c + d;
    }
    else if (c <= a && c <= b && c <= d) {
        // c is the lowest, so sum of best three = a + b + d
        sum = a + b + d;
    }
    else {
        // d is the lowest, so sum of best three = a + b + c
        sum = a + b + c;
    }
    
    // Calculate average
    average = sum / 3.0;
    
    printf("Average of the three best marks: %.2f", average);
    
    return 0;
}
