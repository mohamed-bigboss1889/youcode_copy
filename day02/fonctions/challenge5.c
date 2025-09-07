#include <stdio.h>

int factorielle(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    printf("Factorielle: %d\n", factorielle(n));
    return 0;
}
