#include <stdio.h>

int main(int argc, char **argv) {

    int a = 0;
    int b = 0;

    scanf_s("%d %d", &a, &b);

    int o_a = a;
    int o_b = b;

    while (b != 0) {

        int temp = b;
        b = a % b;
        a = temp;

    }
    
    int gcd = a;
    
    long long lcm = (long long)o_a * o_b / gcd;
    
    printf("%lld\n", lcm);
    
    return 0;
}