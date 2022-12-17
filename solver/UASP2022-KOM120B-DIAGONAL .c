#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int diagutama = 0;
    int diaganti = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int nilai;
            scanf("%d", &nilai);
            if (i == j) {
                diagutama += nilai;
            }
            if (j == n - 1 -i) {
                diaganti += nilai;
            }
        }
    }
    printf("%d %d\n", diagutama, diaganti);
}