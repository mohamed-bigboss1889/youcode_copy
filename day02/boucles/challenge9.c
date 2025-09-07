#include <stdio.h>

int main() {
    int base, exp, res = 1;
    printf("Base: ");
    scanf("%d", &base);
    printf("Exposant: ");
    scanf("%d", &exp);
    int i = 0;
    while (i < exp) {
        res *= base;
        i++;
    }
    printf("Resultat: %d\n", res);
    return 0;
}
