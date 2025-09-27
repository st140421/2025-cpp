#include <stdio.h>

int main(int argc, char **argv){
    int x=0;
    scanf("%i",&x);
    printf("%s%d%s%d%s\n","The next number for the number ",x," is ",x+1,".");
    printf("%s%d%s%d%s","The previous number for the number ",x," is ",x-1,".");

    return 0;
}