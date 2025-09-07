#include <stdio.h>

int main() {
    int n;
    printf("Nombre d'elements: ");
    scanf("%d", &n);
    int tab1[n], tab2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
        tab2[i] = tab1[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", tab1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    return 0;
}
