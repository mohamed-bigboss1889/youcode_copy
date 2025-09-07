#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        int prod = n * i;
        printf("%d * %d = %d\n", n, i, prod);
        sum += prod;
    }
    printf("Somme: %d\n", sum);
    return 0;
}
