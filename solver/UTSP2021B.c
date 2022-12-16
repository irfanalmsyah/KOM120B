#include <stdio.h>
int main() {
    int siswa, nilaimax = 0, sertifikat = 0;
    scanf("%d", &siswa);
    for (int i = 0; i < siswa; i++) {
        int nilai;
        scanf("%d", &nilai);
        if (nilai == nilaimax) {
            sertifikat++;
        } else if (nilai > nilaimax) {
            nilaimax = nilai;
            sertifikat = 1;
        }
    }
    printf("%d %d", nilaimax, sertifikat);
    return 0;
}