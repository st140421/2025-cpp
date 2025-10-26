#include <stdio.h>

int main() {
    int n = 0;
    scanf_s("%d", &n);
    
    int arr[n]{0};
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    
    int minval = arr[0];
    int maxval = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < minval) {
            minval = arr[i];
        }
        if (arr[i] > maxval) {
            maxval = arr[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxval) {
            arr[i] = minval;
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    return 0;
}