#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int def = a - b;
    if (def >= 0)
    {
        printf("%d\n", def);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}