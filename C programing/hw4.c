// WAP to optain the sum of the first and  last digit of a four digit number enter by user;

#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Extract the last digit
    lastDigit = num % 10;

    // Extract the first digit by dividing the number until only the first digit is left
    firstDigit = num / 1000;

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}