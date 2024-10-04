#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Nom[100];
    char Prenom[100];
    int age;
    char Telephone[100];
    char statut[100];
    int Reference_unique;
    char Date_de_reservation[100];
} dentaires;

int size = 0;
dentaires dent[100];

void ajouter() {
    int taille;
    printf("entrez le nombre de clients a ajouter: ");
    scanf("%d", &taille);

    for (int i = size; i < size + taille; i++) {
        dent[i].Reference_unique = i + 1;
        printf("entrez le nom du client: ");
        scanf("%s", dent[i].Nom);
        printf("entrez le prenom du client: ");
        scanf("%s", dent[i].Prenom);
        printf("entrez l'age du client: ");
        scanf("%d", &dent[i].age);

        char tele[100];
        do {
            printf("entrez le numero de client (format:+212) : ");
            scanf("%s", tele);

            if (strlen(tele) == 9) {
                strcpy(dent[i].Telephone, tele);
            } else {
                printf("numero doit contenir exactement 9 caracteres!!\n");
            }
        } while (strlen(tele) != 9);

        int choix;
        do {
            printf("statut:\n");
            printf("\t1 - valide\n");
            printf("\t2 - reporte\n");
            printf("\t3 - annule\n");
            printf("\t4 - traite\n");
            printf("votre choix: ");
            scanf("%d", &choix);

            switch (choix) {
            case 1:
                strcpy(dent[i].statut, "valide");
                break;
            case 2:
                strcpy(dent[i].statut, "reporte");
                break;
            case 3:
                strcpy(dent[i].statut, "annule");
                break;
            case 4:
                strcpy(dent[i].statut, "traite");
                break;
            default:
                printf("il n'y a que quatre choix!!\n");
                break;
            }
        } while (choix < 1 || choix > 4);

        printf("entrez la date de reservation dd/mm/yy :");
        scanf("%s", dent[i].Date_de_reservation);
        printf("-------------------------------------------\n");
    }

    size += taille;
}
void ajouter_default() {
    char noms[10][100] = {"ahmed","youssef","fatima","sara","mohamed","rania","omar","imane","khalid","nadia"};
    char prenoms[10][100] = {"bennani","elfarisi","tazi","elyeousfi","boulahcen","elamrani","chafiq","elidrissi","zouhair","elbakali"};

    char statuts[4][100] = {"valide","reporte","annule","traite"};

    for (int i = 0; i < 10; i++) {
        dent[i].Reference_unique = i + 1;

        strcpy(dent[i].Nom, noms[i]);
        strcpy(dent[i].Prenom, prenoms[i]);

        dent[i].age = 20 + rand() % 30;

        sprintf(dent[i].Telephone, "(+212)06%d",rand()%100000);

        strcpy(dent[i].statut, statuts[rand() % 4]);

        sprintf(dent[i].Date_de_reservation, "%d/%d/2024", rand() % 30 + 1, rand() % 12 + 1);
    }

    size = 10;
}

void Modifier() {
    int reference, i;
    int trouve = 0;

    printf("entrez la reference du client a modifier : ");
    scanf("%d", &reference);

    for (i = 0; i < size; i++) {
        if (dent[i].Reference_unique == reference) {
            printf("reference trouve pour le client.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("client avec la reference %d non trouve.\n", reference);
        return;
    }

    int choix;
    do {
        printf("modifier les informations du client:\n");
        printf("\t1 - modifier nom\n");
        printf("\t2 - modifier prenom\n");
        printf("\t3 - modifier age\n");
        printf("\t4 - modifier telephone\n");
        printf("\t5 - modifier statut\n");
        printf("\t6 - modifier date de reservation\n");
        printf("\t7 - quitter\n");
        printf("votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            printf("entrez le nouveau nom: ");
            scanf("%s", dent[i].Nom);
            break;
        case 2:
            printf("entrez le nouveau prenom: ");
            scanf("%s", dent[i].Prenom);
            break;
        case 3:
            printf("entrez le nouvel age: ");
            scanf("%d", &dent[i].age);
            break;
        case 4:
            printf("entrez le nouveau telephone: ");
            scanf("%s", dent[i].Telephone);
            break;
        case 5:
            printf("entrez le nouveau statut: ");
            scanf("%s", dent[i].statut);
            break;
        case 6:
            printf("entrez la nouvelle date de reservation: ");
            scanf("%s", dent[i].Date_de_reservation);
            break;
        case 7:
            printf("quitter le programme.\n");
            break;
        default:
            printf("il n'y a que six choix !!\n");
            break;
        }
    } while (choix != 7);
}

void affichage() {
    for (int i = 0; i < size; i++) {
        printf("reference: %d\n", dent[i].Reference_unique);
        printf("nom: %s\n", dent[i].Nom);
        printf("prenom: %s\n", dent[i].Prenom);
        printf("age: %d\n", dent[i].age);
        printf("telephone: %s\n", dent[i].Telephone);
        printf("statut: %s\n", dent[i].statut);
        printf("date de reservation: %s\n", dent[i].Date_de_reservation);
        printf("---------------------------------\n");
    }
}
void supprimer() {
    int j;
    int i;
    int id;
    printf("entree le reference du client a supprimer: ");
    scanf("%d",&id);
    int trouve = 0;
    for (i = 0; i < size; i++) {
        if(dent[i].Reference_unique==id) {
            printf("client supprime.\n");
            trouve = 1;
            for (j = i; j < size - 1; j++)
            {
                dent[j] = dent[j + 1];
            }

            size--;

        }
    }

    if (!trouve) {
        printf("client non trouve.\n");
    }
}
void Rechercher() {
    int REFerence;
    char NAME[100];
    int choix;
    do {
        printf("   chercher par:\n   ");
        printf("\t1 - par nom\n");
        printf("\t2 - par reference\n");
        printf("\t3 - quitter\n");
        printf("Votre choix: \n");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            printf("entree le nom a trouver: ");
            scanf("%s", NAME);
            int trouve = 0;
            for (int i = 0; i < size; i++) {
                if (strcmp(dent[i].Nom, NAME) == 0) {
                        printf("reference: %d\n", dent[i].Reference_unique);
                        printf("nom: %s\n", dent[i].Nom);
                        printf("prenom: %s\n", dent[i].Prenom);
                        printf("age: %d\n", dent[i].age);
                        printf("telephone: %s\n", dent[i].Telephone);
                        printf("statut: %s\n", dent[i].statut);
                        printf("date de reservation: %s\n", dent[i].Date_de_reservation);
                        printf("---------------------------------\n");
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("Nom non trouve.\n");
            }
            break;

        case 2:
            printf("entrez la reference a trouver: ");
            scanf("%d", &REFerence);
            trouve = 0;
            for (int i = 0; i < size; i++) {
                if (dent[i].Reference_unique == REFerence) {
                        printf("reference: %d\n", dent[i].Reference_unique);
                        printf("nom: %s\n", dent[i].Nom);
                        printf("prenom: %s\n", dent[i].Prenom);
                        printf("age: %d\n", dent[i].age);
                        printf("telephone: %s\n", dent[i].Telephone);
                        printf("statut: %s\n", dent[i].statut);
                        printf("date de reservation: %s\n", dent[i].Date_de_reservation);
                        printf("---------------------------------\n");
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("reference non trouvee.\n");
            }
            break;
        case 3:
            printf("quitter le programme.\n");
            break;
        default:
            printf("numero non trouve.\n");
        }
    } while (choix != 3);
}
void tri() {
    dentaires temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (strcmp(dent[j].Nom, dent[j + 1].Nom) > 0) {
                temp = dent[j];
                dent[j] = dent[j + 1];
                dent[j + 1] = temp;
            }
        }
    }
    printf("Liste des noms tries par ordre croissant:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", dent[i].Nom);
    }
}

void tries_par_statut() {
    dentaires temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (strcmp(dent[j].statut, dent[j + 1].statut) > 0) {
                temp = dent[j];
                dent[j] = dent[j + 1];
                dent[j + 1] = temp;
            }
        }
    }
    printf("Liste triee par statut:\n");
    for (int i = 0; i < size; i++) {
        printf("%s - %s\n", dent[i].Nom, dent[i].statut);
    }
}

void Statistiques_moyen ()
{
int somme=0;
float moyen;
for (int i=0;i<size;i++)
{
    somme+=dent[i].age;
}
    moyen=somme/size;
printf("la moyen est:%.2f",moyen);
}
void Statistiques_afficher_age() {
    char promo[100] = "";
    int choix;

    do {
        printf("<<<<<<Choisie un nombre>>>>>>\n");
        printf("1 - Afficher Les enfants (<= 18 ans)\n");
        printf("2 - Afficher Les jeunes (18 < age <= 35)\n");
        printf("3 - Afficher Les adultes (> 35 ans)\n");
        printf("4 - Quitter\n");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                strcpy(promo, "enfants");
                break;
            case 2:
                strcpy(promo, "jeunes");
                break;
            case 3:
                strcpy(promo, "adultes");
                break;
            case 4:
                printf("quitter le programme.\n");
                break;
            default:
                printf("Choix non valide.\n");
                break;
        }
    } while (choix != 4 && promo[0] == '\0');
    if (promo[0] != '\0') {
        for (int i = 0; i < size; i++) {
            if (strcmp(promo, "enfants") == 0 && dent[i].age <= 18) {
                printf("Nom: %s, Prenom: %s, Age: %d\n", dent[i].Nom, dent[i].Prenom, dent[i].age);
            } else if (strcmp(promo, "jeunes") == 0 && dent[i].age > 18 && dent[i].age <= 35) {
                printf("Nom: %s, Prenom: %s, Age: %d\n", dent[i].Nom, dent[i].Prenom, dent[i].age);
            } else if (strcmp(promo, "adultes") == 0 && dent[i].age > 35) {
                printf("Nom: %s, Prenom: %s, Age: %d\n", dent[i].Nom, dent[i].Prenom, dent[i].age);
            }
        }
    } else {
        printf("Aucune categorie selectionnee.\n");
    }
}


void nombre_valide()
{
int count=0;

   for (int i=0;i<size;i++)
   {
       if (strcmp(dent[i].statut, "valide")==0)
       {
           count++;
       }
   }
   printf("le nombre total de valide est : %d \n",count);

}

void nombre_reporte()
{
int count=0;

   for (int i=0;i<size;i++)
   {
       if (strcmp(dent[i].statut, "reporte")==0)
       {
           count++;
       }
   }
   printf("le nombre total de reporte est : %d\n",count);

}

void nombre_annule()
{
int count=0;

   for (int i=0;i<size;i++)
   {
       if (strcmp(dent[i].statut, "annule")==0)
       {
           count++;
       }
   }
   printf("le nombre total de annule est : %d\n",count);

}

void nombre_traite()
{
int count=0;

   for (int i=0;i<size;i++)
   {
       if (strcmp(dent[i].statut, "traite")==0)
       {
           count++;
       }
   }
   printf("le nombre total de traite est : %d\n",count);

}

int main() {
     ajouter_default();
    int choix;
    do {
        printf("\n menu :\n");
        printf("1. ajouter\n");
        printf("2. afficher\n");
        printf("3. modifier\n");
        printf("4. supprimer\n");
        printf("5. recherch\n");
        printf("6. tries par nom\n");
        printf("7. tries par statut\n");
        printf("8. moyen\n");
        printf("9.Statistiques_afficher_age \n");
        printf("10.afficher nombre pour chaque status \n");
        printf("11. quitter\n");
        printf("choix numero du menu : ");
        scanf("%d", &choix);
        printf("--------------------------------\n");

        switch (choix) {
        case 1:
            ajouter();
            break;
        case 2:
            affichage();
            break;
        case 3:
            Modifier();
            break;
        case 4:
            supprimer();
            break;
        case 5:
            Rechercher();
            break;
        case 6:
            tri();
            break;
        case 7:
            tries_par_statut();
            break;
        case 8:
            Statistiques_moyen();
            break;
        case 9:
            Statistiques_afficher_age();
            break;
        case 10:
            nombre_valide();
            nombre_reporte();
            nombre_annule();
            nombre_traite();
            break;
        case 11:
            printf("quitter le programme.\n");
            break;
        default:
            printf("numero non trouve.\n");
        }
    } while (choix != 11);

    return 0;
}
