#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* substring(char *st, int start, int len)
{
char *res;
int i=0;
res=(char *)malloc((len+1)*sizeof(char)); // char res[len+1];
while (i<start && *st!='\0') { // pindahkan pointer ke posisi start
st++; i++;
}
i=0;
while (i<len && *st!='\0') { // ambil substring mulai posisi start
res[i] = *st;
i++; st++;
}
res[i] = '\0';
return res;
}

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
    char orang[n][250];
    for (int i = 0; i < n; i++) {
        fgets(orang[i], 250, stdin);
        trim(orang[i]);
        int usia = atoi(substring(orang[i], 0, 2));
        totalusia += usia;
        printf("%s\n", substring(orang[i], 2, 247));
    }
    printf("%.2f\n", totalusia / n);
    return 0;
}