#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef struct {
    int x, y;
} Point;

double distance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

bool can_form_triangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main(int argc, char **argv) {
    int n;
    scanf("%d", &n);
    if(n>=101 || n<=2){return 1;}
    
    Point* pnts = malloc(n * sizeof(Point));
    if (pnts == NULL){return 1;}
    
    for(int i = 0;i<n;++i){
        scanf("%d %d",&pnts[i].x,&pnts[i].y);
    }
    
    double max_perimeter = 0.0;
    
    // Перебираем все возможные тройки точек
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                double a = distance(pnts[i], pnts[j]);
                double b = distance(pnts[i], pnts[k]);
                double c = distance(pnts[j], pnts[k]);
                
                if (can_form_triangle(a, b, c)) {
                    double perimeter = a + b + c;
                    if (perimeter > max_perimeter) {
                        max_perimeter = perimeter;
                    }
                }
            }
        }
    }
    
    // Выводим результат с 15 значащими цифрами
    printf("%.15g\n", max_perimeter);
    
    free(pnts);
    return 0;
}