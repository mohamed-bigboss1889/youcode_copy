#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, moyenne;
    printf("Entrez a: ");
    scanf("%lf", &a);
    printf("Entrez b: ");
    scanf("%lf", &b);
    printf("Entrez c: ");
    scanf("%lf", &c);
    moyenne = pow(a * b * c, 1.0/3.0);
    printf("Moyenne geometrique: %.2lf\n", moyenne);
    return 0;
}
