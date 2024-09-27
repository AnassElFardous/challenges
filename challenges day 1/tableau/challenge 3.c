#include<stdio.h>
int main (){

int i,n;
int somme;
printf("entrer la taille de tableau:");
scanf("%d",&n);
int nombre[n];

for (i=0;i<n ;i++ )
{
    printf("entrer les nombre des eleve:");
    scanf("%d",&nombre[i]);
}
for (i=0;i<n;i++)
{
   somme+=nombre[i];
}
printf("les nombre des eleve est:%d",somme);
return 0;
}
