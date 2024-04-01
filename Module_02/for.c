#include <stdio.h>
int main()
{
    int sum = 0;
    int n;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i = i + 1)
    {
        sum += i;    // sum = sum + i কে আমরা sum += i এভাবেও লিখতে পারি
    }
    printf("%d", sum);
    return 0;
}