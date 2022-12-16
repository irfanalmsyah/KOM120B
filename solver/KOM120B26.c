#include <stdio.h>
int main() {
    int n = 200, input, freq[201] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &input);
        freq[input + 100]++;
    }
    
    for (int i = 0; i <= 200; i++){
        if (freq[i] > 0) {
            printf("%d ada %d\n", i-100, freq[i]);
        }
    }
    return 0;
}