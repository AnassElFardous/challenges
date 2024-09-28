#include<stdio.h>
int main (){

int taille,i,j;

 printf("entrer les valeurs ");
    scanf("%d",&taille);

    int tab[taille];
    int tab1[taille];
for (i=0;i<=taille;i++)
{
    printf("entrer les valeurs:");
    scanf("%d",&tab[i]);

    for(j=0;j<taille;j++){
    tab1[i]=tab[i];
        }
}
   for ( i=0;i<=taille;i++)
{
    printf("%d=====%d\n",tab1[i],tab[i]);
}

return 0;
}
