//wrong-answer
#include <stdio.h>

int main(){
    int kasus;
    scanf("%d", &kasus);
    for (int i = 0; i < kasus; i++) {
        int jmlbungkus = 0;
        scanf("%d", &jmlbungkus);
        int bungkus[jmlbungkus];
        int totalpermen = 0;
        for (int j = 0; j < jmlbungkus; j++) {
            scanf("%d", &bungkus[j]);
            totalpermen += bungkus[j];
        }
        printf("%d", totalpermen);
        if (totalpermen % 2 != 0) {
            printf("0\n");
            continue;
        }
        int found = 0;
        for (int j = 0; j < jmlbungkus; j++) {
            float bagi = bungkus[j];
            if (bagi == (float)(totalpermen)/2) {
                    found = 1;
                    printf("1\n");
                    break;
            }
            for (int k = j + 1; k < jmlbungkus; k++) {
                bagi += bungkus[k];
                if (bagi == (float)(totalpermen)/2) {
                    found = 1;
                    printf("1\n");
                    break;
                }
                if (bagi > (float)(totalpermen)/2) {
                    break;
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