#include <stdio.h>
int main() {
    int n, k, input, sum = 0, num = 0;
    double avg;
    scanf("%d %d", &n, &k);

    if (n == 0 || k == 0 || k > n) {
        avg = 0;
        printf("%.2f\n", avg);
        return 0;
    } 
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &input);
        if (i % k == 0) {
            sum += input;
            num++;
        }
    }
    avg = (double)sum / num;
    printf("%.2lf\n", avg);
    return 0;
}