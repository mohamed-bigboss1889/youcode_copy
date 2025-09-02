#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs : ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }
    printf("\n");
    return 0;
}
