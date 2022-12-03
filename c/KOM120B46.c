#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *trim(char *s) {
char *ptr;
if (!s) return NULL; // NULL string
if (!*s) return s; // empty string
for (ptr = s + strlen(s) - 1; (ptr >= s) && isspace(*ptr); --ptr);
ptr[1] = '\0';
return s;
}

int main() {
    int n;
    scanf("%d ", &n);
    float totalusia;
    char orang[n][50];
    for (int i = 0; i < n; i++) {
        fgets(orang[i], 50, stdin);
        trim(orang[i]);
        char usia[50];
        strcpy(usia, orang[i]);
        strtok(usia, ";");
        char* orang2 = strchr(orang[i], ';');
        totalusia += atoi(usia);
        printf("%s\n", orang2 + 1);
    }
    printf("%.2f\n", totalusia / n);
    return 0;
}