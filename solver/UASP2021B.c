#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char wordlist[n][32];
    for (int i = 0; i < n; i++) {
        scanf("%s", wordlist[i]);
    }
    int shuffler[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &shuffler[i]);
    }
    int amount;
    scanf("%d", &amount);
    if (amount == 1) {
        for (int i = 0; i < n; i++) {
            printf("%s", wordlist[shuffler[i] - 1]);
            if (i != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
        return 0;
    }
    int foo[21][21] = {0};
    for (int i = 0; i < n; i++) {
        foo[i][1] = shuffler[i];
        int n = 2;
        int bar = shuffler[i];
        if (shuffler[i] != i + 1) {
            while (bar != i + 1) {
                bar = shuffler[bar - 1];
                foo[i][n] = bar;
                n++;
            }
            foo[i][0] = n - 1;
        }
    }
    for (int i = 0; i < n; i++) {
        if (foo[i][0] == 0) {
            printf("%s", wordlist[foo[i][1] - 1]);
        } else {
            if (amount % foo[i][0] == 0) {
                printf("%s", wordlist[foo[i][foo[i][0]] - 1]);
            } else {
                printf("%s", wordlist[foo[i][amount % foo[i][0]] - 1]);
            }
        }
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
