#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Odd numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}