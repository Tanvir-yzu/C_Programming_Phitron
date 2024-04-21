#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    // Declare an array with size n+1 to accommodate the additional element
    int a[n + 1];
    
    // Read n integers and store them in the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int pos, val;
    
    // Read the position and value to be inserted
    scanf("%d %d", &pos, &val);
    
    // Shift elements to the right to make space for the new value
    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    
    // Insert the value at the specified position
    a[pos] = val;
    
    // Print the modified array
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
