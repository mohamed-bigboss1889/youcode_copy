#include <stdio.h>

int main() {
    int age, type, accidents;
    double primeBase, prime;

    scanf("%lf", &primeBase);
    scanf("%d", &age);
    scanf("%d", &type);
    scanf("%d", &accidents);

    if (age < 25)
        prime = primeBase * 1.5;
    else if (age <= 65)
        prime = primeBase;
    else
        prime = primeBase * 1.2;

    if (type == 1)
        prime *= 2;
    else if (type == 2)
        prime *= 1.2;
    else if (type == 3)
        prime *= 1.1;

    if (accidents > 1)
        prime *= 1.3;

    printf("%.2f\n", prime);

    return 0;
}
