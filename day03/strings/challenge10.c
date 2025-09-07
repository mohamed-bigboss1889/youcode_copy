#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char sousChaine[50];

    printf("Entrez la chaîne principale : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

    printf("Entrez la sous-chaîne : ");
    fgets(sousChaine, sizeof(sousChaine), stdin);
    sousChaine[strcspn(sousChaine, "\n")] = '\0';

    if (strstr(chaine, sousChaine) != NULL) {
        printf("La sous-chaîne a été trouvée !\n");
    } else {
        printf("La sous-chaîne n'a pas été trouvée.\n");
    }

    return 0;
}
