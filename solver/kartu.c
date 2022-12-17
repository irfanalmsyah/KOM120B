#include <stdio.h>
int main() {
    int banyakkartu;
    scanf("%d", &banyakkartu);
    int kartu[banyakkartu];
    for (int i = 0; i < banyakkartu; i++) {
        scanf("%d", &kartu[i]);
    }
    int user1, user2;
    scanf("%d", &user1);
    scanf("%d", &user2);
    printf("%d\n", kartu[user1 + user2 - 1]);
}