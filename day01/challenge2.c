#include <stdio.h>

int main() {
    float celsius, kelvin;
    printf("Temperature en Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15f;
    printf("Temperature en Kelvin: %.2f\n", kelvin);
    return 0;
}
