#include <stdio.h>

int main() {
    int n, r = 0;
    printf("Entrez un entier: ");
    scanf("%d", &n);
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", r);
    return 0;
}
