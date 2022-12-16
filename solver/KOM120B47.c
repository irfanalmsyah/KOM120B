#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char str[100];
    char wordlist[100][100];
    int i = 0;
    while (scanf("%s", str) != EOF) {
        if (str[0] == '#') {
            strcpy(wordlist[i], str + 1);
            //lowercase
            for (int j = 0; j < strlen(wordlist[i]); j++) {
                wordlist[i][j] = tolower(wordlist[i][j]);
            }
            i++;
        }
    }
    int max = 0;
    int maxindex = 0;
    for (int j = 0; j < i; j++) {
        int count = 0;
        for (int k = 0; k < i; k++) {
            if (strcmp(wordlist[j], wordlist[k]) == 0) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            maxindex = j;
        }
    }
    printf("%s\n", wordlist[maxindex]);
    return 0;
}