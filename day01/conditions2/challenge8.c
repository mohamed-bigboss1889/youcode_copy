#include <stdio.h>

int main() {
    int age, historique, couverture;
    printf("Age: ");
    scanf("%d", &age);
    printf("Historique medical (0 aucun, 1 mineur, 2 majeur): ");
    scanf("%d", &historique);
    printf("Type de couverture (1 base, 2 etendue): ");
    scanf("%d", &couverture);
    if (age < 30)
        printf("Plan de base\n");
    else if (age >= 30 && historique == 0)
        printf("Plan de base\n");
    else if (age >= 30 && historique >= 1)
        printf("Plan etendu\n");
    if (historique == 2) printf("Couverture supplementaire\n");
    return 0;
}
