//.Write a program to find maximum  among the number entered by the user  while loop 
#include <stdio.h>

int main()
{
    int number, max, firstInput = 1;

    printf("Enter numbers (enter -1 to end):\n");

    while (1)
    {
        scanf("%d", &number);

        if (number == -1)
        {
            break;
        }

        if (firstInput)
        {
            max = number;
            firstInput = 0;
        }
        else if (number > max)
        {
            max = number;
        }
    }

    if (!firstInput)
    {
        printf("The maximum number is %d\n", max);
    }
    else
    {
        printf("No valid numbers were entered.\n");
    }

    return 0;
}