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
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (number[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (number[i] > 0)
        {
            pos++;
        }
        else if (number[i] < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}