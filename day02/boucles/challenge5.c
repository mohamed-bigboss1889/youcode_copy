#include <stdio.h>

int main() {
    int n, s = 0;
    printf("Entrez n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) s += i;
    printf("Somme: %d\n", s);
    return 0;
}
