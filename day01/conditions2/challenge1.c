#include <stdio.h>

int main() {
    double revenu;
    int score, duree;

    printf("Entrez votre revenu annuel (€) : ");
    scanf("%lf", &revenu);

    printf("Entrez votre score de crédit (0 - 1000) : ");
    scanf("%d", &score);

    printf("Entrez la durée du prêt (années) : ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("Éligible au prêt !\n");
    } else if (revenu >= 30000 && score >= 650 && duree <= 15) {
        printf(" Éligible avec conditions.\n");
    } else {
        printf(" Non éligible au prêt.\n");
    }

    return 0;
}
