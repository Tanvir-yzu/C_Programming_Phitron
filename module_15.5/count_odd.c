//Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that. Call that function in the main function and print the count there.

#include <stdio.h>

int count_odd(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int count = count_odd(arr, size);
    printf("%d\n", count);

    return 0;
}