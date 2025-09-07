#include <stdio.h>

int main() {
    double a, b;
    printf("Entrez a: ");
    scanf("%lf", &a);
    printf("Entrez b: ");
    scanf("%lf", &b);
    printf("a + b = %.2lf\n", a + b);
    printf("a - b = %.2lf\n", a - b);
    printf("a * b = %.2lf\n", a * b);
    if (b != 0)
        printf("a / b = %.2lf\n", a / b);
    else
        printf("Division par zero\n");
    return 0;
}
