// WAP a program to add 2 in all digit of a   five digit number entered by the user;

#include <stdio.h>

int main()
{
    int number, original_number, digit;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999)
    {
        printf("The number must be a five-digit number.\n");
        return 1;
    }

    original_number = number;

    printf("Result after adding 2 to each digit: ");

    while (number > 0)
    {
        digit = number % 10; // Extract the last digit
        digit += 2;          // Add 2 to the digit
        if (digit > 9)
        {
            digit = digit - 10;
        }
        printf("%d", digit);
        number /= 10; // Remove the last digit
    }

    printf("\n");

    return 0;
}