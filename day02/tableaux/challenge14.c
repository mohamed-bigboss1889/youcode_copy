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
    printf("Moyenne: %.2f\n", n ? (float)sum/n : 0);
    return 0;
}
