#include <stdio.h>

double power(double a, int n) {
    double result = 1.0;
    
    // Обработка особых случаев
    if (n == 0) {
        return 1.0;
    }
    if (a == 0.0) {
        return 0.0;
    }
    
    // Вычисление степени
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    
    return result;
}

int main(int argc, char **argv) {
    double a = 0.0;
    int n = 0;
    
    scanf("%lf %d", &a, &n);
    
    // Проверка на отрицательную степень
    if (n < 0) {
        return 1;
    }
    
    double result = power(a, n);
    printf("%.6f\n", result);
    
    return 0;
}