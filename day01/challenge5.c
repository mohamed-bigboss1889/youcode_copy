#include <stdio.h>

int main() {
    float celsius;
    printf("Temperature en Celsius: ");
    scanf("%f", &celsius);
    if (celsius < 0)
        printf("Solide\n");
    else if (celsius < 100)
        printf("Liquide\n");
    else
        printf("Gaz\n");
    return 0;
}
