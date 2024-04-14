#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        // Temporary array to store digits
        int digits[10]; // assuming maximum number of digits is 10

        // Count of digits
        int count = 0;

        // Extract digits
        while (N > 0) {
            digits[count] = N % 10;
            N /= 10;
            count++;
        }

        // Print digits in reverse order
        for (int i = count - 1; i >= 0; i--) {
            printf("%d ", digits[i]);
        }
        printf("\n");
    }

    return 0;
}
