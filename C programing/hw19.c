#include <stdio.h>

int main()
{
    int num, reversed = 0, original, digit;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
    {
        original = num;

        // Extract and reverse the digits
        while (num != 0)
        {
            digit = num % 10;                 // Get the last digit
            reversed = reversed * 10 + digit; // Add digit to reversed number
            num /= 10;                        // Remove the last digit from num
        }

        printf("Reversed number: %d\n", reversed);
    }
    else
    {
        printf("The number is not a 3-digit number.\n");
    }

    return 0;
}