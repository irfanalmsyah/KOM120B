#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, total = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    total /= 2;
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += arr[i];
        if (count == total){
            printf("%d\n", total);
            break;
        } else if (count > total) {
            printf("-1\n");
            break;
        }
    }
    return 0;
}