//Make a function named change_it() which receives an array of integers and the size of that integer. In the function you need to change the value of the last index of that array and assign 100 there. You don’t need to return anything. After that print the array in the main function and see if it is updated.
//Sample Input
//5
//10 20 30 40 50
//3
//1 2 3

//Sample Output
//10 20 30 40 100
//1 2 100



#include <stdio.h>

void change_it(int arr[], int size) {
    arr[size - 1] = 100;
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    change_it(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}