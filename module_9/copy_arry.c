#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int m;

    scanf("%d", &m);
    int b[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int ans[n + m];

    // Copy elements from the first array
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }

    // Copy elements from the second array (starting at index n)
    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    // Print the combined array

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}
