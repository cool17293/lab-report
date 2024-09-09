

#include <stdio.h>

int main()
{
    int number, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial of a negative number does not exist.\n");
    }
    else
    {

        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }

        printf("The factorial of %d is %d\n", number, factorial);
    }

    return 0;
}