#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100] = "bonjour";
    int size = strlen(chaine1);

    printf("Original : %s\n", chaine1);
    printf("Inverse  : ");

    for (int i = size - 1; i >= 0; i--) {
        printf("%c", chaine1[i]);
    }

    printf("\n");
    return 0;
}
