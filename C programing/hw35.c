#include <stdio.h>

// Function to calculate factorial of a number
long factorial(int num)
{
    long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    float x, term, sum = 0;

    printf("Enter the value of X: ");
    scanf("%f", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        term = pow(x, i) / factorial(i); // X^i / i!
        sum += term;                     // Add the term to the sum
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}