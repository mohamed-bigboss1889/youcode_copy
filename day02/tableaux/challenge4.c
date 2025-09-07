#include <stdio.h>

int main() {
    int n, max;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    max = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] > max) max = tab[i];
    }
    printf("Max: %d\n", max);
    return 0;
}