#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int ladang[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &ladang[i][j]);
        }
    }
    int max = 0;
    for (int i = 0; i < n - k + 1; i++) {
        for (int j = 0; j < n - k + 1; j++) {
            int sum = 0;
            for (int x = i; x < i + k; x++) {
                for (int y = j; y < j + k; y++) {
                    sum += ladang[x][y];
                }
            }
            if (sum > max) {
                max = sum;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}