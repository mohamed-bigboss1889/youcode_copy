#include <stdio.h>

int main() {
    int j, m, a;
    char *mois[] = {"Janvier","Fevrier","Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};
    scanf("%d/%d/%d", &j, &m, &a);
    printf("%d-%s-%d\n", j, mois[m-1], a);
    return 0;
}
