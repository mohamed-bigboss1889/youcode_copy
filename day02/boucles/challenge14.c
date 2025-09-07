#include <stdio.h>

int main() {
    char *jours[] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
    int choix;
    printf("Choisissez un jour (1 lundi ... 7 dimanche): ");
    scanf("%d", &choix);
    for (int i = choix - 1; i < 7; i++) {
        printf("%s\n", jours[i]);
    }
    return 0;
}
