#include <cstdio>

int main(int argc, char** argv ) {
    int x;

    scanf_s("%d", &x);
    
    if (x==1){
        printf("%d",0);
    }
    
    else{
        
        if (x%2==0) {
            printf("%d",x/2);
        }
        
        else{
            printf("%d",x);
        }
    }
    
    return 0;
}