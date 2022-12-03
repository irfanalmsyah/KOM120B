#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, counter = 1;
    scanf("%d", &n);
    int* arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *arrB = (int *)malloc(sizeof(int) * n);
    arrB[0] = 1;
    for (int i = 1; i < n; i++) {
        arrB[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && arrB[i] < arrB[j] + 1) {
                arrB[i] = arrB[j] + 1;
                if (counter < arrB[i]) {
                    counter = arrB[i];
                }
            }
        }
    }
    printf("%d\n", n - counter);
    free(arr);
    return 0;
}