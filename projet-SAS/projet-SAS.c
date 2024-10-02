#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
      char Nom[100];
      char Prenom[100];
      int age;
      char Telephone[100];
      char statut [100];
      int Reference_unique;
      char Date_de_reservation [100];


} dentaires;

    int size=0;
    dentaires dent[100];

void ajouter()
{

    int taille;
    int i;
    printf("entree nombre de client pour l'ajout:");
    scanf("%d",&taille);

    for (i=size; i<taille; i++)
    {
        dent[i].Reference_unique= i+1;
        printf("entree nom de client: ",i+1);
        scanf("%s",dent[i].Nom);
        printf("entree prenom de client : ",i+1);
        scanf("%s",dent[i].Prenom);
        printf("entree age de clinet : ");
        scanf("%s",dent[i].age);
    }
        char tele[100];
        do
        {
        printf("entree numero de client (use:+212) :");
        scanf("%s",tele);
        if(strlen(dent[i].Telephone)==14)
        {
             strcpy(dent[i].Telephone,tele);
        }
        else
        {
            printf("numero contient juste 14 caractere ");
        }
        }while (strlen(dent[i].Telephone)!=14);
        int choix;
        do{
        printf("  Statut: \n");
        printf("\t 1-valide \n");
        printf("\t 2-reporte \n");
        printf("\t 3-annule \n");
        printf("\t 4-traite \n");
        scanf(" %d",&choix);
        switch(choix)
        {
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
            printf(" il ya seulement quatre choix !! \n");
            break;
        }
        }while (choix!=4);

        printf("entree date de reservation : ");
        scanf("%s",dent[i].Date_de_reservation);
                size++;
}
void  Modifier(){
int i;
      char newnom[100];
       char newprenom[100];
        int newage;
         char newtelephone[100];
          char newstatut [100];
           char newdate_de_reservation [100];
            int reference;

printf("entree le reference");
scanf("%d",reference);

int trouve=0;

for(i=0;i<size;i++)
{
    if (strcmp(dent[i].Reference_unique,reference)==0)
    {
        printf("reference trouve:");
     }
     }
int choix;
        do{
             printf("  Statut: \n");
             printf("\t 1-modifier nom \n");
             printf("\t 2-modifier prenom \n");
             printf("\t 3-modifier age \n");
             printf("\t 4-modifier statut \n");
             printf("\t 5-modifier date_de_reservation \n");
             scanf(" %d",&choix);
        switch(choix)
         {
        case 1:
            printf("entree nom:");
            scanf("%s",newnom);
            strcpy(dent[i].Nom,newnom);
            break;
        case 2:
            printf("entree prenom:");
            scanf("%s",newprenom);
            strcpy(dent[i].Prenom,newprenom);
            break;
        case 3:
            printf("entree age:");
            scanf("%s",newage);
            strcpy(dent[i].age,newage);
            break;
        case 4:
            printf("entree age:");
            scanf("%s",newtelephone);
            strcpy(dent[i].Telephone,newtelephone);
            break;
        case 5:
             printf("entree age:");
             scanf("%s",newstatut);
             strcpy(dent[i].statut,newstatut);
            break;
        case 6:
            printf("entree age:");
            scanf("%s",newdate_de_reservation);
            strcpy(dent[i].Date_de_reservation,newdate_de_reservation);

            break;
        default:
            printf(" il ya seulement six choix !! \n");
            break;
             }
        }while (choix!=6);

void affichage()
{
for (i=0;i<size;i++)
{
    printf("%d",dent[i].Reference_unique);
     printf("%s",dent[i].Nom);
      printf("%s",dent[i].Prenom);
       printf("%d",dent[i].age);
        printf("%s",dent[i].Telephone);
         printf("%s",dent[i].statut);
          printf("%d",dent[i].Date_de_reservation);

}
 }

