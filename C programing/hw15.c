#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks <= 40)
    {
        printf("Grade: Fail\n");
    }
    else if (marks <= 50)
    {
        printf("Grade: C\n");
    }
    else if (marks <= 60)
    {
        printf("Grade: B\n");
    }
    else if (marks <= 70)
    {
        printf("Grade: A\n");
    }
    else if (marks <= 80)
    {
        printf("Grade: A+\n");
    }
    else if (marks > 80)
    {
        printf("Grade: A++\n");
    }

    return 0;
}