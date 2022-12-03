#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    int cap = 1;
    while ((ch = getchar()) != EOF) {
        if (isspace(ch)) {
            cap = 1;
            printf("%c", ch);
        } else if (cap) {
            printf("%c", toupper(ch));
            cap = 0;
        } else {
            printf("%c", ch);
        }
    }
    printf("\n");
    return 0;
}