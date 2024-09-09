#include <stdio.h>

int main()
{
    int sum = 0;
    int number = 1;

    while (number <= 100)
    {
        sum += number;
        number += 2; // Move to the next odd number
    }

    printf("The sum of all odd integers between 1 and 100 is %d\n", sum);

    return 0;
}