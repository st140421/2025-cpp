#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int N = 0;
    
    scanf("%d", &N);
    
    if (N < 1 || N > 35) {
        return 1;
    }

    int *arr = (int*)malloc(N * sizeof(int));
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < N / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}