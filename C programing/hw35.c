#include <stdio.h>

// Function to calculate factorial of a number
long factorial(int num) {
    long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    float x, term, sum = 0;

    // Input the value of X and the number of terms N
    printf("Enter the value of X: ");
    scanf("%f", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        term = pow(x, i) / factorial(i);  // X^i / i!
        sum += term;  // Add the term to the sum
    }

    // Print the result
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}