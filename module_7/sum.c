#include <stdio.h>
int main()
{
    int a, b;
    printf("Testing the if statement:\n");
    scanf("%d", &a);
    b = 2 * a + 3;
    if (a == 1)
        printf("The value of a is one.\n");
    else
        printf("The value of a is not one.\n");
    printf("Value of b=%d\n", b);

    return 0;
}