#include <stdio.h>

int est_pair(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    if (est_pair(n))
        printf("Pair\n");
    else
        printf("Impair\n");
    return 0;
}
