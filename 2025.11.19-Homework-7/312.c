#include <stdio.h>

int phi(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }
    
    int prev = 1;  // φ0
    int curr = 1;  // φ1
    int next;
    
    for (int i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return curr;
}

int main(int argc, char **argv) {
    int n = 0;
    
    scanf("%d", &n);
    
    // Проверка корректности входных данных
    if (n < 0) {
        return 1;
    }
    
    int result = phi(n);
    
    printf("%d\n", result);
    
    return 0;
}