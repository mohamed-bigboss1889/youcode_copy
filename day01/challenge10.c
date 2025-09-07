#include <stdio.h>
#include <math.h>

int main() {
    double r, v;
    printf("Rayon: ");
    scanf("%lf", &r);
    v = (4.0/3.0) * M_PI * r * r * r;
    printf("Volume: %.2lf\n", v);
    return 0;
}
