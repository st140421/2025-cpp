#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char str[1000];
    
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';
    
    char* longest_word = NULL;
    int max_length = 0;
    
    char* token = strtok(str, " ");
    
    while (token != NULL) {
        int length = strlen(token);
        
        if (length > max_length) {
            max_length = length;
            longest_word = token;
        }
        
        token = strtok(NULL, " ");
    }
    
    if (longest_word != NULL) {
        printf("%s\n%d\n", longest_word, max_length);
    }
    
    return 0;
}