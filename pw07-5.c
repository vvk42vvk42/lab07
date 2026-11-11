#include <stdio.h> // v-10

unsigned long r_cat(int n) {
    if (n == 0) return 1;
    return (2 * (2 * n - 1) * r_cat(n - 1)) / (n + 1);
}

unsigned long i_cat(int n) {
    unsigned long res = 1;
    for (int i = 1; i <= n; i++) {
        res = (2 * (2 * i - 1) * res) / (i + 1);
    }
    return res;
}

int main(void) {
    int n = 5;

    printf("Рекурсия для n = %d: %lu\n", n, r_cat(n));
    printf("Цикл для n = %d: %lu\n", n, i_cat(n));

    return 0;
}
