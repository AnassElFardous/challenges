#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{

    char nom[100];
    char numero[100];
    char e_mail[100];

} contact;

    int size=0;
    contact cont[100];

void ajouter()
{

    int val;
    printf("entree les contact:");
    scanf("%d",&val);

    for (int i=size; i<val; i++)
    {
        printf("entree nom: ");
        scanf("%s",cont[i].nom);
        printf("entree numero: ");
        scanf("%s",cont[i].numero);
        printf("entree e_mail: ");
        scanf("%s",cont[i].e_mail);
        size++;
    }
}
void afficher()
{

    for (int i=0; i<size; i++)
    {

        printf("nom:%s\n",cont[i].nom);
        printf("numero:%s\n",cont[i].numero);
        printf("e_mail:%s\n",cont[i].e_mail);
        printf("-----------------------------\n");

    }

}
void Rechercher()
{
    char newname[100];
    printf("entree le nom trouver:");
    scanf("%s",newname);
    int found=0;
    for (int i=0; i<size; i++)
    {
        if (strcmp(cont[i].nom,newname)==0)
        {
            printf("contact est trouve:\n%s\n%s\n%s:",cont[i].nom,cont[i].numero,cont[i].e_mail);
            found=1;
        }
    }

}
void Modifier()
{
    char Newname[100];
    char newname[100];
    char newnumero[100];
    char new_e_mail[100];

    printf("entree le nom trouver");
    scanf("%s",newname);
    int found=0;
    for (int i=0; i<size; i++)
    {
        if (strcmp(cont[i].nom,newname)==0)
        {
            printf("contact est trouve");
            printf("entree nom");
            scanf("%s",Newname);

            printf("entree numero");
            scanf("%s",newnumero);

            printf("entree e_mail");
            scanf("%s",new_e_mail);

            strcpy(cont[i].nom, Newname);
            strcpy(cont[i].numero, newnumero);
            strcpy(cont[i].e_mail, new_e_mail);
            found=1;
        }
    }

}
void Supprimer()
{
    char newname[100];
    int i;
    printf("name you wanna Delete:");
    scanf("%s",newname);
    int found=0;
    for( i=0; i<size; i++)
    {

        if (strcmp(cont[i].nom,newname)==0)
        {
            printf("is found\n");
            found=1;
            for (int j=i; j<size-1; j++)
            {
                cont[j]=cont[j+1];
            }
            size--;
        }

    }
}
int main()
{
   int choix;
    do
    {
        printf("menu :\n");
        printf("1. ajouter  \n");
        printf("2. afficher  \n");
        printf("3. modifier  \n");
        printf("4. quitter\n");
        printf("choix nombre du menu : ");
        scanf("%d",&choix);
        printf("--------------------------------\n");

        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2:
            afficher();
            break;
        case 3:
            Modifier();
            break;
        case 4:
            printf("quitter le programme \n");
            break;
        default:
            printf("le nombre n'est pas trouvé \n");
        }
    }
    while (choix != 4);

return 0;
}

