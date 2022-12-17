#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int warp;
    char ch;
    scanf("%d ", &warp);
    char paragraphs[55100];
    int charcount = 0;
    while ((ch = getchar()) != EOF) {
        paragraphs[charcount] = ch;
        charcount++;
    }
    int warpcount = 0;
    for (int i = 0; i < charcount; i++) {
        if (paragraphs[i] == 10) {
            warpcount = 0;
            printf("\n");
            continue;
        } else if (paragraphs[i] == 32) {
            int wordlength = 0;
            while (1) {
                if (isspace(paragraphs[i + wordlength + 1])) {
                    break;
                }
                wordlength++;
            }
            if (warpcount + wordlength >= 30) {
                printf("\n");
                warpcount = 0;
            }
        }
        if (warpcount == 30) {
            printf("\n");
            warpcount = 0;
        }
        if (warpcount == 0) {
            if (!(isspace(paragraphs[i]))) {
                printf("%c", paragraphs[i]);
                warpcount++;
            }
        } else {
            printf("%c", paragraphs[i]);
            warpcount++;
        }
    }
}