#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z') printf("Majuscule\n");
    else printf("Pas majuscule\n");
    return 0;
}
