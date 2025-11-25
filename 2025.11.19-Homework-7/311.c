#include <stdio.h>

double fast_power(double a, int n) {
    if (n == 0) {
        return 1.0;
    }
    
    double result = 1.0;
    double base = a;
    int exponent = n;
    
    while (exponent > 0) {
        
        // Если степень нечетная, умножаем результат на текущее значение base
        if (exponent % 2 == 1) {
            result *= base;
        }
        // Возводим base в квадрат
        base *= base;
        // Делим степень на 2
        exponent /= 2;
    }
    
    return result;
}

int main(int argc, char **argv) {
    double a = 0.0;
    int n = 1;
    
    scanf("%lf %d", &a, &n);
    
    double result = fast_power(a, n);
    
    printf("%.6lf\n", result);
    
    return 0;
}