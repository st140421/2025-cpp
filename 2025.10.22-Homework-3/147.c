#include <stdio.h>

int main() {
    int n = 0;

    scanf_s("%d", &n);
    
    if (n == 0) {
        
		printf("0\n");
        
    } else if (n == 1) {
        
        printf("1\n");
        
    } else {
        
        int a = 0;
        int b = 1;
        int c = 1;
        
        while (c < n) {
            
            int next = a + b;
            
            a = b;
            b = next;
            c++;
            
        }
        
        printf("%d\n", b);
        
    }
    
    return 0;
    
}