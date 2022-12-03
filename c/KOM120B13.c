#include <stdio.h>
int main() {
    int banyakbilangan, input, small, foo = 1; 
    int counter = 1;
    scanf("%d", &banyakbilangan);
    while (counter <= banyakbilangan) {
        scanf("%d", &input);
        if (counter == 1) {
            small = input;
        } else if (input < small) {
            small = input;
            foo = 1;
        } else if (input == small) {
            foo++;
        }
        counter++; 
    }
    printf("%d %d\n", small, foo);
    return 0;
}