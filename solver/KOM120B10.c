#include <stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a==b && b==c && c==d) {
        printf("KONSTAN\n");
    } else if (a>=b && b>=c && c>=d) {
        printf("MONOTON MENURUN\n");
    } else if (a<=b && b<=c && c<=d) {
        printf("MONOTON MENAIK\n");
    } else {
        printf("TIDAK MONOTON\n");
    }
    return 0;
}