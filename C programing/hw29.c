#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999)
    {
        printf("The number is not a 3-digit number.\n");
    }
    else
    {

        for (int i = 0; i < 3; i++)
        {
            sum += number % 10; // Add the last digit to sum
            number /= 10;       // Remove the last digit from number
        }

        printf("The sum of the digits is %d\n", sum);
    }

    return 0;
}