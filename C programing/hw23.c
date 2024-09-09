#include <stdio.h>

int main()
{
    int number, count = 0;
    float total = 0.0, average;

    printf("Enter numbers (enter -1 to end):\n");

    while (1)
    {
        scanf("%d", &number);

        if (number == -1)
        {
            break;
        }

        total += number;
        count++;
    }

    if (count > 0)
    {
        average = total / count;
        printf("Total: %.2f\n", total);
        printf("Average: %.2f\n", average);
    }
    else
    {
        printf("No numbers were entered.\n");
    }

    return 0;
}