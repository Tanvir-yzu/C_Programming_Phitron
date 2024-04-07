#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (0 <= a && b <= 100)
    {
        if (a >= b)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("error: invalid");
    }
    return 0;
}