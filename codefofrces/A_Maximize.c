#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x;
        scanf("%d", &x);

        int max_sum = 0;
        int max_y = x - 1;  // Initialize max_y to x - 1

        for (int y = x - 1; y >= 1; y--) {
            int sum = gcd(x, y) + y;
            if (sum >= max_sum) {
                max_sum = sum;
                max_y = y;
            }
        }

        printf("%d\n", max_y);
    }

    return 0;
}