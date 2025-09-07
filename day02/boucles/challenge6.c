#include <stdio.h>

int main() {
    int n;
    printf("Entrez n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
