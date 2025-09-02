#include <stdio.h>

int main() {
    int n, a = 0, b = 1, suivant;
    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        suivant = a + b;
        a = b;
        b = suivant;
    }
    printf("\n");
    return 0;
}
