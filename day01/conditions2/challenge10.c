#include <stdio.h>

int main() {
    int age, cotisation;
    double montant, bonus;

    scanf("%d", &age);
    scanf("%d", &cotisation);
    scanf("%lf", &montant);

    bonus = 0;
    if (montant > 50000)
        bonus = ((int)((montant - 50000) / 10000)) * 0.05 * montant;

    if (age >= 65 && cotisation >= 30 && montant >= 100000) {
        printf("Plan complet avec pension elevee, Bonus: %.2f\n", bonus);
    } else if (age >= 65 && cotisation >= 20 && montant >= 50000) {
        printf("Plan partiel avec pension moyenne, Bonus: %.2f\n", bonus);
    } else if (age < 65) {
        printf("Plan epargne non encore disponible\n");
    } else {
        printf("Non eligible\n");
    }

    return 0;
}
