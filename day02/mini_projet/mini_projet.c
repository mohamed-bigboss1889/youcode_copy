#include <stdio.h>
#include <string.h>

#define MAX_LIVRES 100
#define MAX_TITRE 50
#define MAX_AUTEUR 50
char titres[MAX_LIVRES][MAX_TITRE];
char auteurs[MAX_LIVRES][MAX_AUTEUR];
float prix[MAX_LIVRES];
int quantites[MAX_LIVRES];
int nombre_livres = 0;

void ajouterLivre() {
    if (nombre_livres >= MAX_LIVRES) {
        printf("Stock plein, impossible d'ajouter un livre.\n");
        return;
    }
    
    printf("Titre : ");
    scanf(" %[^\n]", titres[nombre_livres]);
    
    printf("Auteur : ");
    scanf(" %[^\n]", auteurs[nombre_livres]);
    
    printf("Prix : ");
    scanf("%f", &prix[nombre_livres]);
    
    printf("Quantité : ");
    scanf("%d", &quantites[nombre_livres]);
    
    nombre_livres++;
    printf("Livre ajouté avec succès.\n");
}
void afficherLivres() {
    if (nombre_livres == 0) {
        printf("Aucun livre en stock.\n");
        return;
    }
    
    printf("\nListe des livres en stock :\n");
    for (int i = 0; i < nombre_livres; i++) {
        printf("%d. Titre : %s\n", i+1, titres[i]);
        printf("   Auteur : %s\n", auteurs[i]);
        printf("   Prix : %.2f EUR\n", prix[i]);
        printf("   Quantité : %d\n\n", quantites[i]);
    }
}
int trouverIndexLivre(char *titre) {
    for (int i = 0; i < nombre_livres; i++) {
        if (strcmp(titres[i], titre) == 0)
            return i;
    }
    return -1;
}
void mettreAJourQuantite() {
    char titre[MAX_TITRE];
    printf("Entrez le titre du livre à mettre à jour : ");
    scanf(" %[^\n]", titre);
    
    int idx = trouverIndexLivre(titre);
    if (idx == -1) {
        printf("Livre non trouvé.\n");
        return;
    }
    
    printf("Nouvelle quantite : ");
    scanf("%d", &quantites[idx]);
    printf("Quantite mise à jour \n");
}
void supprimerLivre() {
    char titre[MAX_TITRE];
    printf("Entrez le titre du livre à supprimer : ");
    scanf(" %[^\n]", titre);
    
    int idx = trouverIndexLivre(titre);
    if (idx == -1) {
        printf("Livre non trouvé.\n");
        return;
    }
        for (int i = idx; i < nombre_livres - 1; i++) {
        strcpy(titres[i], titres[i+1]);
        strcpy(auteurs[i], auteurs[i+1]);
        prix[i] = prix[i+1];
        quantites[i] = quantites[i+1];
    }
    
    nombre_livres--;
    printf("Livre supprimé .\n");
}
void totalLivres() {
    int total = 0;
    for (int i = 0; i < nombre_livres; i++) {
        total += quantites[i];
    }
    printf("Nombre total de livres en stock : %d\n", total);
}
void afficherMenu() {
    printf("\n========================================\n");
    printf("      GESTION DE STOCK LIBRAIRIE\n");
    printf("========================================\n");
    printf("1. Ajouter un livre\n");
    printf("2. Afficher tous les livres\n");
    printf("3. Mettre à jour la quantité\n");
    printf("4. Supprimer un livre\n");
    printf("5. Afficher le nombre total de livres\n");
    printf("6. Quitter\n");
    printf("========================================\n");
    printf("Votre choix : ");
}

int main() {
    int choix;
    
    printf("Bienvenue dans le système de gestion de librairie !\n");

    do {
        afficherMenu();
        scanf("%d", &choix);
        
        switch(choix) {
            case 1: ajouterLivre(); break;
            case 2: afficherLivres(); break;
            case 3: mettreAJourQuantite(); break;
            case 4: supprimerLivre(); break;
            case 5: totalLivres(); break;
            case 6: printf("Au revoir ! Merci d'avoir utilisé le système.\n"); break;
            default: printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 6);
    
    return 0;
}