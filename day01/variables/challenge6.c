#include <stdio.h>

int main() {
    float a, b;
    printf("Entrez deux nombres : ");
    scanf("%f %f", &a, &b);
    printf("a+b=%.2f\na-b=%.2f\na*b=%.2f\na/b=%.2f\n", a+b, a-b, a*b, a/b);
    return 0;
}
