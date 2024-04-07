#include <stdio.h>

int main() {
    int A, B;
    
    // Reading input
    scanf("%d %d", &A, &B);
    
    // Checking if A is a multiple of B or vice versa
    if (A % B == 0 || B % A == 0) {
        printf("Multiples\n");
    } else {
        printf("No Multiples\n");
    }

    return 0;
}
