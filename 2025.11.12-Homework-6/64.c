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
   
    int first = 1;
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            if (!first) {
                printf(" ");
            }
            printf("%d", arr[i]);
            first = 0;
        }
    }

    free(arr);
    
    return 0;
}