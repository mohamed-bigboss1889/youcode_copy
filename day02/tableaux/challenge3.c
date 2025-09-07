#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        sum += tab[i];
    }
    printf("Somme: %d\n", sum);
    return 0;
}
