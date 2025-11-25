#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int N = 0;
    
    scanf("%d", &N);
    
    if (N < 1 || N > 10000) {
        return 1;
    }
    
    int *arr = (int*)malloc(N * sizeof(int));
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0) {
            free(arr);
            return 1;
        }
    }
    
    int found = 0;
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] * arr[i + 1] > 0) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    free(arr);
    
    return 0;
}