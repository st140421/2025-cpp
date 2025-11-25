#include <cstdio>
#include <cmath>

int main(int argc, char **argv) {
    int a = 0;
    int b = 0;
    int c = 0;

    scanf_s("%d %d %d", &a, &b, &c);
    
    if (a == 0 && b == 0 && c == 0) {
        printf("-1");
        return 0;
    }
    
    if (a == 0) {

        if (b == 0) {

            printf("0");

        } else {
            double root = (double)(-c) / b;
            printf("1\n%.5f", root);
        }

        return 0;
    }
    
    double discriminant = (double)b * b - 4.0 * a * c;
    
    if (discriminant < -1e-9) {

        printf("0");

    } else if (fabs(discriminant) < 1e-9) {

        double root = (double)(-b) / (2.0 * a);
        printf("1\n%.5f", root);

    } else {
  
        double sqrt_d = sqrt(discriminant);
        double root1 = (-b - sqrt_d) / (2.0 * a);
        double root2 = (-b + sqrt_d) / (2.0 * a);
        
        if (root1 < root2) {

            printf("2\n%.5f\n%.5f", root1, root2);

        } else {

            printf("2\n%.5f\n%.5f", root2, root1);
            
        }
    }
    
    return 0;
}