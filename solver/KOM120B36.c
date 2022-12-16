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
    int taska, taskb;
    while (taska != -9) {
        scanf("%d %d", &taska, &taskb);
        if (taska == -9) {
            break;
        }
        if (taska == 1) {
            printf("%d\n", arr[taskb - 1]);
        } else {
            printf("%d\n", arr[taskb - 1] - arr[taska - 2]);
        }
        
    } 
    return 0;
}