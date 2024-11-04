//Write a program to find duplicate elements from an array

#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find and print duplicate elements
    printf("Duplicate elements in the array: ");
    int hasDuplicates = 0;  // Flag to check if there are duplicates
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                hasDuplicates = 1;
                break;
            }
        }
    }
    
    // If no duplicates are found
    if (!hasDuplicates) {
        printf("No duplicate elements found");
    }
    
    printf("\n");
    return 0;
}