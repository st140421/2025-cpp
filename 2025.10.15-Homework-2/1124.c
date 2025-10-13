#include <cstdio>

int main() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    
    scanf_s("%d %d", &x1, &y1);
    scanf_s("%d %d", &x2, &y2);
    
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {

        printf("NO\n");

    }
    
    else{

        if (x1 == x2) {

        if (y1 == 2) {

            if (y2 == y1 + 1 || y2 == y1 + 2) {

                printf("YES\n");

            } else {

                printf("NO\n");
            }

        } else {

            if (y2 == y1 + 1) {

                printf("YES\n");

            } else {

                printf("NO\n");

            }
        }
    } else {

        printf("NO\n");
        
        }}
    
    return 0;
}