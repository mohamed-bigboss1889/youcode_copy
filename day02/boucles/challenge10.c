#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Longueur: ");
    scanf("%d", &n);
    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int len = 62;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        printf("%c", chars[rand() % len]);
    }
    printf("\n");
    return 0;
}
