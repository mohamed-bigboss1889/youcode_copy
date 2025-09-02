#include <stdio.h>

int main() {
    int n, d1, d2, d3, d4;
    printf("Entrez un nombre a 4 chiffres : ");
    scanf("%d", &n);
    d1 = n % 10;
    d2 = (n / 10) % 10;
    d3 = (n / 100) % 10;
    d4 = n / 1000;
    printf("Inverse = %d%d%d%d\n", d1, d2, d3, d4);
    return 0;
}
