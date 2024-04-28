#include <stdio.h>

void print_sequence(int n) {
    int step = n > 0 ? -1 : 1;  // Determine the step size based on whether n is positive or negative
    int end = n > 0 ? -n - 1 : -n + 1;  // Determine the end point of the sequence based on whether n is positive or negative
    while(n != end) {  // Continue the loop until n reaches the end point
        printf("%d ", n);  // Print the current value of n
        n += step;  // Increment or decrement n by the step size
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Read an integer from the user
    print_sequence(n);  // Call the print_sequence function with the user's input
    return 0;
}