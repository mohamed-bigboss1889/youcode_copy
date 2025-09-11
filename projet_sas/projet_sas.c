#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAXJOUEURS 25

struct joueur {
    char nom[50];
    char prenom[50];
    char id[10];
    int age;
    int maillot;
    int but;
    char poste[50];
};

struct joueur joueurs[MAXJOUEURS] = {
    {"Messi", "Lionel", "DAJD1000", 36, 10, 30, "Attaquant"},
    {"Ronaldo", "Cristiano", "CR7A1001", 38, 7, 25, "Attaquant"},
    {"Neymar", "Junior", "NJDR1002", 31, 11, 20, "Attaquant"},
    {"Mbappe", "Kylian", "KMBP1003", 25, 7, 18, "Attaquant"},
    {"De Gea", "David", "DGDG1004", 33, 1, 0, "Gardien"},
    {"Salah", "Mohamed", "MSLH1005", 31, 11, 22, "Attaquant"},
    {"Modric", "Luka", "LMDR1006", 37, 10, 5, "Milieu"},
    {"Van Dijk", "Virgil", "VDVK1007", 32, 4, 2, "Defenseur"},
    {"Kante", "N'Golo", "NKNT1008", 32, 7, 3, "Milieu"},
    {"Lewandowski", "Robert", "RLWD1009", 35, 9, 28, "Attaquant"}
};
int conteurjoueurs =10 ;


void affichermenu();
void ajouterjoueur();
void afficherjoueurs();
void modifierjoueur();
void supprimerjoueur();
void chercherjoueur();
void tri_par_nom();
void statistique();
int main() {
    srand(time(NULL));
    int choice;
    do {
        affichermenu();
        printf("Taper votre choix: ");
        scanf("%d", &choice);
        while(getchar() != '\n'); // flush newline

        switch (choice) {
            case 1: ajouterjoueur(); break;
            case 2: afficherjoueurs(); break;
            case 3: modifierjoueur(); break;
            case 4: supprimerjoueur(); break;
            case 5: chercherjoueur(); break;
            case 6: statistique();break;
            case 7 : printf("  ro7 ro7 3ndhom") ;break;
            default: printf("Taper un choix valide\n"); break;
        }
    } while (choice != 7);

    return 0;
}

void affichermenu() {
    printf("------------ Menu ------------\n");
    printf("(1) Ajouter un joueur\n");
    printf("(2) Afficher la liste des joueurs\n");
    printf("(3) Modifier un joueur\n");
    printf("(4) Supprimer un joueur\n");
    printf("(5) Rechercher un joueur\n");
    printf("(6) statistique\n");
    printf("(7) quitter\n");
}

void ajouterjoueur() {
    if (conteurjoueurs >= MAXJOUEURS) {
        printf("Il n'y a pas de place pour d'autres joueurs.\n");
        return;
    }

    int n;
    printf("Combien de joueurs voulez-vous ajouter: ");
    scanf("%d", &n);
    while(getchar() != '\n'); // flush newline

    if (n <= 0 || n + conteurjoueurs > MAXJOUEURS) {
        printf("Nombre invalide ou trop grand.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        struct joueur nouvau_joueur;

        // Generate random ID
        for (int j = 0; j < 4; j++) {
            nouvau_joueur.id[j] = 'A' + rand() % 26;
        }
        sprintf(nouvau_joueur.id + 4, "%d", conteurjoueurs + 1000);
        printf("Nouveau joueur ID: %s\n", nouvau_joueur.id);

        printf("Taper le nom du joueur: ");
        fgets(nouvau_joueur.nom, sizeof(nouvau_joueur.nom), stdin);
        nouvau_joueur.nom[strcspn(nouvau_joueur.nom, "\n")] = 0;

        printf("Taper le prenom du joueur: ");
        fgets(nouvau_joueur.prenom, sizeof(nouvau_joueur.prenom), stdin);
        nouvau_joueur.prenom[strcspn(nouvau_joueur.prenom, "\n")] = 0;

        printf("Taper l'age du joueur: ");
        scanf("%d", &nouvau_joueur.age);

        int maillot_valide = 0;
        while (!maillot_valide) {
            printf("Taper le numero du maillot: ");
            scanf("%d", &nouvau_joueur.maillot);
            maillot_valide = 1;
            for (int k = 0; k < conteurjoueurs; k++) {
                if (joueurs[k].maillot == nouvau_joueur.maillot) {
                    printf("Ce numero de maillot existe deja. Reessayez.\n");
                    maillot_valide = 0;
                    break;
                }
            }
        }
        while(getchar() != '\n'); // flush newline

        printf("Taper le poste du joueur (gardien, defenseur, milieu, attaquant): ");
        fgets(nouvau_joueur.poste, sizeof(nouvau_joueur.poste), stdin);
        nouvau_joueur.poste[strcspn(nouvau_joueur.poste, "\n")] = 0;

        printf("Taper les buts du joueur: ");
        scanf("%d", &nouvau_joueur.but);
        while(getchar() != '\n');

        joueurs[conteurjoueurs++] = nouvau_joueur;
        printf("Joueur ajoute avec succes!\n\n");
    }
}
void tri_par_nom() {
    for (int i = 0; i < conteurjoueurs - 1; i++) {
        for (int j = 0; j < conteurjoueurs - i - 1; j++) {
            if (strcmp(joueurs[j].nom, joueurs[j + 1].nom) > 0) {
                struct joueur temp = joueurs[j];
                joueurs[j] = joueurs[j + 1];
                joueurs[j + 1] = temp;
            }
        }
    }
    printf("Les joueurs tries par nom (croissant):\n");
    for (int i = 0; i < conteurjoueurs; i++) {
        printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
               joueurs[i].id,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].age,
               joueurs[i].maillot,
               joueurs[i].poste,
               joueurs[i].but);
    }

}

void tri_par_age() {
    int i, j;
    struct joueur temp;

    for (i = 0; i < conteurjoueurs - 1; i++) {
        for (j = 0; j < conteurjoueurs - i - 1; j++) {
            if (joueurs[j].age > joueurs[j + 1].age) {
                temp = joueurs[j];
                joueurs[j] = joueurs[j + 1];
                joueurs[j + 1] = temp;
            }
        }
    }

    printf("Les joueurs tries par age (croissant):\n");
    for (i = 0; i < conteurjoueurs; i++) {
        printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
               joueurs[i].id,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].age,
               joueurs[i].maillot,
               joueurs[i].poste,
               joueurs[i].but);
    }
}

void afficherjoueurs() {
    int choix;
    if (conteurjoueurs == 0) {
        printf("Aucun joueur enregistre.\n");
        return;
    }
    printf("choisir un choix\n");
    printf("(1)afficher les joueur normalement\n");
    printf("(2)tri par nom\n");
    printf("(3)tri par age\n");
    printf("(4)afficher les joueur par poste\n");
        scanf("%d",&choix);

     switch(choix){
        case 1:    
         printf("\n--- Liste des joueurs ---\n");
           for (int i = 0; i < conteurjoueurs; i++) {
             printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
               joueurs[i].id,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].age,
               joueurs[i].maillot,
               joueurs[i].poste,
               joueurs[i].but);
    } ;break;
        case 2:tri_par_nom() ;break;
        case 3: tri_par_age();break;
        case 4: break;
     }


}

void modifierjoueur() {
    if (conteurjoueurs == 0) {
        printf("Aucun joueur a modifier.\n");
        return;
    }
    afficherjoueurs();
    char idcherche[10];
    printf("Taper l'ID du joueur a modifier: ");
    fgets(idcherche, sizeof(idcherche), stdin);
    idcherche[strcspn(idcherche, "\n")] = 0;

    for (int i = 0; i < conteurjoueurs; i++) {
        if (strcmp(joueurs[i].id, idcherche) == 0) {
            printf("Modifier le poste (%s): ", joueurs[i].poste);
            fgets(joueurs[i].poste, sizeof(joueurs[i].poste), stdin);
            joueurs[i].poste[strcspn(joueurs[i].poste, "\n")] = 0;

            printf("Modifier l'age (%d): ", joueurs[i].age);
            scanf("%d", &joueurs[i].age);
            while(getchar() != '\n');

            printf("Modifier le nombre de buts (%d): ", joueurs[i].but);
            scanf("%d", &joueurs[i].but);
            while(getchar() != '\n');

            printf("Joueur modifie avec succes!\n");
            return;
        }
    }
    printf("Joueur non trouve.\n");
}
void supprimerjoueur() {
    if (conteurjoueurs == 0) {
        printf("Aucun joueur a supprimer.\n");
        return;
    }

    afficherjoueurs();

    char idcherche[10];
    int index_trouve = -1;

    printf("Taper l'ID du joueur a supprimer: ");
    fgets(idcherche, sizeof(idcherche), stdin);
    idcherche[strcspn(idcherche, "\n")] = 0;
    for (int i = 0; i < conteurjoueurs; i++) {
        if (strcmp(joueurs[i].id, idcherche) == 0) {
            index_trouve = i;
            break;
        }
    }

    if (index_trouve != -1) {
        for (int i = index_trouve; i < conteurjoueurs - 1; i++) {
            joueurs[i] = joueurs[i + 1];
        }
        conteurjoueurs--; // nqso le nombre dyal joueurs
        printf("Joueur supprime avec succes!\n");
    } else {
        printf("joueur non trouve.\n");
    }
}
void chercherjoueur(){
    int choix,i;
    char nomchercher[50];
    char idchercher[10];
    int valide=0;
    if(conteurjoueurs==0){
        printf("il'ya pas des joueur pour chercher");
        return;
    }
    printf("choisir un choix: \n");
    printf("(1) chercher par nom\n");
    printf("(2) chercher par id \n");
    scanf("%d",&choix);
    getchar();

    switch (choix)
    {
    case 1:
    afficherjoueurs();
        printf("taper le nom du jouer: ");
        fgets(nomchercher,50,stdin);
        nomchercher[strcspn(nomchercher,"\n")]='\0';
        for(i=0;i<conteurjoueurs;i++){
           if(strcasecmp(joueurs[i].nom,nomchercher)==0){
                        printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
               joueurs[i].id,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].age,
               joueurs[i].maillot,
               joueurs[i].poste,
               joueurs[i].but);
               valide=1;
               break;

            }

        }
        if(valide==0){
                 printf("aucun joueur avec ce nom trouvee");
        }
        break;
    case 2:
    afficherjoueurs();
        printf("taper ID du jouer: ");
        fgets(idchercher,10,stdin);
        idchercher[strcspn(idchercher,"\n")]='\0';
        for(i=0;i<conteurjoueurs;i++){
            if(strcmp(joueurs[i].id,idchercher)==0){
               printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
               joueurs[i].id,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].age,
               joueurs[i].maillot,
               joueurs[i].poste,
               joueurs[i].but);
               valide=1;
               break;
            }

        }
        if(valide==0){
            printf("aucun joueur avec ce ID");
        }

         break;
    default:
           printf("choix invalide");
        break;
    }

}
void afficheragemoyenne(){
    int res=0;
    int somme=0;
    int i;
    for(i=0;i<conteurjoueurs;i++){
        somme+=joueurs[i].age;
    }
    res=somme/conteurjoueurs;
    printf("l'age moyenne des joueur est :%d",res);

}
void afficherjoueursmarqueplusdex(){
    int x, i, trouve = 0;
    printf("Taper nombre de buts pour afficher les joueurs ayant marque plus de X buts: ");
    scanf("%d", &x);

    for(i = 0; i < conteurjoueurs; i++){
        if(joueurs[i].but >= x){
            printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
                   joueurs[i].id,
                   joueurs[i].nom,
                   joueurs[i].prenom,
                   joueurs[i].age,
                   joueurs[i].maillot,
                   joueurs[i].poste,
                   joueurs[i].but);
            trouve = 1;
        }
    }
    if(!trouve){
        printf("Aucun joueur n'a marque plus de %d buts.\n", x);
    }
}
void affichermeilleurbutteur(){
    int i;
    int max=joueurs[0].but;
    for(i=1;i<conteurjoueurs;i++){
        if(joueurs[i].but>max){
            max=joueurs[i].but;
        }
        }
        printf("meilleur butter avec %d \n",max);
        for (i = 0; i < conteurjoueurs; i++) {
        if (joueurs[i].but == max) {
            printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
                   joueurs[i].id,
                   joueurs[i].nom,
                   joueurs[i].prenom,
                   joueurs[i].age,
                   joueurs[i].maillot,
                   joueurs[i].poste,
                   joueurs[i].but);
        }
    } 
}
void afficherjoueur_jeune_ou_agee(){
    int jeune=joueurs[0].age;
    int agee=joueurs[0].age;
    int i,choix;
    printf("taper votre choix\n");
    printf("(1) le joueur le plus jeune\n");
    printf("(2) le joueur le plus agee\n");
    scanf("%d",&choix);

    switch(choix){
        case 1:    
               for (i=1;i<conteurjoueurs;i++){
               if(joueurs[i].age<jeune){
               jeune=joueurs[i].age;
            
        }
    }
    printf("le jouuer plus jeune est:\n");
        for (i = 0; i < conteurjoueurs; i++) {
        if (joueurs[i].age == jeune) {
            printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
                   joueurs[i].id,
                   joueurs[i].nom,
                   joueurs[i].prenom,
                   joueurs[i].age,
                   joueurs[i].maillot,
                   joueurs[i].poste,
                   joueurs[i].but);
        }
        };
        break;

        case 2:    
               for (i=1;i<conteurjoueurs;i++){
               if(joueurs[i].age>agee){
               agee=joueurs[i].age;
            
          }
        }
    printf("le jouuer plus agee est:\n");
        for (i = 0; i < conteurjoueurs; i++) {
        if(joueurs[i].age == agee) {
            printf("ID: %s | Nom: %s | Prenom: %s | Age: %d | Maillot: %d | Poste: %s | Buts: %d\n",
                   joueurs[i].id,
                   joueurs[i].nom,
                   joueurs[i].prenom,
                   joueurs[i].age,
                   joueurs[i].maillot,
                   joueurs[i].poste,
                   joueurs[i].but);
        }
    } 
 ;
        break;
        default:
        printf("choix invalide");


}}
void statistique(){
    int choix;
      printf("------statistique------\n");
      printf("(1) afficher le nombre total des joueur dans l'equipe\n");
      printf("(2) afficher l'age moyenne des joueur\n");
      printf("(3) Afficher les joueurs ayant marqué plus de X buts\n");
      printf("(4) afficher le meilleur butteur\n");
      printf("(5) afficher le joueur plus jeune et plus age\n");
      printf("taper votre choix\n");
      scanf("%d",&choix);
      switch(choix){
        case 1:
          printf(" le nombre totale des joueur dans l'equipe: %d \n",conteurjoueurs);
          break;
        case 2:
          afficheragemoyenne();
          break;
          case 3:
          afficherjoueursmarqueplusdex();
          break;
        case 4:
        affichermeilleurbutteur();
        break;
        case 5:
        afficherjoueur_jeune_ou_agee();
        break;
      }

}
