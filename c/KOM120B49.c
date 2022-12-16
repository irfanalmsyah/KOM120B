#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* hapusNonAlphanumeric(char* str) {
    char* res = (char*)(malloc(sizeof(char)));
    int i = 0;
    while (*str != '\0') {
        if (isalpha(*str) || isdigit(*str)) {
            res[i++] = tolower(*str);
            res = (char*)(realloc(res,(i+1)*sizeof(char)));
        }
        ++str;
    }
    res[i]='\0';
    return res;
}

struct word {
    char kata[250];
    int jumlah;
};
typedef struct word WORD;

int main() {
    char line[1000];
    int maxindex = 0;
    WORD wordlist[1000];
    char *delim = "[ \n\t,;-.]";
    while (fgets(line, 1000, stdin) != NULL){
        char *token = strtok(line, delim);
        while (token != NULL) {
            char *res = hapusNonAlphanumeric(token);
            if (strlen(res) < 3) {
                token = strtok(NULL, delim);
                continue;
            }
            int found = 0;
            for (int i = 0; i < maxindex; i++) {
                if (strcmp(wordlist[i].kata, res) == 0) {
                    wordlist[i].jumlah++;
                    found = 1;
                } 
            }
            if (!found) {
                strcpy(wordlist[maxindex].kata, res);
                wordlist[maxindex].jumlah = 1;
                maxindex++;
            }
            token = strtok(NULL, delim);
        }
    }
    
    for (int i = 0; i < maxindex; i++) {
        printf("%s %d\n", wordlist[i].kata, wordlist[i].jumlah);
    }
    return 0;
}