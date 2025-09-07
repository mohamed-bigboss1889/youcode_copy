#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe[10], email[100];
    int age;
    printf("Nom: ");
    scanf("%49s", nom);
    printf("Prenom: ");
    scanf("%49s", prenom);
    printf("Age: ");
    scanf("%d", &age);
    printf("Sexe: ");
    scanf("%9s", sexe);
    printf("Email: ");
    scanf("%99s", email);
    printf("Nom: %s\nPrenom: %s\nAge: %d\nSexe: %s\nEmail: %s\n", nom, prenom, age, sexe, email);
    return 0;
}
