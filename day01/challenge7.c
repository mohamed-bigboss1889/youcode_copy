#include <stdio.h>

int main() {
    float n1, n2, n3, moyenne;
    printf("Premier nombre: ");
    scanf("%f", &n1);
    printf("Deuxieme nombre: ");
    scanf("%f", &n2);
    printf("Troisieme nombre: ");
    scanf("%f", &n3);
    moyenne = (n1*2 + n2*3 + n3*5) / 10.0f;
    printf("Moyenne ponderee: %.2f\n", moyenne);
    return 0;
}
