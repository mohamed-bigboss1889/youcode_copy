#include <stdio.h>

int est_premier(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int lignes, etoiles = 1;
    printf("Nombre de lignes: ");
    scanf("%d", &lignes);
    for (int i = 1; i <= lignes; i++) {
        while (!est_premier(etoiles)) etoiles++;
        for (int j = 0; j < lignes - i; j++) printf(" ");
        for (int j = 0; j < etoiles; j++) printf("*");
        printf("\n");
        etoiles++;
    }
    return 0;
}
