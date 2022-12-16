#include <stdio.h>
int main() {
    int uts, uas;
    scanf("%d %d", &uts, &uas);
    float rata = (float)(uts+uas)/2;
    if (rata > 60) {
        if (uts > 40 && uas > 40) {
            printf("LULUS\n");
        } else if (uts < 40 || uas < 40) {
            printf("LULUS BERSYARAT\n");
        }
    } else if (rata < 60) {
        printf("TIDAK LULUS\n");
    }
    return 0;
}