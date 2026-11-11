#include <stdio.h> // v-6

void sqr(double *p1, double *p2) {
    *p1 = (*p1) * (*p1);
    *p2 = (*p2) * (*p2);
}

int main(void) {
    double x = 3.5;
    double y = -4.0;

    printf("До: x = %.2lf, y = %.2lf\n", x, y);

    sqr(&x, &y);

    printf("После: x = %.2lf, y = %.2lf\n", x, y);

    return 0;
}
