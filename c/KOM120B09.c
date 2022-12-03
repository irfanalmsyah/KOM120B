#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if (c > a) {
        if (c > b) {
            printf("kanan\n"); // c > a c > b
        } else if (c < b) {
            printf("tengah\n"); // c > a c < b
        } else {
            printf("tepi\n"); 
        }
    } else if (c < a) {
        if (c > b) {
            printf("tengah\n"); // b < c < a 
        } else if (c < b) {
            printf("kiri\n"); // c < a c < b
        } else {
            printf("tepi\n");
        }
    } else {
        printf("tepi\n");
    }
    return 0;
}