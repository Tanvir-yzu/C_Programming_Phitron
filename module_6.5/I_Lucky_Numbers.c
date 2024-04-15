#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (10 <= n && n <= 99)
    {
        int one = n % 10;
        int ten = n / 10;
        if (one != 0 && (one % ten == 0 || ten % one == 0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}