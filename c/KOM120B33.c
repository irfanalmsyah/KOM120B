#include <stdio.h>
void backwardarr(int *arr, int size) {
    int *p = arr;
    int *q = arr + size - 1;
    int temp;
    while (p < q) {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    backwardarr(arr, n);
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