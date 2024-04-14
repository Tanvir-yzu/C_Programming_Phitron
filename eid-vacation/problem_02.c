#include <stdio.h>
int main()
{
    int d, r, q;
    scanf("%d%d%d", &d, &r, &q);
    int i = (d - q) / r;
    printf("%d", i);
    return 0;
}