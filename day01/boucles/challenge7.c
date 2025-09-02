#include <stdio.h>

int main() {
    int n, inverse = 0;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    while (n != 0) {
        inverse = inverse * 10 + n % 10;
        n /= 10;
    }

    printf("Nombre inverse = %d\n", inverse);
    return 0;
}
