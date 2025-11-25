#include <stdio.h>
#include <math.h>

int is_prime(int n) {

    // Обработка особых случаев
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    // Проверяем делители до квадратного корня из n
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return 0; 
        }
    }
    
    return 1; // Делителей не найдено - число простое
}

int main(int argc, char **argv) {
    int n = 0;
    
    scanf("%d", &n);
    
    if (is_prime(n)) {
        printf("prime\n");
    } else {
        printf("composite\n");
    }
    
    return 0;
}