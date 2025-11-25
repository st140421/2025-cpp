#include <stdio.h>

double power(double a, int n) {

    if (n == 0) {
        return 1.0;
    }
    
    if (n < 0) {
        return 1.0 / power(a, -n);
    }
    
    return a * power(a, n - 1);
}

int main(int argc, char **argv) {
    double a = 0.0;
    int n = 1;
    
    scanf("%lf %d", &a, &n);
    
    double result = power(a, n);
    
    printf("%g\n", result);
    
    return 0;
}