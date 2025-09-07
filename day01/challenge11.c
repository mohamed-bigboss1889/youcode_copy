#include <stdio.h>

int main() {
    float longueur, largeur, surface;
    printf("Longueur: ");
    scanf("%f", &longueur);
    printf("Largeur: ");
    scanf("%f", &largeur);
    surface = longueur * largeur;
    printf("Surface: %.2f\n", surface);
    return 0;
}
