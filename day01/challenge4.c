#include <stdio.h>

int main() {
    float kmh, ms;
    printf("Vitesse en km/h: ");
    scanf("%f", &kmh);
    ms = kmh * 0.27778f;
    printf("Vitesse en m/s: %.2f\n", ms);
    return 0;
}
