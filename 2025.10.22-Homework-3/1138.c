#include <stdio.h>

int main(int argc, char **argv) {

    int num = 0;
    int max1 = -1;  
    int max2 = -1;
    
    while (1) {

        scanf_s("%d", &num);
        
        if (num == 0) {

            break;

        }
        
        if (num > max1) {

            max2 = max1;
            max1 = num;

        } else if (num > max2) {

            max2 = num;

        }
    }
    
    printf("%d\n", max2);
    
    return 0;
}