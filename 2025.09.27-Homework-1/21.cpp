#include <stdio.h>

int main(int argc, char **argv){
    int a=0;
    int b=0;
    scanf("%i %i",&a,&b);
    printf("%d",(109+(a*b%109))%109+1);

    return 0;
}