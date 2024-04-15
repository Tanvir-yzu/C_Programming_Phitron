#include <stdio.h>


int isPossible(int a, int b, int c, int d) {
    if (a + b + c == d || a + b * c == d || a + b - c == d ||
        a - b + c == d || a - b * c == d || a - b - c == d ||
        a * b + c == d || a * b * c == d || a * b - c == d) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
   long long  int a, b, c, d;

  
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

   
    if (isPossible(a, b, c, d)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
