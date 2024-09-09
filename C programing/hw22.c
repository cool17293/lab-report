//.Write a program to calculate the sum of each digit of a number entered by the user using while loop:

#include <stdio.h>

int main()
{
    int number, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = (number < 0) ? -number : number;

    while (number != 0)
    {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add digit to sum
        number /= 10;        // Remove the last digit
    }

    printf("The sum of the digits is %d\n", sum);

    return 0;
}