#include <stdio.h>

int main(int argc, char **argv){
    unsigned int a=0;
    unsigned int b=0;
    scanf("%i %i",&a,&b);
    printf("%d %d",b/a+1,b-(a*(b/a)));

    return 0;
}