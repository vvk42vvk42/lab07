#include <stdio.h> // v-24
#include <ctype.h>

int main(void) {
    int ch;
    int prev = ' ';
    int cnt = 0;
    int total = 0;
    int tf = 0;

    while ((ch = getchar()) != EOF) {
        total++;

        if (isspace(ch)) {
            if (tf && prev == '.') {
                cnt++;
            }
            tf = 0;
        } else {
            tf = 1;
        }

        prev = ch;
    }

    if (tf && prev == '.') {
        cnt++;
    }

    printf("Количество слов, заканчивающихся на точку: %d\n", cnt);
    printf("Общее количество: %d\n", total);

    return 0;
}
