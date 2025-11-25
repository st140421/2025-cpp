#include <stdio.h>

int main(int argc, char **argv) {
    int n = 0;
    scanf_s("%d", &n);
    
    int arr[n]{0};
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    
    int L = 0;
    int R = 0;

    scanf_s("%d %d", &L, &R);
    
    L = L - 1;
    R = R - 1;
    
    int maxval = arr[L];
    int maxind = L;
    
    for (int i = L + 1; i <= R; i++) {
        if (arr[i] > maxval) {
            maxval = arr[i];
            maxind = i;
        }
    }
    
    printf("%d %d\n", maxval, maxind + 1);
    
    return 0;
}