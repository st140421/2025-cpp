#include <stdio.h>
#include <string.h>

// Функция сравнения строк
int Compare(const char* S1, const char* S2) {
    return strcmp(S1, S2) == 0;
}

int main(int argc, char **argv) {
    char S1[1000], S2[1000];
    
    fgets(S1, sizeof(S1), stdin);
    fgets(S2, sizeof(S2), stdin);
    
    S1[strcspn(S1, "\n")] = '\0';
    S2[strcspn(S2, "\n")] = '\0';
    
    if (Compare(S1, S2)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}