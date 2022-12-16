#include <stdio.h>
int main() {
    long int x;
    scanf("%ld", &x);
    long int y = ((x-1)*(4+x-2)/2)+2;
    printf("%ld\n", y);
    return 0;
}