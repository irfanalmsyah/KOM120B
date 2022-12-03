#include <stdio.h>
int main() {
    int banyakbilangan, input, small; 
    int counter = 1;
    scanf("%d", &banyakbilangan);
    while (counter <= banyakbilangan) {
        scanf("%d", &input);
        if (counter == 1) {
            small = input;
        } else if (input < small) {
            small = input;
        }
        counter++; 
    }
    printf("%d\n", small);
    return 0;
}