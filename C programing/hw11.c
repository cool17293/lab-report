// WAP to Check whether a triangle is valid   or not.;

#include <stdio.h>

int main()
{
    float angle1, angle2, angle3;

    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if ((angle1 + angle2 + angle3) == 180.0)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}