#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    printf("%d", x/100);
    x %= 100;
    printf(" %d", x/50);
    x %= 50;
    printf(" %d", x/10);
    x %= 10;
    printf(" %d", x/5);
    x %= 5;
    printf(" %d", x/2);
    x %= 2;
    printf(" %d\n", x);
    x %= 1;

    return 0;
}