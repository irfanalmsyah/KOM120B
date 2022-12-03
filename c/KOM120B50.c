#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct word {
    char kata[25];
    int jumlah;
};
typedef struct word WORD;

int main() {
    
    char inputt[1000];
    WORD wordlist[1000];
    int maxindex = 0;
    int i = 0;
    while (scanf("%s", inputt) != EOF) {
        int found = 0;
        char kata[1000];
        if (inputt[0] == '#') {
            strcpy(kata, inputt + 1);
            for (int i = 0; i < strlen(kata); i++) {
                kata[i] = tolower(kata[i]);
            }
            for (int j = 0; j < maxindex; j++) {
                if (strcmp(wordlist[j].kata, kata) == 0) {
                    found = 1;
                    wordlist[j].jumlah++;
                    break;
                }
            }
            if (!found) {
                strcpy(wordlist[maxindex].kata, kata);
                wordlist[maxindex].jumlah = 1;
                maxindex++;
            }
        }
    }
     for (int i = 0; i < 5; i++) {
        int max = 0;
        int index = 0;
        for (int j = 0; j < maxindex; j++) {
            if (wordlist[j].jumlah > max) {
                max = wordlist[j].jumlah;
                index = j;
            }
        }
        if (max == 0) {
            break;
        }
        printf("%s %d\n", wordlist[index].kata, wordlist[index].jumlah);
        wordlist[index].jumlah = 0;
    }
    return 0;
}