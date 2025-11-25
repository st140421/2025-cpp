#include <stdio.h>

int Election(int x, int y, int z) {

    int count_true = x + y + z;
    
    return (count_true >= 2);
}

int main(int argc, char **argv) {
    int x = 0;
    int y = 0;
    int z = 0;

    scanf("%d %d %d", &x, &y, &z);
    
    
    // Проверка корректности ввода
    if ((x != 0 && x != 1) || (y != 0 && y != 1) || (z != 0 && z != 1)) {
        return 1;
    }
    
    int result = Election(x, y, z);
    printf("%d\n", result);
    
    return 0;
}