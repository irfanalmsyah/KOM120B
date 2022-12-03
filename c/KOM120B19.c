#include <stdio.h>
int main() {
    int k, m, n, c = 0;
    scanf("%d %d %d", &k, &m, &n);
    if (k < 1 || n > 1000) {
        return 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int bil;
            
            if (c < k) {
                scanf("%d", &bil);
                printf("%d", bil);
                c++;
            } else {
                printf("0");
            }
            
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}