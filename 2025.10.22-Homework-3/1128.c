#include <stdio.h>

int main(int argc, char **argv) {

    double x = 0;
    double y = 0;

    scanf_s("%lf %lf", &x, &y);
    
    int day = 1;
    double dist = x;
    double eps = 1e-9;
    
    while (dist < y - eps) {
        
        dist = dist * 1.15;
        day++;

    }
    
    printf("%d\n", day);

    return 0;
}