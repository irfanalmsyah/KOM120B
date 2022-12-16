#include <stdio.h>
int main() {
    double x;
    scanf("%lf", &x);
    int y = (int)x;
    double z = x - y;
    printf("%d %.5f\n", y, z);
    return 0;
}