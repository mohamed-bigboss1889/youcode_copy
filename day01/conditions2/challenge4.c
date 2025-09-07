#include <stdio.h>

int main() {
    int score, anciennete, recompenses;
    float bonus = 0;
    printf("Score: ");
    scanf("%d", &score);
    printf("Anciennete: ");
    scanf("%d", &anciennete);
    printf("Recompenses (0, 1, 2): ");
    scanf("%d", &recompenses);
    if (recompenses == 1) bonus = 0.1;
    if (recompenses >= 2) bonus = 0.2;
    if (score >= 90 && anciennete >= 5)
        printf("Excellente\n");
    else if (score >= 75 && anciennete >= 3)
        printf("Bonne\n");
    else if (score >= 50 && anciennete < 3)
        printf("Satisfaisante\n");
    else
        printf("Insuffisante\n");
    if (bonus > 0) printf("Bonus: %.0f%%\n", bonus * 100);
    return 0;
}
