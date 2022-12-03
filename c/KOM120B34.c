#include <stdio.h>
void prefixsum(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        arr[i] += arr[i - 1];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    prefixsum(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
    return 0;
}