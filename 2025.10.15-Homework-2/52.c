#include <cstdio>

int main(int argc, char** argv ) {
    int x;

    scanf_s("%d", &x);
 
    if ((x%10)+(x%100/10)+(x%1000/100)  == (x/1000/100)+(x/1000/10%10)+(x/1000%10)) {
        printf("YES");
    }
    else{
         printf("NO");
    }

    return 0;
}