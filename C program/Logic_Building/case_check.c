// WAP. to check wether a character is uppercase or lowercase.
// logic for checking uppercase or lowercase is as follows:
// if character is between 'A' to 'Z' then it is uppercase
// if character is between 'a' to 'z' then it is lowercase
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an uppercase character", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase character", ch);
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }

    return 0;
}