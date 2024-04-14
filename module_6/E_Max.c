#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    int max = number[0];

    for (int i = 1; i < n; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    printf(" %d\n", max);

    return 0;
}