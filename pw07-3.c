#include <stdio.h> // v-30

double calc(double a, double b) {
    double res = 1.0;
    int ok = 0;
    int n1, n2;

    if (a > b) { // выравнивание границ
        double tmp = a;
        a = b;
        b = tmp;
    }

    n1 = (int)a + 1; // отброс дробной части
    if (a < 0 && a == (int)a) {
        n1 = (int)a + 1;
    } else if (a >= 0) {
        n1 = (int)a + 1;
    } else {
        n1 = (int)a;
    }

    if (b < 0) {
        n2 = (int)b - 1; // также отброс, но и должны входить в интервал, а не в границу
    } else {
        n2 = (int)b;
    }
    if (b == (int)b) {
        n2 = (int)b - 1;
    }

    for (int i = n1; i <= n2; i++) {
        res *= i;
        ok = 1;
    }

    if (ok == 0) {
        return 0.0;
    }

    return res;
}

int main(void) {
    double x, y;

    while (scanf("%lf %lf", &x, &y) == 2) {
        printf("%.4lf\n", calc(x, y));
    }

    return 0;
}
