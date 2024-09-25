#include <stdio.h>
#include <stdlib.h>

int main() {
    int anne, mois, jours, heures, Minutes, Secondes;
    int x;
    char choix;

    printf("Entrer l'annee : ");
    scanf("%d", &x);
    getchar();
    printf("Entrer votre choix (j/m/h/M/s) : ");
    scanf("%c", &choix);

    jours = x * 365;
    mois = x * 12;
    heures = jours * 24;
    Minutes = heures * 60;
    Secondes = Minutes * 60;

    switch (choix) {
        case 'j':
            printf("%d jours\n", jours);
            break;
        case 'm':
            printf("%d mois\n", mois);
            break;
        case 'h':
            printf("%d heures\n", heures);
            break;
        case 'M':
            printf("%d minutes\n", Minutes);
            break;
        case 's':
            printf("%d secondes\n", Secondes);
            break;
        default:
            printf("votre choix pas here \n");
    }

    return 0;
}

