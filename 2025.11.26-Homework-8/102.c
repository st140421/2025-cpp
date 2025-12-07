#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool IsDigit(unsigned char c) {
    char digits[] = "0123456789";
    for (int i = 0; i < strlen(digits); i++) {
        if (digits[i] == c) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char **argv) {
    unsigned char c;
    scanf("%c", &c);
    
    if (IsDigit(c)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}