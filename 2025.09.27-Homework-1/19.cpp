#include <stdio.h>

int main(int argc, char **argv){
    int a=0;
    int b=0;
    scanf("%i %i",&a,&b);
    printf("%d",1+(a%b)*(b%a));

    return 0;
}