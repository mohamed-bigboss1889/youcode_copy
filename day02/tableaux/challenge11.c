#include <stdio.h>

int main() {
    int n, old, new;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("Valeur a remplacer: ");
    scanf("%d", &old);
    printf("Nouvelle valeur: ");
    scanf("%d", &new);
    for (int i = 0; i < n; i++) {
        if (tab[i] == old) tab[i] = new;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}
