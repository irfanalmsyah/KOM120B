#include <stdio.h>
int main() {
    int n, sum = 0, besar = 0, kecil = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    float avg = (float)sum / n;
    for (int i = 0; i < n; i++) {
        if (a[i] > avg) {
            besar++;
        } else if (a[i] < avg) {
            kecil++;
        }
    }
    printf("%.2f %d %d\n", avg, kecil, besar);
    return 0;
}