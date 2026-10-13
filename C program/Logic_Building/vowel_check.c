// WAP to chck if an alphabet is vowel or not.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabet:");
    scanf("%c",&ch);
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') || (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
    {
        printf("The Alphabet '%c' is a vowel.", ch);
    }
    else{
        printf("The Alphabet '%c' is a consonant.", ch);
    }

    return 0;
}