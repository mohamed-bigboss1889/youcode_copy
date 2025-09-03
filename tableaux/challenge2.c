#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombreV, i;
    printf("Veuillez entrer le nombre des valeurs dans le tableau : ");
    scanf("%d", &nombreV);

    int tableau[nombreV]; 

   
    for (i = 0; i < nombreV; i++) {
        printf("Veuillez entrer la valeur ");
        scanf("%d", &tableau[i]);
    }

    printf("Les valeurs dans le tableau sont : ");
    for (i = 0; i < nombreV; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");  

    return 0;
}