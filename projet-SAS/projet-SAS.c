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
    printf("Entrez le nombre de clients a ajouter: ");
    scanf("%d", &taille);

    for (int i = size; i < size + taille; i++) {
        dent[i].Reference_unique = i + 1;
        printf("Entrez le nom du client: ");
        scanf("%s", dent[i].Nom);
        printf("Entrez le prenom du client: ");
        scanf("%s", dent[i].Prenom);
        printf("Entrez l'age du client: ");
        scanf("%d", &dent[i].age);

        char tele[100];
        do {
            printf("Entrez le numero de client (format:+212) : ");
            scanf("%s", tele);

            if (strlen(tele) == 9) {
                strcpy(dent[i].Telephone, tele);
            } else {
                printf("Le numero doit contenir exactement 9 caracteres!!\n");
            }
        } while (strlen(tele) != 9);

        int choix;
        do {
            printf("Statut:\n");
            printf("\t1 - Valide\n");
            printf("\t2 - Reporte\n");
            printf("\t3 - Annule\n");
            printf("\t4 - Traite\n");
            printf("Votre choix: ");
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
                printf("Il n'y a que quatre choix!!\n");
                break;
            }
        } while (choix < 1 || choix > 4);

        printf("Entrez la date de reservation : ");
        scanf("%s", dent[i].Date_de_reservation);
    }

    size += taille;
}

void Modifier() {
    int reference, i;
    int trouve = 0;

    printf("Entrez la reference du client a modifier : ");
    scanf("%d", &reference);

    for (i = 0; i < size; i++) {
        if (dent[i].Reference_unique == reference) {
            printf("Reference trouve pour le client.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Client avec la reference %d non trouve.\n", reference);
        return;
    }

    int choix;
    do {
        printf("Modifier les informations du client:\n");
        printf("\t1 - Modifier nom\n");
        printf("\t2 - Modifier prenom\n");
        printf("\t3 - Modifier age\n");
        printf("\t4 - Modifier telephone\n");
        printf("\t5 - Modifier statut\n");
        printf("\t6 - Modifier date de reservation\n");
        printf("\t7 - quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            printf("Entrez le nouveau nom: ");
            scanf("%s", dent[i].Nom);
            break;
        case 2:
            printf("Entrez le nouveau prenom: ");
            scanf("%s", dent[i].Prenom);
            break;
        case 3:
            printf("Entrez le nouvel age: ");
            scanf("%d", &dent[i].age);
            break;
        case 4:
            printf("Entrez le nouveau telephone: ");
            scanf("%s", dent[i].Telephone);
            break;
        case 5:
            printf("Entrez le nouveau statut: ");
            scanf("%s", dent[i].statut);
            break;
        case 6:
            printf("Entrez la nouvelle date de reservation: ");
            scanf("%s", dent[i].Date_de_reservation);
            break;
        case 7:
            printf("Quitter le programme.\n");
            break;
        default:
            printf("Il n'y a que six choix !!\n");
            break;
        }
    } while (choix != 7);
}

void affichage() {
    for (int i = 0; i < size; i++) {
        printf("Reference: %d\n", dent[i].Reference_unique);
        printf("Nom: %s\n", dent[i].Nom);
        printf("Prenom: %s\n", dent[i].Prenom);
        printf("Age: %d\n", dent[i].age);
        printf("Telephone: %s\n", dent[i].Telephone);
        printf("Statut: %s\n", dent[i].statut);
        printf("Date de reservation: %s\n", dent[i].Date_de_reservation);
        printf("---------------------------------\n");
    }
}
void supprimer() {
    int j;
    int i;
    char NAME[100];
    printf("Entrez le nom du client a supprimer: ");
    scanf("%s", NAME);
    int trouve = 0;

    for (i = 0; i < size; i++) {
        if (strcmp(dent[i].Nom, NAME) == 0) {
            printf("Client supprime.\n");
            trouve = 1;


            for (j = i; j < size - 1; j++) {
                dent[j] = dent[j + 1];
            }

            size--;

        }
    }

    if (!trouve) {
        printf("Client non trouve.\n");
    }
}
void Rechercher() {
    int REFerence;
    char NAME[100];
    int choix;
    do {
        printf("xxxxxxxxxxxxxxxx:\n");
        printf("\t1 - par nom\n");
        printf("\t2 - par reference\n");
        printf("\t3 - quitter\n");
        printf("Votre choix: \n");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            printf("Entrez le nom a trouver: ");
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
            printf("Entrez la reference a trouver: ");
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
                printf("Référence non trouvee.\n");
            }
            break;
        case 3:
            printf("Quitter le programme.\n");
            break;
        default:
            printf("Numero non trouve.\n");
        }
    } while (choix != 3);
}
int main() {
    int choix;
    do {
        printf("Menu :\n");
        printf("1. Ajouter\n");
        printf("2. Afficher\n");
        printf("3. Modifier\n");
        printf("4. supprimer\n");
        printf("5. recherch\n");
        printf("6. Quitter\n");
        printf("Choix numero du menu : ");
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
            printf("Quitter le programme.\n");
            break;
        default:
            printf("Numero non trouvé.\n");
        }
    } while (choix != 6);

    return 0;
}
