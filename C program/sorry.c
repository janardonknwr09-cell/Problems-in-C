// Program to print "Sorry" a specified number of times

#include<stdio.h>
int main()
{
    int num, i=1;
    printf("Enter the number of prints:\n");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        printf("Sorry\n");
    }

    return 0;
}