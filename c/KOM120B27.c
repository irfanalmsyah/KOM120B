#include <stdio.h>
int main() {
    int n[1000] = {0}, m[1000] = {0};
    int a, b, x = 0, y = 0;
    for (a = 0; a < 1000; a++) {
        scanf("%d", &n[a]);
        if (n[a] == -9) {
            break;
        }
    }
    for (b = 0; b < 1000; b++) {
        scanf("%d", &m[b]);
        if (m[b] == -9) {
            break;
        }
    }

    int count = a + b;
    int current = 0;

    while (1) {
        if (n[x] == -9) {
            for (; y < b; y++) {
                printf("%d", m[y]);
                if (current < count - 1) {
                    printf(" ");
                    current++;
                }
            }
            break;
        } else if (m[y] == -9) {
            for (; x < a; x++) {
                printf("%d", n[x]);
                if (current < count - 1) {
                    printf(" ");
                    current++;
                }
            }
            break;
        } else if (n[x] < m[y]) {
            printf("%d", n[x]);
            if (current < count - 1) {
                    printf(" ");
                    current++;
                }
            x++;
        } else if (n[x] > m[y]) {
            printf("%d", m[y]);
            if (current < count - 1) {
                    printf(" ");
                    current++;
                }
            y++;
        } else {
            printf("%d", n[x]);
            if (current < count - 1) {
                    printf(" ");
                    current++;
                }
            x++;
        }
    }
    printf("\n");
    return 0;
}