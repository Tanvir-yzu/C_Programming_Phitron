#include <stdio.h>

int main() {
    int A, B;
    char S;
    
    // Input A, S, and B
    scanf("%d%c%d", &A, &S, &B);
    
    // Perform arithmetic operation based on the operator
    switch(S) {
        case '+':
            printf("%d\n", A + B);
            break;
        case '-':
            printf("%d\n", A - B);
            break;
        case '*':
            printf("%d\n", A * B);
            break;
        case '/':
            if (B == 0) {
                printf("Error! Division by zero.\n");
                return 1;
            }
            printf("%d\n", A / B);
            break;
        default:
            printf("Error! Operator not recognized.\n");
            return 1;
    }

    return 0;
}
