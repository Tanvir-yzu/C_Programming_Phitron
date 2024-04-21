#include <stdio.h>

int main()
{
    // Get the size of the array from the user
    int n;
    printf("Enter the size of the array: "); 
    scanf("%d", &n);

    // Declare the array using the input size
    int arr[n];

    // Get array elements from the user
    printf("Enter %d elements:\n", n); 
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // Reverse the array elements
    int i = 0; 
    int j = n - 1;
    while (i < j)
    {
        // Swap elements at positions i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        // Move towards the middle of the array
        i++;
        j--;
    }

    // Print the reversed array
    printf("Reversed array: "); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
