#include <stdio.h>

void hanoi(int n, int from, int to, int temp) {
    if (n == 1) {
        // Базовый случай: перемещаем один диск
        printf("Disk 1 move from %d to %d\n", from, to);
        return;
    }
    
    // Рекурсивно перемещаем n-1 дисков на временный колышек
    hanoi(n - 1, from, temp, to);
    
    // Перемещаем самый большой диск на целевой колышек
    printf("Disk %d move from %d to %d\n", n, from, to);
    
    // Рекурсивно перемещаем n-1 дисков с временного на целевой колышек
    hanoi(n - 1, temp, to, from);
}

int main(int argc, char **argv) {
    int n = 0;
    
    scanf("%d", &n);
    
    hanoi(n, 1, 2, 3);
    
    return 0;
}