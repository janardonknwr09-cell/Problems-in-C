// WAP. to print grade of students according to their percentage.
// grade system are as follows:
// percentage >= 80 : Grade A
// percentage >= 60 : Grade B
// percentage >= 40 : Grade C
// percentage < 40 : Fail
#include <stdio.h>
int main()
{
    int percentage;
    printf("Enter the percentage of student: ");
    scanf("%d", &percentage);
    if(percentage >= 80 && percentage <=100)
    {
        printf("Grade A");
    }
    else if(percentage >= 60 && percentage < 80)
    {
        printf("Grade B");
    }
    else if(percentage >= 40 && percentage < 60)
    {
        printf("Grade C");
    }
    else if(percentage < 40 && percentage >=0)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid percentage");
    }
}