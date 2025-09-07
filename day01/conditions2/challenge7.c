#include <stdio.h>

int main() {
    float revenu, deductions = 0, impots;
    int statut;
    printf("Revenu annuel: ");
    scanf("%f", &revenu);
    printf("Statut fiscal (1 celibataire, 2 marie, 3 chef de famille): ");
    scanf("%d", &statut);
    printf("Deductions: ");
    scanf("%f", &deductions);
    if (statut == 1) deductions += 1000;
    else if (statut == 2) deductions += 2000;
    else if (statut == 3) deductions += 3000;
    revenu -= deductions;
    if (revenu <= 20000) impots = revenu * 0.05;
    else if (revenu <= 50000) impots = revenu * 0.10;
    else impots = revenu * 0.20;
    if (impots < 0) impots = 0;
    printf("Impots: %.2f\n", impots);
    return 0;
}
