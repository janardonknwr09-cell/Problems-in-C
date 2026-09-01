// WAP to print even numbers upto 'n'

#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter the number upto which even numbers to print:");
    scanf("%d",&num);

    for(i=1; i <=num ;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
