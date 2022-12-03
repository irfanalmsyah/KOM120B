#include <stdio.h>
int main() {
    long x;
    scanf("%ld", &x);
    long second = (x % 100) / 10;
    if (second < 0) {
        second = second * -1;
    }
    printf("%ld\n", second * 7);
    return 0;
}

/* 
scan x
modulo x with 100
divide the result with 10
if the result is negative, multiply it with -1
multiply the result with 7
 */