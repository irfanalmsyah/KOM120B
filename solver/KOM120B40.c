#include <stdio.h>
int main() {
    int n;
    scanf("%d ", &n);
    char x, y, z;
    scanf("%c%c%c", &x, &y, &z);
    if (n >= 3) {
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                printf("%c\n", x);
            } else if (i == 1) {
                printf("%c%c\n", x, z);
            }
            if (i > 1 && i < n - 1) {
                printf("%c", x);
                for (int j = 0; j < i - 1; j++) {
                    printf(" ");
                }
                printf("%c\n", z);
            }
            if (i == n - 1) {
                for (int j = 0; j < n - 1; j++) {
                    printf("%c", y);
                }
                printf("%c", z);
                printf("\n");
            }
        }
    } else {
        printf("%c\n%c%c\n", x, y, z);
    }
    return 0;
}