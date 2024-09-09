//Write a program to print the all even number between 1 to 20 for loop ;

#include <stdio.h>

int main()
{
    int i;

    for (i = 2; i <= 20; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}