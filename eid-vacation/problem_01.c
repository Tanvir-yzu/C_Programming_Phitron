#include <stdio.h>

int main() {
    // Declare variables
    long long X;
    
    // Read input
    scanf("%lld", &X);
    
    // Calculate income in one year
    long long income_in_one_year = X * 365LL;
    
    // Output the result
    printf("%lld\n", income_in_one_year);
    
    return 0;
}
