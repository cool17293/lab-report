// number pattern;

#include <stdio.h>

int main()
{
    int i = 1, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}