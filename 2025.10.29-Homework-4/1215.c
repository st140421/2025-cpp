#include <stdio.h>
#include <cmath>

int main(int argc, char **argv) {
    int n = 0;
    scanf_s("%d", &n);
    
    int arr[n]{0};
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    
    int x;
    scanf_s("%d", &x);
    
    int clsst = arr[0];
    int mindf = fabs(arr[0] - x);
    
    for (int i = 1; i < n; i++) {
        int currdf = fabs(arr[i] - x);
        
        if (currdf < mindf) {
            mindf = currdf;
            clsst = arr[i];
        }

        else if (currdf == mindf && arr[i] < clsst) {
            clsst = arr[i];
        }
    }
    
    printf("%d\n", clsst);
    
    return 0;
}