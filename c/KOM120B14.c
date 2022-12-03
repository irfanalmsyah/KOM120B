#include <stdio.h>
int main() {
    int a, b, output = 0;
    while ((scanf("%d", &a) == 1) && a != -1) {
        if (scanf("%d", &b) != 1) {
            break;
        } else {
            if (a == 0 && b == 0) {} 
            else {
                if (a == 0 || b == 0) {
                    output++;
                } else if (b % a == 0 || a % b == 0) {
                    output++;
                }
            }
        }
    }
    printf("%d\n", output);
    return 0;
}