#include <stdio.h>
int main() {
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int n;
        scanf("%d", &n);
        printf("%d\n", 1 + 2 * (n/2) + 3 * ((n-1)/2));
    }
    return 0;
}