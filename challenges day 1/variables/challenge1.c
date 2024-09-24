#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[30];
    char prenom[30];
    int age;
    char sexe [1];
    char adresse_email [100];

    printf("entrer nom:");

    scanf("%s",&nom);

    printf("nom :%s\n",nom);

    printf("entrer prenom:");

    scanf("%s",&prenom);

    printf("prenom :%s\n",prenom);

    printf("entrer age:");

    scanf("%d",&age);

    printf("age: %d\n",age);

    printf("entre sexe (M)asculin\\(F)eminin :");

    scanf("%s",&sexe);

    printf("sex:%s\n",sexe);

    printf("entre adresse email: ");

    scanf("%s",&adresse_email);

    printf("adresse email:%s",adresse_email);
    return 0;
}
