#include <stdio.h>

int main(int argc, char **argv){
    int a=0;
    int b=0;
    scanf("%i %i",&a,&b);
    printf("%d %d %d",b/a,b-a*(b/a),(a-(b-a*(b/a)))%a);

    return 0;
}