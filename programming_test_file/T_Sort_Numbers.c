#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int original_a = a;
    int original_b = b;
    int original_c = c;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    printf("%d\n%d\n %d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", original_a, original_b, original_c);

    return 0;
}