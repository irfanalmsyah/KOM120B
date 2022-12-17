#include <stdio.h>

int main(){
    int kasus;
    scanf("%d", &kasus);
    for (int i = 0; i < kasus; i++) {
        int found = 0;
        int jmlbungkus = 0;
        scanf("%d", &jmlbungkus);
        int bungkus[jmlbungkus];
        int totalpermen = 0;
        for (int j = 0; j < jmlbungkus; j++) {
            scanf("%d", &bungkus[j]);
            totalpermen += bungkus[j];
        }
        if (totalpermen % 2 != 0) {
            printf("0\n");
        } else {
            totalpermen /= 2;
            for (int j = 0; j < jmlbungkus; j++) {
                int bagi = 0;
                for (int k = j; k < jmlbungkus; k++) {
                    bagi += bungkus[k];
                    if (bagi == totalpermen) {
                        printf("1\n");
                        found = 1;
                        break;
                    } else if (bagi > totalpermen) {
                        bagi -= bungkus[k];
                    }
                }
                if (found == 1) {
                    break;
                }
            }
            if (found == 0) {
                printf("0\n");
            }
        }
    }
}