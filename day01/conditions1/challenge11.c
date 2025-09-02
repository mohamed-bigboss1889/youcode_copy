#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *jours[] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    srand(time(0));
    int n = rand() % 7;
    printf("%s\n", jours[n]);
    return 0;
}
