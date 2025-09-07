#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, z1, x2, y2, z2, d;
    printf("x1: ");
    scanf("%lf", &x1);
    printf("y1: ");
    scanf("%lf", &y1);
    printf("z1: ");
    scanf("%lf", &z1);
    printf("x2: ");
    scanf("%lf", &x2);
    printf("y2: ");
    scanf("%lf", &y2);
    printf("z2: ");
    scanf("%lf", &z2);
    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
    printf("Distance: %.2lf\n", d);
    return 0;
}
