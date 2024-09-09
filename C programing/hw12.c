#include <stdio.h>

int main()
{
    int a, b, temp;
    float ratio;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate the ratio
    if (b != 0)
    { // Ensure division by zero does not occur
        ratio = (float)a / b;
        printf("The ratio of %d to %d is %.2f\n", a, b, ratio);

        if (ratio > 0)
        {
            // Swap the numbers using a third variable
            temp = a;
            a = b;
            b = temp;
            printf("After swapping: a = %d, b = %d\n", a, b);
        }
        else
        {
            printf("The ratio is not greater than 0; no swapping done.\n");
        }
    }
    else
    {
        printf("Cannot calculate ratio because the second number is zero.\n");
    }

    return 0;
}