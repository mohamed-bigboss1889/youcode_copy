#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);
    switch(c) {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
        case 'A': case 'E': case 'I': case 'O': case 'U': case 'Y':
            printf("Voyelle\n"); break;
        default: printf("Non voyelle\n");
    }
    return 0;
}
