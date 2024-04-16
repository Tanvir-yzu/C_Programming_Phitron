#include <stdio.h>
#include <stdlib.h> // Include for dynamic memory allocation

int main()
{
    int n;
    scanf("%d", &n);
    
    // Dynamically allocate memory for the array
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) // Check if allocation was successful
    {
        printf("Memory allocation failed\n");
        return 1; // Return an error code
    }

    // Read elements into the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print elements of the array in reverse order
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    
    // Free dynamically allocated memory
    free(arr);

    return 0;
}
