#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void flip(int x, int y, int M, int** loyang){
    for (int i = x; i < x + M; i++) {
        for (int j = y; j < y + M; j++) {
            if (loyang[i][j] == 0) {
                loyang[i][j] = 1;
            } else {
                loyang[i][j] = 0;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int** loyang = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        loyang[i] = (int*)calloc(n, sizeof(int));
    }

    int x, y, M;
    while (1) {
        scanf("%d %d %d", &x, &y, &M);
        if (x == 0 && y == 0 && M == 0) {
            break;
        }
        flip(x, y, M, loyang);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", loyang[i][j]);
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}