#include <stdio.h>
#include <string.h>

struct contact {
    char nom[100];
    char email[100];
    char numero[15];
};

#define RESET  "\x1B[0m"
#define KRED   "\x1B[31m"
#define KGRN   "\x1B[32m"
#define KYEL   "\x1B[33m"

int conteurcontact = 0;
struct contact contact[100];

void affichermenu();
void ajouteruncontact();
void modifieruncontact();
void supprimeruncontact();
void rechercheruncontact();
void afficherlescontacts();

int main() {
    int choice;
    printf("------- Menu --------\n");

    do {
        affichermenu();
        printf("Taper votre choix: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                ajouteruncontact();
                break;
            case 2:
                modifieruncontact();
                break;
            case 3:
                supprimeruncontact();
                break;
            case 4:
                rechercheruncontact();
                break;
            case 5:
                afficherlescontacts();
                break;
            case 6:
                printf("Au revoir!\n");
                break;
            default:
                printf("Tapez un choix valide svp.\n");
                break;
        }
    } while (choice != 6);

    return 0;
}



void affichermenu() {
     printf(KGRN "\n1 - Ajouter un contact\n" RESET);
    printf(KGRN "2 - Modifier un contact\n" RESET);
    printf(KRED "3 - Supprimer un contact\n" RESET);
    printf(KGRN "4 - Rechercher un contact\n" RESET);
    printf(KGRN "5 - Afficher les contacts\n" RESET);
    printf(KYEL "6 - Quitter\n" RESET);
}


void ajouteruncontact() {
    if (conteurcontact >= 100) {
        printf("La liste des contacts est pleine.\n");
        return;
    }

    struct contact new_contact;


    printf("----- Ajouter un contact -----\n");
    printf("Tapez le nom du contact: ");
    scanf(" %[^\n]", new_contact.nom);
    printf("Tapez le numéro du contact: ");
    scanf(" %[^\n]", new_contact.numero);
    printf("Tapez l'email du contact: ");
    scanf(" %[^\n]", new_contact.email);

    contact[conteurcontact] = new_contact;
    conteurcontact++;

    printf("Contact ajouté avec succès!\n");
}

void modifieruncontact() {


    afficherlescontacts();

    int choix;
    printf("Entrez le numéro du contact à modifier (1-%d) : ", conteurcontact);
    scanf("%d", &choix);
    getchar();

    if (choix < 1 || choix > conteurcontact) {
        printf("Numéro invalide.\n");
        return;
    }

    int index = choix - 1;

    printf("modification du contact %d:\n", choix);

    printf("nouveau nom (actuel: %s) : ", contact[index].nom);
    scanf(" %[^\n]", contact[index].nom);

    printf("nouveau numéro (actuel: %s) : ", contact[index].numero);
    scanf(" %[^\n]", contact[index].numero);

    printf("nouvel email (actuel: %s) : ", contact[index].email);
    scanf(" %[^\n]", contact[index].email);

    printf("contact modifié avec succès.\n");
}




void supprimeruncontact() {
  if (conteurcontact == 0) {
        printf("Aucun contact à supprimer.\n");
        return;
    }

    afficherlescontacts();

    int choix;
    printf("Entrez le numéro du contact à supprimer (1-%d) : ", conteurcontact);
    scanf("%d", &choix);
    getchar();

    if (choix < 1 || choix > conteurcontact) {
        printf("Numéro invalide.\n");
        return;
    }

    int index = choix - 1;

    for (int i = index; i < conteurcontact - 1; i++) {
        contact[i] = contact[i + 1];
    }

    conteurcontact--;

    printf("Contact supprimé avec succès.\n");
}




void rechercheruncontact() {
    if (conteurcontact == 0) {
        printf("Aucun contact à rechercher.\n");
        return;
    }

    char recherche[100];
    printf("Entrez le nom ou une partie du nom à rechercher : ");
    scanf(" %[^\n]", recherche);

    int trouve = 0;
    printf("Résultats de la recherche :\n");
    for (int i = 0; i < conteurcontact; i++) {
        if (strstr(contact[i].nom, recherche) != NULL) {
            printf("%d) Nom: %s, Numéro: %s, Email: %s\n",
                   i + 1, contact[i].nom, contact[i].numero, contact[i].email);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun contact trouvé avec ce nom.\n");
    }
}





void afficherlescontacts() {
    if (conteurcontact == 0) {
        printf("Aucun contact à afficher.\n");
        return;
    }

    printf("----- Liste des contacts -----\n");
    for (int i = 0; i < conteurcontact; i++) {
        printf("%d) Nom: %s, Numéro: %s, Email: %s\n",
               i + 1, contact[i].nom, contact[i].numero, contact[i].email);
    }
}

