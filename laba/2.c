#include <stdio.h>

int main() {
    double a, b, c, x;
    printf("Write a: ");
    scanf("%lf", &a);
    printf("Write b: ");
    scanf("%lf", &b);
    printf("Write c: ");
    scanf("%lf", &c);
    x = (c - b) / a;
    printf("x = %lf\n", x);
    return 0;
}