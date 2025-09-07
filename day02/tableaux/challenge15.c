#include <stdio.h>

int main() {
    int n1, n2;
    printf("Nombre d'elements du premier tableau: ");
    scanf("%d", &n1);
    int t1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);
    }
    printf("Nombre d'elements du deuxieme tableau: ");
    scanf("%d", &n2);
    int t2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);
    }
    int t3[n1+n2];
    for (int i = 0; i < n1; i++) t3[i] = t1[i];
    for (int i = 0; i < n2; i++) t3[n1+i] = t2[i];
    for (int i = 0; i < n1+n2; i++) printf("%d ", t3[i]);
    printf("\n");
    return 0;
}
