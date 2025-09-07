#include <stdio.h>

int main() {
    float conso, prix, total;
    int type, contrat;
    printf("Consommation (kWh): ");
    scanf("%f", &conso);
    printf("Type utilisateur (1 residentiel, 2 commercial): ");
    scanf("%d", &type);
    printf("Type contrat (0 standard, 1 reduit): ");
    scanf("%d", &contrat);
    if (type == 1) prix = (contrat == 0) ? 0.20 : 0.15;
    else prix = (contrat == 0) ? 0.30 : 0.25;
    total = conso * prix;
    if (conso > 500) total *= 1.1;
    printf("Facture: %.2f\n", total);
    return 0;
}
