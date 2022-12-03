#include <stdio.h>
int main() {
    int modus[1000] = {0}, input;
    do {
        scanf("%d", &input);
        if (input != 9) {      
            modus[input - 1]++;
        }
    } while (input != -9);

    int largest, output;
    for (int i = 0; i < 1000; i++) {
        if (modus[i] == 0) {
            continue;
        }
        if (modus[i] > largest) {
            largest = modus[i];
            output = i + 1;
        } else if (modus[i] == largest) {
            if (i  + 1 > output) {
                output = i + 1;
            }
        }
    }
    printf("%d\n", output);
    return 0;
}