#include <stdio.h>

int main()
{
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n", &n[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", n[i]);
    }
    return 0;
}