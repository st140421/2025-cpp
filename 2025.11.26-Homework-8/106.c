#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char line[1000];
    
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';
    
    int wordCount = 0;
    char* token = strtok(line, " ");
    
    while (token != NULL) {
        wordCount++;
        token = strtok(NULL, " ");
    }
    
    printf("%d\n", wordCount);
    
    return 0;
}