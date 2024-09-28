#include <stdio.h>


int main()
{
    int taille,i;

    printf("entrer la taille:");
    scanf("%d",&taille);

    int tab[taille];

    for(i=0;i<taille;i++){

        printf("entre les valeurs : ");
        scanf("%d",&tab[i]);
     }

     for(i=0;i<taille;i++){
        if(tab[i]%2==0)
            {
            printf(" %d pair\n",tab[i]);

            }
}

return 0;
}
