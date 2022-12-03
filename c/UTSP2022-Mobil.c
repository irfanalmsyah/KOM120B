#include <stdio.h>
int main() {
    int jarak, ketinggian, ketinggiansebelum, pers, output = 0;
    // pers 1 naik, 2 turun, 3 datar
    scanf("%d", &jarak);
    scanf("%d", &ketinggiansebelum);
    for (int i = 1; i < jarak; i++) {
        scanf("%d", &ketinggian);
        
        if (ketinggian > ketinggiansebelum && pers != 1) {
            pers = 1;
            output++;
        } else if (ketinggian < ketinggiansebelum && pers != 2) {
            pers = 2;
            output++;
        } else if (ketinggian == ketinggiansebelum && pers != 3) {
            pers = 3;
            output++;
        }
        
        ketinggiansebelum = ketinggian;
    }
    printf("%d\n", output + 1);
    return 0;
}