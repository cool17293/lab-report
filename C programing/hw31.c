//Write a program to check whether the   given character is a vowel or not using  switch case ;

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.\n", ch);
        break;
    default:
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}