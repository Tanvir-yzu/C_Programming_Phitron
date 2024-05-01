#include <stdio.h>

void findMinMax(int arr[], int size, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min, max;
    findMinMax(arr, N, &min, &max);
    
    printf("%d %d\n", min, max);
    
    return 0;
}