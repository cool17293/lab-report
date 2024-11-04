//Write a program to print the even valued element from array
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
    
    // Print the even-valued elements
    printf("Even-valued elements in the array: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}