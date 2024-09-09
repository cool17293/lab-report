// alphabet pattern;

#include <stdio.h>

int main()
{
    int i = 1, j, n;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    while (i <= n)
    {
        j = 1;
        ch = 'A';
        while (j <= i)
        {
            printf("%c ", ch);
            ch++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}