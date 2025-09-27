#include <stdio.h>

int main(int argc, char **argv){
    long long x=0;
    scanf("%i",&x);
    long long y=(x/10)*(x/10+1)*100+25;
    printf("%lld",y);

    return 0;
}