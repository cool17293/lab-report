// Write a program to print even number between 1-100 while loop;
#include <stdio.h>

int main()
{
    int num = 2;

    printf("Even numbers between 1 and 100 are:\n");

    while (num <= 100)
    {
        printf("%d ", num);
        num += 2;
    }

    return 0;
}