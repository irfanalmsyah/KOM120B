#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int userinput, angka = 2000000000, pengulangan = 1;
        do {
            scanf("%d", &userinput);
            if (angka == 2000000000) {
                angka = userinput;
            } else if (userinput == angka) {
                pengulangan++;
            } else {
                printf("%d(%d)", angka, pengulangan);
                angka = userinput;
                pengulangan = 1;
            }
        } while (userinput != -1);
        printf("\n");   
    }
    return 0;
}