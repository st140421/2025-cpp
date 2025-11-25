#include <stdio.h>

int binomial_coefficient(int n, int k) {

    // Базовые случаи рекурсии
    if (k == 0 || k == n) {
        return 1;
    }

    // Рекурсивный случай по формуле C(n,k) = C(n-1,k-1) + C(n-1,k)
    return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);
}

int main(int argc, char **argv) {
    int n = 0;
    int k = 0;
    
    scanf("%d %d", &n, &k);
    
    // Проверка корректности входных данных
    if (n < 0 || k < 0 || k > n || n > 20 || k > 20) {
        return 1;
    }
    
    int result = binomial_coefficient(n, k);
    
    printf("%d\n", result);
    
    return 0;
}