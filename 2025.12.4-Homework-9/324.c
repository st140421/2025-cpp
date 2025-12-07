#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

// Функция для вычисления расстояния между двумя точками
double distance(Point a, Point b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main(int argc, char **argv) {
    int n;
    scanf("%d", &n);
    
    Point* pnts = malloc(n * sizeof(Point));
    if (pnts == NULL){return 1;}
    
    for(int i = 0;i<n;++i){
        scanf("%d %d",&pnts[i].x,&pnts[i].y);
    }
    
    double max_dist = 0.0;
    
    // Перебор всех пар точек
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dist = distance(pnts[i], pnts[j]);
            if (dist > max_dist) {
                max_dist = dist;
            }
        }
    }
    
    // Вывод результата с точностью 15 значащих цифр
    printf("%.15f\n", max_dist);
    
    free(pnts);
    return 0;
}