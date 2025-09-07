#include <stdio.h>

int main() {
    int n, x, g = 0, d, m, trouve = 0;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    printf("Element a rechercher: ");
    scanf("%d", &x);
    d = n - 1;
    while (g <= d) {
        m = (g + d) / 2;
        if (tab[m] == x) { trouve = 1; break; }
        if (tab[m] < x) g = m + 1;
        else d = m - 1;
    }
    if (trouve) printf("Trouve\n");
    else printf("Absent\n");
    return 0;
}
