#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char str[100];
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    int len = strlen(str);
    
    // Проверка на палиндром
    int is_palindrome = 1;
    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}