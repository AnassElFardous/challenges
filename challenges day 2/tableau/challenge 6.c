#include<stdio.h>
int main (){

int i,taille,resultat;
int facteur ;

printf("  entrer la taille de tableau:");
scanf("%d",&taille);
int nombre[taille];

for (i=0;i<taille;i++)
{
    printf("entrer les nombre des eleve:");
    scanf("%d",&nombre[i]);
}
    printf("entrer facteure:");
    scanf("%d",&facteur );
for (i=0;i<taille;i++)
{
    resultat=facteur *nombre[i];
    printf(" %d ",resultat);
  }


return 0;
}
