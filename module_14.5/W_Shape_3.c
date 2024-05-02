#include <stdio.h>

void printDiamond(int N) {
    int i, j, k;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = N - 1; i >= 1; i--) {
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printDiamond(N);
    return 0;
}