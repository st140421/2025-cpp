#include <cstdio>
#include <cmath>

int main() {

    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    
    scanf_s("%d %d", &x1, &y1);
    scanf_s("%d %d", &x2, &y2);
    
    int dx = fabs(x1 - x2);
    int dy = fabs(y1 - y2);
    
    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {

        printf("YES\n");

    } else {

        printf("NO\n");

    }
    
    return 0;
}