#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int m, n;
    int x;
    int y;
    scanf("%d %d ", &m, &n);
    char ladang[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ladang[i][j] = getchar();
            if (isalpha(ladang[i][j])) {
                x = j;
                y = i;
            }
        }
        getchar();
    }
    int bobot = 0;
    int max = 0;
    for (int i = 0; i < 4; i++) {
        if (i == 0) {
            for (int j = x + 1; j < n; j++) {
                if (ladang[y][j] == 35) {
                    break;
                }
                if (isdigit(ladang[y][j])) {
                    char temp[2] = {"\0"};
                    temp[0] = ladang[y][j];
                    bobot += atoi(temp);
                }
            }
            if (bobot > max) {
                max = bobot;
            }
            bobot = 0;
            for (int j = x - 1; j >= 0; j--) {
                if (ladang[y][j] == 35) {
                    break;
                }
                if (isdigit(ladang[y][j])) {
                    char temp[2] = {"\0"};
                    temp[0] = ladang[y][j];
                    bobot += atoi(temp);
                }
            }
            if (bobot > max) {
                max = bobot;
            }
            bobot = 0;
            for (int j = y + 1; j < m; j++) {
                if (ladang[j][x] == 35) {
                    break;
                }
                if (isdigit(ladang[j][x])) {
                    char temp[2] = {"\0"};
                    temp[0] = ladang[j][x];
                    bobot += atoi(temp);
                }
            }
            if (bobot > max) {
                max = bobot;
            }
            bobot = 0;
            for (int j = y - 1; j >= 0; j--) {
                if (ladang[j][x] == 35) {
                    break;
                }
                if (isdigit(ladang[j][x])) {
                    char temp[2] = {"\0"};
                    temp[0] = ladang[j][x];
                    bobot += atoi(temp);
                }
            }
            if (bobot > max) {
                max = bobot;
            }
            bobot = 0;
        }
    }
    printf("%d\n", max);
}