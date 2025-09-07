#include <stdio.h>

int main() {
    int n, d1, d2, d3, d4;
    printf("Entrez un entier a quatre chiffres: ");
    scanf("%d", &n);
    d1 = n / 1000;
    d2 = (n / 100) % 10;
    d3 = (n / 10) % 10;
    d4 = n % 10;
    printf("%d%d%d%d\n", d4, d3, d2, d1);
    return 0;
}
