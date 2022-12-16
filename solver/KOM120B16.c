#include <stdio.h>
int main() {
    long int x;
    scanf("%ld", &x);
    long int y;
    for (y = 0; x > 0; x /= 10) {
        y = y * 10 + x % 10;
    }
    printf("%ld\n", y*3);
    return 0;
}