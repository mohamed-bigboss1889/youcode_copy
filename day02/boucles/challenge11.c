#include <stdio.h>

int main() {
    int n, count = 0, sum = 0;
    float moyenne;
    printf("Entrez des nombres (0 pour terminer): ");
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        if (n > 0) {
            sum += n;
            count++;
        }
    }
    if (count > 0) moyenne = (float)sum / count;
    else moyenne = 0;
    printf("Moyenne: %.2f\n", moyenne);
    return 0;
}
