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
    
    for (int i = 0; i < N; i += 2) {
        printf("%d", arr[i]);
        if (i + 2 < N) {
            printf(" ");
        }
    }

    printf("\n");
    
    free(arr);
    
    return 0;
}