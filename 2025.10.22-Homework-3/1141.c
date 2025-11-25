#include <stdio.h>

int main(int argc, char **argv) {

    int num = 0; 
    int prev = -1;
    int curr = 0;
    int max = 0;
    
    while (1) {

        scanf_s("%d", &num);
        
        if (num == 0) {

            break;

        }
        
        if (num == prev) {

            curr++;

        } else {

            curr = 1;
            prev = num;

        }
        
        if (curr > max) {

            max = curr;

        }
    }
    
    printf("%d\n", max);

    return 0;
}