#include <stdio.h>

int main() {
    float km, yards;
    printf("Distance en kilometres: ");
    scanf("%f", &km);
    yards = km * 1093.61f;
    printf("Distance en yards: %.2f\n", yards);
    return 0;
}
