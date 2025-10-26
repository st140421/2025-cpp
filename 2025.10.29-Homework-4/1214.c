#include <stdio.h>

int main() {
    int n = 0;
    scanf_s("%d", &n);
    
    int arr[n]{0};
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    
    int x;
    scanf_s("%d", &x);
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}