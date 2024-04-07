#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    int min = A < B ? (A < C ? A : C) : (B < C ? B : C);
    int max = A > B ? (A > C ? A : C) : (B > C ? B : C);

    printf("%d %d\n", min, max);

    return 0;
}
