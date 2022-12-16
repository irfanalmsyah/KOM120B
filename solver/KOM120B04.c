#include <stdio.h>
int main() {
    double value;
    scanf("%lf", &value);
    value /= 1.15;
    printf("%.2lf\n", value); 
    return 0;
}