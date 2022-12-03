#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, x = 0, y = 0, counter = 0;
    scanf("%d %d", &n, &m);
    int* arrA = (int *)malloc(sizeof(int) * n);
    int* arrB = (int *)malloc(sizeof(int) * m);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }
    
    while (1) {       
        if (arrA[x] < arrB[y]) {
            printf("%d", arrA[x]);
            if (counter < n + m - 1) {
                printf(" ");
                counter++;
            }
            x++;
        } else {
            printf("%d", arrB[y]);
            if (counter < n + m - 1) {
                printf(" ");
                counter++;
            }
            y++;
        }

        if (x == n) {
            for (int i = y; i < m; i++) {
                printf("%d", arrB[i]);
                if (counter < n + m - 1) {
                    printf(" ");
                    counter++;
                }
            }
            break;
        } else if (y == m) {
            for (int i = x; i < n; i++) {
                printf("%d", arrA[i]);
                if (counter < n + m - 1) {
                    printf(" ");
                    counter++;
                }
            }
            break;
        }
    }
    printf("\n");
    free(arrA);
    free(arrB);
    return 0;
}