#include <stdio.h>

void print_binary(int n) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);
    int started = 0;
    for (; mask; mask >>= 1) {
        if (n & mask) {
            putchar('1');
            started = 1;
        } else if (started) {
            putchar('0');
        }
    }
    if (!started) putchar('0');
}

int main() {
    int n;
    printf("Entrez un entier: ");
    scanf("%d", &n);
    printf("Binaire: ");
    print_binary(n);
    printf("\nHexadecimal: %X\n", n);
    return 0;
}
