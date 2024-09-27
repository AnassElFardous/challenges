#include<stdio.h>

int main(){

int taille;
int anass;

printf("entrer la taille de tableau:");
scanf("%d",&taille);

int tableau[taille];

for (int i=0;i<taille;i++)
{
    printf("les nombre:");
        scanf("%d",&tableau[i]);
}

for (int i=0;i<taille;i++)
{
    for (int j=i+1;j<taille;j++ )
    {
        if(tableau[i]<tableau[j]){
            anass=tableau[i];
            tableau[i]=tableau[j];
            tableau[j]=anass;
        }
    }

}
for (int i = 0; i < taille; i++) {
        printf("%d \n",tableau[i]);
}
return 0;
}
