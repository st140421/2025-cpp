#include <cstdio>

int main(int argc, char **argv) {
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;

    scanf_s("%d %d %d", &a1, &b1, &c1);
    scanf_s("%d %d %d", &a2, &b2, &c2);
    
    int min1 = 0;
    int max1 = 0;
    int mid1 = 0;
    
    min1 = (a1 < b1) ? a1 : b1;
    min1 = (min1 < c1) ? min1 : c1;
    max1 = (a1 > b1) ? a1 : b1;
    max1 = (max1 > c1) ? max1 : c1;
    mid1 = a1 + b1 + c1 - min1 - max1;
    
    int min2 = 0;
    int max2 = 0;
    int mid2 = 0;
    
    min2 = (a2 < b2) ? a2 : b2;
    min2 = (min2 < c2) ? min2 : c2;
    max2 = (a2 > b2) ? a2 : b2;
    max2 = (max2 > c2) ? max2 : c2;
    mid2 = a2 + b2 + c2 - min2 - max2;
    
    if (min1 == min2 && mid1 == mid2 && max1 == max2) {
        printf("Boxes are equal");
    }

    else if (min1 <= min2 && mid1 <= mid2 && max1 <= max2) {
        printf("The first box is smaller than the second one");
    }

    else if (min2 <= min1 && mid2 <= mid1 && max2 <= max1) {
        printf("The first box is larger than the second one");
    }
    
    else {
        printf("Boxes are incomparable");
    }
    
    return 0;
}