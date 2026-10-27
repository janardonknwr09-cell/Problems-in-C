// Find the average of the best remarks (best marks) from four test marks.
// Find the smallest of the four number and subtract it from the total sum of the four numbers to get the sum of the best three marks.
#include <stdio.h>

int main()
{
    int a, b, c, d, total, smallest, best_sum;
    float average;

    printf("Enter four test marks: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // Step 1: Find sum of all four marks
    total = a + b + c + d;

    // Step 2: Find the smallest mark
    if (a <= b && a <= c && a <= d)
    {
        smallest = a;
    }
    else if (b <= a && b <= c && b <= d)
    {
        smallest = b;
    }
    else if (c <= a && c <= b && c <= d)
    {
        smallest = c;
    }
    else
    {
        smallest = d;
    }

    // Step 3: Subtract smallest from total to get sum of three best marks
    best_sum = total - smallest;

    // Step 4: Calculate average of three best marks
    average = best_sum / 3.0;

    printf("\nAverage of the three best marks: %.2f\n", average);

    return 0;
}