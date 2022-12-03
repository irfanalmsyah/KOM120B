#include <stdio.h>
int main() {
    long int inputX, inputy, n = 0;
    while (1) {
        scanf("%ld", &inputX);
        switch (inputX) {
            case 1:
                scanf("%ld", &inputy);
                n = inputy;
                break;
            case 2:
                scanf("%ld", &inputy);
                n += inputy;
                break;
            case 3:
                scanf("%ld", &inputy);
                n -= inputy;
                break;
            case 4:
                scanf("%ld", &inputy);
                n *= inputy;
                break;
            case 5:
                scanf("%ld", &inputy);
                n /= inputy;
                break;
            case 9:
                printf("%ld\n", n);
                break;
            case 0:
                return 0;
            default:
                return 0;
        }
    }
    return 0;
}