#include <stdio.h>

int main(int argc, char **argv) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    
    int frst = 0;
    
    for (int x = -100; x <= 100; x++) {

        long long val = (long long)a * x * x * x + 
                        (long long)b * x * x + 
                        (long long)c * x + d;
        
        if (val == 0) {
        
            if (frst) {

                printf(" ");

            }

            printf("%d", x);
            frst = 1;

        }
    }
    
    printf("\n");

    return 0;
}