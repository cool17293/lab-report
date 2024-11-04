//Write a program to print the maximum and minimum element of array
#include <stdio.h>

int main() {
    int n, i;
    
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];
    
    // Traverse through the array to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Output the results
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);
    
    return 0;
}