#include <stdio.h>
#include <string.h>

void inverser(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n/2; i++) {
        char tmp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = tmp;
    }
}

int main() {
    char s[100];
    printf("Entrez une chaine: ");
    scanf("%99s", s);
    inverser(s);
    printf("Chaine inversee: %s\n", s);
    return 0;
}
