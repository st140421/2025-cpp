#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int N = 0;
    
    scanf("%d", &N);
    
    if (N < 1 || N > 100) {
        return 1;
    }
    
    int *arr = (int*)malloc(N * sizeof(int));
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    free(arr);
    
    return 0;
}