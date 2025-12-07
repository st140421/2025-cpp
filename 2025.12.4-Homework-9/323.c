#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int main(int argc, char **argv) {
    int n;
    scanf("%d", &n);

    Point* pnts = malloc(n * sizeof(Point));
    if (pnts == NULL){return 1;}
    
    for(int i = 0;i<n;++i){
        scanf("%d %d",&pnts[i].x,&pnts[i].y);
    }

    double sum_x = 0.0, sum_y = 0.0;

    for (int i = 0; i < n; i++) {
        sum_x += pnts[i].x;
        sum_y += pnts[i].y;
    }

    double center_x = sum_x / n;
    double center_y = sum_y / n;

    // Вывод с точностью 15 значащих цифр
    printf("%.15g %.15g\n", center_x, center_y);

    free(pnts);
    return 0;
}