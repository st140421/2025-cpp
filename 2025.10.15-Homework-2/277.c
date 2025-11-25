#include <cstdio>
#include <cmath>

int main(int argc, char **argv) {
    int a = 0;
    int b = 0;
    int c = 0;

    scanf_s("%d %d %d", &a, &b, &c);
    
    int first = 1; 
    
    if (a != 0) {
        printf("%d", a);
        first = 0;
    }
    
    if (b != 0) {
        
        if (!first) {

            if (b > 0) {
                printf("+");
            }
        }
        
        if (fabs(b) == 1) {

            if (b == -1) {
                printf("-");
            }

            printf("x");

        } else {
            printf("%dx", b);
        }
    
        first = 0;
    }
    
    if (c != 0) {

        if (!first) {

            if (c > 0) {
                printf("+");
            }

        }
        
        if (fabs(c) == 1) {

            if (c == -1) {
                printf("-");
            }
            
            printf("y");

        } else {
            printf("%dy", c);
        }

        first = 0;
    }

    if (first) {
        printf("0");
    }
    
    return 0;
}