// 7.WAP to check the ASCII code of a user entered char;

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The ASCII code of '%c' is %d\n", ch, (int)ch);

    return 0;
}