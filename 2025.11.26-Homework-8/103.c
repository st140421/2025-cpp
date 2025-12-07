#include <stdio.h>

unsigned char TolUppert(unsigned char c) {

    // Проверяем, является ли символ строчной буквой латинского алфавита
    if (c >= 'a' && c <= 'z') {
        // Преобразуем в верхний регистр
        return c - ('a' - 'A');
    }
    // Если символ не является строчной буквой, возвращаем его без изменений
    return c;
}

int main(int argc, char **argv) {
    unsigned char c;
    
    scanf("%c", &c);
    
    unsigned char result = TolUppert(c);
    
    printf("%c\n", result);
    
    return 0;
}