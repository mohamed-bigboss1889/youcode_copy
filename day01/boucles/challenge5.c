#include <stdio.h>

int main() {
    int base, exp;
    long long resultat = 1;

    printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l'exposant : ");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++) {
        resultat *= base;
    }

    printf("%d^%d = %lld\n", base, exp, resultat);
    return 0;
}
