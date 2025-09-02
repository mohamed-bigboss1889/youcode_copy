#include <stdio.h>

int main() {
    int accordes, utilises, statut, restants;

    scanf("%d", &accordes);
    scanf("%d", &utilises);
    scanf("%d", &statut);

    if (statut == 1) {
        restants = accordes - utilises;
    } else {
        restants = (accordes / 2) - utilises;
    }

    if (restants < 0) {
        printf("Depassement des conges\n");
    } else {
        printf("%d\n", restants);
    }

    return 0;
}
