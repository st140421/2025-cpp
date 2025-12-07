#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char str[1000];
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }
    
    return 0;
}