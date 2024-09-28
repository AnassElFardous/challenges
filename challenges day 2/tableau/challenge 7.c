#include<stdio.h>
int main(){
int taille,temp , j;

printf("entrer la taille:");
scanf("%d",&taille);

int tab[taille];

for(int i=0;i<taille;i++)
{
    printf("entrer la taille");
    scanf("%d",&tab[i]);

}
 for (int i=0;i<taille;i++){
 for (int j=i+1;j<taille;j++)
    {
        if (tab[i]<tab[j])
        {

            temp=tab[j];
            tab[j]=tab[i];
            tab[i]=temp;
        }

    }
      printf("%d,",tab[i]);
}

return 0;
}
