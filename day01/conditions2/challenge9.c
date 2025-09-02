#include <stdio.h>

int main() {
    double salaireBase, salaireFinal, tauxHoraire, prime;
    int heuresSup, poste;

    scanf("%lf", &salaireBase);
    scanf("%d", &heuresSup);
    scanf("%d", &poste);

    tauxHoraire = salaireBase / 160;
    salaireFinal = salaireBase + (heuresSup * tauxHoraire * 1.5);

    if (poste == 2)
        prime = salaireBase * 0.2;
    else
        prime = salaireBase * 0.1;

    salaireFinal += prime;

    printf("%.2f\n", salaireFinal);

    return 0;
}
