#include <stdio.h>

int main() {
    float c;
    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &c);
    if (c < 0) printf("Solide\n");
    else if (c < 100) printf("Liquide\n");
    else printf("Gaz\n");
    return 0;
}
