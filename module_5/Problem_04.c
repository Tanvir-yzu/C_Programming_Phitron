#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (999 < a && a <= 9999)
    {
        int i = a / 1000;
        if (i % 2 == 0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    }
    else
    {
        printf("error");
    }

    return 0;
}