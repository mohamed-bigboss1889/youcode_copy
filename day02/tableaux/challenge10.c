#include <stdio.h>

int main() {
    int n, x, found = 0;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("Element a rechercher: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (tab[i] == x) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Present\n");
    else
        printf("Absent\n");
    return 0;
}
