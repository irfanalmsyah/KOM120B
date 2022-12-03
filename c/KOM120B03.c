#include <stdio.h>
int main () {
    int C, i = 1;
    scanf("%d", &C);
    for (i; C >= i; i++) {
        C -= i;
    }
    printf("%d", i);
}