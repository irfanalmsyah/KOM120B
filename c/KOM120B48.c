#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *trim(char *s) {
    char *ptr;
    if (!s){
        return NULL; // NULL string
    } 
    if (!*s) {
        return s; // empty string
    }
    for (ptr = s + strlen(s) - 1; (ptr >= s) && isspace(*ptr); --ptr);
    ptr[1] = '\0';
    return s;
}

struct rec {
    char kata[50];
    int jumlah;
    int posisi[51];
};
typedef struct rec REC;

int main() {
    REC record[501];
    char line[1000];
    int maxindex = 0;
    /* while (fgets(line, 100, stdin) != NULL) {
        REC record;
        record.jumlah = 0;
        trim(line);
        char *delim = ";";
        char *t = strtok(line, delim);
        strcpy(record.kata, t);
        while (t != NULL) {
            t = strtok(NULL, delim);
            if (t != NULL) {
                record.posisi[record.jumlah] = atoi(t);
                record.jumlah++;
            }
        }
        printf("%s(%d):", record.kata, record.jumlah);
        for (int i = 0; i < record.jumlah; i++) {
            printf("%d", record.posisi[i]);
            if (i < record.jumlah - 1) {
                printf("->");
            }
        }
        printf("\n");
    } */
    while (fgets(line, 1000, stdin) != NULL) {
        trim(line);
        char *delim = ";";
        char *t = strtok(line, delim);
        int found = 0;
        for (int i = 0; i < maxindex; i++) {
            if (strcmp(record[i].kata, t) == 0) {
                found = 1;
                t = strtok(NULL, delim);
                while (t != NULL) {
                    record[i].posisi[record[i].jumlah] = atoi(t);
                    record[i].jumlah++;
                    t = strtok(NULL, delim);
                }
                break;
            }
        }
        if (!found) {
            strcpy(record[maxindex].kata, t);
            record[maxindex].jumlah = 0;
            t = strtok(NULL, delim);
            while (t != NULL) {
                record[maxindex].posisi[record[maxindex].jumlah] = atoi(t);
                record[maxindex].jumlah++;
                t = strtok(NULL, delim);
            }
            maxindex++;
        }
    }
    for (int i = 0; i < maxindex; i++) {
        printf("%s(%d):", record[i].kata, record[i].jumlah);
        for (int j = 0; j < record[i].jumlah; j++) {
            printf("%d", record[i].posisi[j]);
            if (j < record[i].jumlah - 1) {
                printf("->");
            }
        }
        printf("\n");
    }
    return 0;
}