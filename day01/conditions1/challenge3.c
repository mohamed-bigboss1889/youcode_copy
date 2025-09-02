#include <stdio.h>

int main() {
    int a, b, s;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);
    s = a + b;
    if (a == b) s *= 3;
    printf("Resultat = %d\n", s);
    return 0;
}
