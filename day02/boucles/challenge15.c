#include <stdio.h>

int main() {
    int n, f = 1;
    printf("Entrez n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) f *= i;
    printf("Factorielle: %d\n", f);
    return 0;
}
