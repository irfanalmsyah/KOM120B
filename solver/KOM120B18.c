#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int n, kecil = 2000000000;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            int bil;
            scanf("%d", &bil);
            if (bil < kecil) {
                kecil = bil;
            }
        }
        printf("%d\n", kecil);
    }
    return 0;
}