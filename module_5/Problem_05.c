#include <stdio.h>
int main()
{

    char a;
    scanf("%c", &a);

    if (a >= 48 && a <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if (a >= 65 && a <= 90)
    {
        /* code */
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else if (a >= 97 && a <= 122)
    {
        /* code */
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    else
    {
        printf("error\n");
    }

    return 0;
}