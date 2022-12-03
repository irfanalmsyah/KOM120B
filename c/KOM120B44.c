#include <stdio.h>
#include <string.h> 
#include <ctype.h>

char *trim(char *s) {
    char *ptr;
    if (!s) return NULL;
    if (!*s) return s;
    for (ptr = s + strlen(s) - 1; (ptr >= s) && isspace(*ptr); --ptr);
    ptr[1] = '\0';
    return s;
}

int main() {
    int n;
    scanf("%d ", &n);
    char kalimat[n][251];
    for (int i = 0; i < n; i++) {
        fgets(kalimat[i], 251, stdin);
        kalimat[i][strcspn(kalimat[i], "\n")] = 0;
    }
    int query = 0;
    while (query != -9) {
        scanf("%d ", &query);
        if (query == -9) {
            break;
        } else if (query > n) {
            continue;
        } else {
            printf("%s\n", kalimat[query - 1]);
        }
    }
    return 0;
}