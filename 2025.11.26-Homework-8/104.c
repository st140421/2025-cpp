#include <stdio.h>

char change_case(char c) {

    // Проверяем, является ли символ строчной латинской буквой
    if (c >= 'a' && c <= 'z') {
        // Преобразуем в заглавную
        return c - ('a' - 'A');
    }
    // Проверяем, является ли символ заглавной латинской буквой
    else if (c >= 'A' && c <= 'Z') {
        // Преобразуем в строчную
        return c + ('a' - 'A');
    }
    // Если не латинская буква, возвращаем без изменений
    return c;
}

int main(int argc, char **argv) {
    char c;
    scanf("%c", &c);
    
    char result = change_case(c);
    printf("%c\n", result);
    
    return 0;
}