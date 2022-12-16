#include <stdio.h>
#include <ctype.h>
int main() {
    char x, y, ch;
    scanf("%c %c ", &x, &y);
    while ((ch = getchar()) != EOF) {
        if (ch == tolower(x) || ch == toupper(x)) {
            if (islower(ch)) {
                ch = (tolower(y));
            } else {
                ch = (toupper(y));
            }
        }
        printf("%c", ch);
    }
    return 0;
}