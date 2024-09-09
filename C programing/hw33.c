#include <stdio.h>
#include <math.h> // For pow() function

int main()
{
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits in the number
    for (int temp = num; temp != 0; n++)
    {
        temp /= 10;
    }

    for (int temp = num; temp != 0; temp /= 10)
    {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if (result == originalNum)
    {
        printf("%d is an Armstrong number.\n", originalNum);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}