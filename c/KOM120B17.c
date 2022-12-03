#include <stdio.h>
#include <math.h>

double luas(int x1, int y1, int x2, int y2, int x3, int y3) {

    double x = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    double y = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    double z = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));

    double semiperimeter = (x+y+z)/2;
    return sqrt(semiperimeter*(semiperimeter-x)*(semiperimeter-y)*(semiperimeter-z));
}

int main() {
    double x, y, z, x1, y1, x2, y2, x3, y3;
    int n;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    
    double A = luas(x1, y1, x2, y2, x3, y3);
    
    scanf("%d", &n);
    for (int c = 0; c < n; c++) {
        scanf("%lf %lf", &x, &y);
        double A1 = luas(x, y, x2, y2, x3, y3);
        double A2 = luas(x1, y1, x, y, x3, y3);
        double A3 = luas(x1, y1, x2, y2, x, y);

        if (fabs(A-A1-A2-A3) < 10e-10) {
            printf("DALAM\n");
        } else {
            printf("LUAR\n");
        }
    }
    return 0;
}