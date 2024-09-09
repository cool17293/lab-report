#include <stdio.h>

int main()
{
    int num = 1;

    printf("Numbers between 1 and 100 divisible by both 2 and 3 are:\n");

    while (num <= 100)
    {
        if (num % 2 == 0 && num % 3 == 0)
        {
            printf("%d ", num);
        }
        num++;
    }

    return 0;
}