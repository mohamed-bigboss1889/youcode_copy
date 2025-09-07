#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    printf("Entrez une chaîne : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

    int j = 0;
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] != ' ') {
            chaine[j++] = chaine[i];
        }
    }
    chaine[j] = '\0';

    printf("Sans espaces : %s\n", chaine);
    return 0;
}
