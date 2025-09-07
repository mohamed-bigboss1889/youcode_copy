#include <stdio.h>

int main() {
    int n, facteur;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("Facteur: ");
    scanf("%d", &facteur);
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab[i] * facteur);
    }
    return 0;
}