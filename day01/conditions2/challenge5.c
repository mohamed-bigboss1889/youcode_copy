#include <stdio.h>

int main() {
    float budget;
    int dest, personnes;
    printf("Budget: ");
    scanf("%f", &budget);
    printf("Destination (1 plage, 2 montagne, 3 ville): ");
    scanf("%d", &dest);
    printf("Nombre de personnes: ");
    scanf("%d", &personnes);
    if (budget >= 1000)
        printf("Voyage haut de gamme\n");
    else if (budget >= 500)
        printf("Voyage moyen\n");
    else
        printf("Voyage economique\n");
    if (dest == 1 && budget >= 1000 && personnes > 2)
        printf("Destination recommandee: Plage\n");
    else if (dest == 2 && budget >= 500 && personnes <= 2)
        printf("Destination recommandee: Montagne\n");
    else
        printf("Destination recommandee: Ville\n");
    return 0;
}
