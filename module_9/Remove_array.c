#include <stdio.h>

int main() {
    // Declare variable to hold the size of the array
    int n;
    
    // Read the size of the array from the user
    scanf("%d", &n);
    
    // Declare an array of size n to hold integers
    int arr[n];
    
    // Read integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Declare variable to hold the position of the element to be removed
    int pos;
    
    // Read the position from the user
    scanf("%d", &pos);
    
    // Shift elements to the left starting from the specified position
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Print the modified array (excluding the last element)
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
