#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int k = 0; k < T; k++){
        int m, n, ci, cj;
        scanf("%d %d %d %d" , &m, &n, &ci, &cj);

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if ((i == ci && j == cj) || i - j == ci - cj || i + j == ci + cj) {
                    printf("*");
                } else {
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    return 0;
}