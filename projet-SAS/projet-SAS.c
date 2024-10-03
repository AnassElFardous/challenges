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
                printf("Le numero doit contenir exactement 9 caracteres!!\n");
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
                    printf("Contact trouve: \nNom: %s\n", dent[i].Nom);
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
                    printf("Contact trouve: \nReference: %d\n", dent[i].Reference_unique);
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
void tri(){
dentaires temp;
for(int j=1;j<=size;j++)
    for(int i=0;i<size-1;i++)
        if (strcmp(dent[i].Nom,dent[i+1].Nom)) {
                temp = dent[i];
                dent[i] = dent[i+1];
                dent[i+1] = temp;
        }
printf("liste des noms tries par order croissant\n");
for (int i=0;i<size;i++)
{
    printf("%s\n",dent[i].Nom);
}

}
void tries_par_statut()
{


   for (int i=0;i<size;i++)
   {
       if (strcmp(dent[i].statut, "valide")==0)
       {
           printf("%s_%s\t",dent[i].Nom,dent[i].statut);
       }
       if (strcmp(dent[i].statut, "reporte")==0)
       {
           printf("%s-%s\t",dent[i].Nom,dent[i].statut);
       }
       if (strcmp(dent[i].statut, "annule")==0)
       {
           printf("%s-%s\t",dent[i].Nom,dent[i].statut);
       }
       if (strcmp(dent[i].statut, "traite")==0)
       {
           printf("%s-%s\t",dent[i].Nom,dent[i].statut);
       }
   }

}
void Statistiques ()
{
int somme=0;
int moyen;
for (int i=0;i<size;i++)
{
    somme+=dent[i].age;
}
for (int j=0;j<size;j++)
{
    moyen=somme/size;
}
printf("la moyen est:%d",moyen);
}

int main() {
    int choix;
    do {
        printf("--------------------------------\n");
        printf(" menu :\n");
        printf("1. ajouter\n");
        printf("2. afficher\n");
        printf("3. modifier\n");
        printf("4. supprimer\n");
        printf("5. recherch\n");
        printf("6. tries par nom\n");
        printf("7. tries par statut\n");
        printf("8. moyen\n");
        printf("9. quitter\n");
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
            Statistiques();
            break;
        case 9:
            printf("quitter le programme.\n");
            break;
        default:
            printf("numero non trouve.\n");
        }
    } while (choix != 9);

    return 0;
}
