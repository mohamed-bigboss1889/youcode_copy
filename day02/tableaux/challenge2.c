#include <stdio.h>

int main() {
    int n;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
    }
    return 0;
}