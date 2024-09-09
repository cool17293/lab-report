2.WAP to swap two number entered by user.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display original values
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap the numbers using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
