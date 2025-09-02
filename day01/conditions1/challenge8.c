#include <stdio.h>

int main() {
    float m;
    printf("Entrez la moyenne : ");
    scanf("%f", &m);
    if (m < 10) printf("Recale\n");
    else if (m < 12) printf("Passable\n");
    else if (m < 14) printf("Assez bien\n");
    else if (m < 16) printf("Bien\n");
    else printf("Tres bien\n");
    return 0;
}
