#include <stdio.h>

int main()
{
    int lateDays;
    float fine = 0;

    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &lateDays);

    if (lateDays <= 5)
    {
        fine = lateDays * 0.50;
        printf("Fine: %.2f rupees\n", fine);
    }
    else if (lateDays <= 10)
    {
        fine = 5 * 0.50 + (lateDays - 5) * 1.00;
        printf("Fine: %.2f rupees\n", fine);
    }
    else if (lateDays <= 30)
    {
        fine = 5 * 0.50 + 5 * 1.00 + (lateDays - 10) * 5.00;
        printf("Fine: %.2f rupees\n", fine);
    }
    else
    {
        printf("Membership cancelled due to late return of more than 30 days.\n");
    }

    return 0;
}