#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      // Declaring variables
    int N;

    // Taking input
    scanf("%d", &N);

    // Printing numbers from 1 to N along with Yes or No
    for (int i = 1; i <= N; i++) {
        if (i % 5 == 0) {
            printf("%d Yes\n", i);
        } else {
            printf("%d No\n", i);
        }
    }
    return 0;
}