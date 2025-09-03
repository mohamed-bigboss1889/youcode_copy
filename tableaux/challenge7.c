#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombreV, i, j;
    printf("Veuillez le nombre des valuer dans le tableaux: ");
    scanf("%d", &nombreV);
    i = 0;
    int tableaux[nombreV];
    do {
        printf("Veuillez enter la valeur %d: ", i + 1);
        scanf("%d", &tableaux[i]);
        i++;
    } while (i < nombreV);
    printf("\n-----------------\n");
    for (i = 0; i < nombreV - 1; i++) {
        for (j = i + 1; j < nombreV; j++) {
            if (tableaux[j] < tableaux[i]) {
                int temp = tableaux[j];
                tableaux[j] = tableaux[i];
                tableaux[i] = temp;
            }
        }
    }
    printf("L'ordre croissant du tableaux est: ");
    for (i = 0; i < nombreV; i++) {
        printf("%d ", tableaux[i]);
    }
    return 0;
}