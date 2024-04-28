#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // Store the original values
    int originalA = A, originalB = B, originalC = C;

    // Sort the numbers in ascending order
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    // Print the sorted numbers
    printf("%d\n%d\n%d\n\n", A, B, C);

    // Print the numbers in the sequence as they were read
    printf("%d\n%d\n%d\n", originalA, originalB, originalC);

    return 0;
}