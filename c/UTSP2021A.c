#include <stdio.h>
int main() {
    int jenispembayaran, cilok;
    scanf("%d %d", &jenispembayaran, &cilok);
    if (jenispembayaran == 1) {
        if (cilok >=10) {
            printf("%d\n%.0f\n%.0f\n", cilok * 10000, (float)cilok * 10000 * 0.2, (float)cilok * 10000 * 0.8);
        } else {
            printf("%d\n%.0f\n%.0f\n", cilok * 10000, (float)cilok * 10000 * 0.1, (float)cilok * 10000 * 0.9);
        }
    } else if (jenispembayaran == 2) {
        if (cilok >=10) {
            printf("%d\n%.0f\n%.0f\n", cilok * 10000, (float)cilok * 10000 * 0.3, (float)cilok * 10000 * 0.7);
        } else {
            printf("%d\n%.0f\n%.0f\n", cilok * 10000, (float)cilok * 10000 * 0.2, (float)cilok * 10000 * 0.8);
        }
    } else if (jenispembayaran == 3) {
        printf("%d\n%.0f\n%.0f\n", cilok * 10000, (float)cilok * 10000 * 0.5, (float)cilok * 10000 * 0.5);
    }
    return 0;
}