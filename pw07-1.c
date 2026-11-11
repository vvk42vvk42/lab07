#include <stdio.h> // м-26      

int main(void) {
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch % 2 != 0) {
            putchar(ch);
        }
    }

    return 0;
}
