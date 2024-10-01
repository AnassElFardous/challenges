#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livre {
    char titre[100];
    char auteur[100];
    float prix;
    int quantite;
};

int main() {
    int taille = 0;
    int i;
    char newtitre[100];
    int choix;
    int newquantite;
    int found = 0;
    int total = 0;

    struct livre liv[100];
    do {
        printf("menu :\n");
        printf("1. ajouter des livres \n");
        printf("2. afficher les livres \n");
        printf("3. nouvelle quantite \n");
        printf("4. supprimer un livre du stock \n");
        printf("5. afficher le nombre total de livres dans le stock\n");
        printf("6. quitter\n");
        printf("choix nombre du menu : ");
        scanf("%d", &choix);
        printf("--------------------------------\n");

        switch (choix) {
            case 1:
                printf("entrer la taille du tab : ");
                scanf("%d", &taille);
                for (i = 0; i < taille; i++) {
                    printf("entrer le titre : ");
                    scanf("%s", liv[i].titre);

                    printf("entrer l'auteur : ");
                    scanf("%s", liv[i].auteur);

                    printf("entrer le prix : ");
                    scanf("%f", &liv[i].prix);

                    printf("entrer la quantite : ");
                    scanf("%d", &liv[i].quantite);
                }
                break;
            case 2:
                for (i = 0; i < taille; i++) {
                    printf("titre : %s\n", liv[i].titre);
                    printf("auteur : %s\n", liv[i].auteur);
                    printf("prix : %.2f\n", liv[i].prix);
                    printf("quantité : %d\n", liv[i].quantite);
                    printf("--------------------------------\n");
                }
                break;
            case 3:
                printf(" recherche : ");
                scanf("%s", newtitre);
                found = 0;
                for (i = 0; i < taille; i++) {
                    if (strcmp(liv[i].titre, newtitre) == 0) {
                        printf("last stock : %d \n", liv[i].quantite);
                        printf("new stock : ");
                        scanf("%d", &newquantite);
                        liv[i].quantite = newquantite;
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("not found\n");
                }
                break;
            case 4:
                printf("livre ete supremer : ");
                scanf("%s", newtitre);
                found = 0;
                for (i = 0; i < taille; i++) {
                    if (strcmp(liv[i].titre, newtitre) == 0) {
                        printf("valide supresion \n");
                        found = 1;
                        for (int j = i; j < taille - 1; j++) {
                            liv[j] = liv[j + 1];
                        }
                        taille--;
                        break;
                    }
                }
                if (!found) {
                    printf("Livre non supremer pas\n");
                }
                break;
            case 5:
                total = 0;
                for (i = 0; i < taille; i++) {
                    total += liv[i].quantite;
                }
                printf("total de stock : %d \n", total);
                break;
            case 6:
                printf("quitter le programe\n");
                break;
            default:
                printf("not found this menu \n");
        }
    } while (choix != 6);
    return 0;
}
