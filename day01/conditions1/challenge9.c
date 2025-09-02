#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c >= 'A' && c <= 'Z') printf("Alphabet majuscule\n");
        else printf("Alphabet minuscule\n");
    } else {
        printf("Pas un alphabet\n");
    }
    return 0;
}
