#include <stdio.h>

int main() {
    int num, lastDigit, firstTwoDigits, newNum;

    // Input a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extract the last digit
    lastDigit = num % 10;

    // Extract the first two digits
    firstTwoDigits = num / 10;

    // Create the new number by shifting the last digit to the front
    newNum = lastDigit * 100 + firstTwoDigits;

    // Display the new number
    printf("The new number after shifting the last digit to the first position is: %d\n", newNum);

    return 0;
}