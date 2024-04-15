#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    c++;
    if (c > 'z')
    {
        c = 'a';
    }

    printf("%c", c);
    return 0;
}