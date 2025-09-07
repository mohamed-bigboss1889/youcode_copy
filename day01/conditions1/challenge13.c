#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x, y;

    printf("Entrez le premier point du segment (x1 y1) : ");
    scanf("%d %d", &x1, &y1);

    printf("Entrez le deuxieme point du segment (x2 y2) : ");
    scanf("%d %d", &x2, &y2);

    printf("Entrez le point a verifier (x y) : ");
    scanf("%d %d", &x, &y);

    // Vérif alignement : équation de la droite
    if ((x2 - x1) * (y - y1) == (y2 - y1) * (x - x1) &&
        x >= (x1 < x2 ? x1 : x2) && x <= (x1 > x2 ? x1 : x2) &&
        y >= (y1 < y2 ? y1 : y2) && y <= (y1 > y2 ? y1 : y2)) {
        printf("Le point est sur le segment.\n");
    } else {
        printf("Le point n'est pas sur le segment.\n");
    }

    return 0;
}
