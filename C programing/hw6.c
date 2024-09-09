#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the greatest number using ternary operator
    int greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}