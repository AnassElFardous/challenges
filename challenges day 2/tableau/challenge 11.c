
#include <stdio.h>
int main(){
int taille,i;

printf("entrer la taille de tableau:");
scanf("%d",&taille);

int tab[taille];

for(i=0;i<taille;i++){
    printf("entrer les valeur:");
    scanf("%d",&tab[i]);
}
for (i=0;i<taille;i++)
{
    printf("les valeurs %d\n",tab[i]);
}
int x;
int z;
printf("chercher:");
scanf("%d",&x);
int found=0;
for (i=0;i<taille;i++)
{
    if(tab[i]==x){
    found=1;
    printf("number is found:%d\n",x);

    printf("remplacer:");
    scanf("%d",&z);
    tab[i]=z;
    for (i=0;i<taille;i++)
    {
        printf("le nombre %d\n",tab[i]);
    }

    }
}
if(!found){
    printf("is not founde");
}
    return 0;
}
