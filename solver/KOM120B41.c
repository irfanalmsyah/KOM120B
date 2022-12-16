#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    int count[26] = {0};
    while ((ch = getchar()) != EOF) {
        ch = tolower(ch);
        count[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c %d", 'a' + i, count[i]);
            printf("\n");
        }
    }
    return 0;
}