#include <stdio.h>
void prefixsum(int *arr, int col, int row) {

    for (int j = 0; j < col; j++) {
        for (int i = 1; i < row; i++) {
            *(arr + j*row + i) += *(arr + j*row + i - 1);
        }
    } 
    for (int i = 0; i < row; i++) {
        for (int j = 1; j < col; j++) {
            *((arr + i) + (row * j)) += *((arr + i) + (row * (j - 1)));
        }
    } 
}


int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    prefixsum(&arr[0][0], n, m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", arr[i][j]);
            if (j != m - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    } 
    return 0;
}