#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char chaine[100];
    printf("Entrez une chaîne : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

    for (int i = 0; chaine[i] != '\0'; i++) {
        chaine[i] = toupper(chaine[i]);
    }

    printf("En majuscules : %s\n", chaine);
    return 0;
}
