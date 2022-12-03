#include <stdio.h>
int main() {
    int N, M, x, y;
    scanf("%d %d %d %d", &N, &M, &x, &y);
    int foo;
    if (N > M) {
        foo = N;
    } else {
        foo = M;
    }
    for (int i = 1; i <= foo; i++) {
        if (x == i || y == i || x == N - (i - 1) || y == M - (i - 1)) {
            printf("%d", i);
            return 0;
        }
    }
    return 0;
}