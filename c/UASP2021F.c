#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("%d", matrix[i][n - 1 - j]);
            } else if (j == n - i - 1) {
                printf("%d", matrix[i][i]);
            } else {
                printf("%d", matrix[i][j]);
            }
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}