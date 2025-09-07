#include <stdio.h>

int main() {
    int n, temp;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (tab[j] > tab[j+1]) {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");
    return 0;
}
