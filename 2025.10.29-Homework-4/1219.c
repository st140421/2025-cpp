#include <stdio.h>

int main(int argc, char **argv) {
    int N = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    scanf_s("%d %d %d %d %d", &N, &A, &B, &C, &D);
    
    int arr[N]{0}; 
    for (int i = 1; i <= N; i++) {
        arr[i-1] = i;
    }

    A--; B--; C--; D--;
    
    while (A < B) {
        int temp = arr[A];
        arr[A] = arr[B];
        arr[B] = temp;
        A++;
        B--;
    }
    
    while (C < D) {
        int temp = arr[C];
        arr[C] = arr[D];
        arr[D] = temp;
        C++;
        D--;
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}