#include <stdio.h>

int main() {
    
    int n = 0;
    
    scanf_s("%d", &n);
    
    int curr = 0;
    int max = 0;
    
    for (int i = 0; i < n; i++) {
        
        int temp = 0;
        
        scanf_s("%d", &temp);
        
        if (temp > 0) {
            
            curr++;
          
            if (curr > max) {
                
                max = curr;
                
            }
            
        } else {
            
            curr = 0;
            
        }
        
    }
    
    printf("%d\n", max);
    
    return 0;
}