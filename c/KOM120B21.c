#include <stdio.h>
int main() {
    int m, n, c = 1;
    scanf("%d %d", &m, &n);

    if (m < 1 || n > 1000 || n < 1) {
        return 0;
    }

    for (int i = 0; i < m; i++) {
        if (n % 2 == 0) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    printf("%d", c % 10);
                    if (j < n - 1) {
                        printf(" ");
                    }
                    c++;
                } 
            } else {
                for (int j = 0; j < n; j++) {
                    if (j < n/2) {
                        printf("%d", (c + (n - (j*2) - 1)) % 10);
                    } else {
                        printf("%d", (c - ((j * 2) - n + 1)) % 10);
                    }
                    if (j < n - 1) {
                        printf(" ");
                    }
                    c++;
                }
            }
        } else {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    printf("%d", c % 10);
                    if (j < n - 1) {
                        printf(" ");
                    }
                    c++;
                } 
            } else {
                for (int j = 0; j < n; j++) {
                    if (j < n/2) {
                        printf("%d", (c + (n - (j*2) - 1)) % 10);
                    } else if (j > n/2) {
                        printf("%d", (c - ((j * 2) - n + 1)) % 10);
                    } else {
                        printf("%d", c % 10);
                    }
                    if (j < n - 1) {
                        printf(" ");
                    }
                    c++;
                }
            }
        }

        printf("\n"); 
    }
    return 0;
}