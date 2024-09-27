#include<stdio.h>
int main (){

int i,n;
int fact=1;

printf("entrer la taille de tableau:");
scanf("%d",&n);
int nombre[n];

for (i=1;i<n;i++)
{
    printf("entrer les nombre des eleve:");
    scanf("%d",&nombre[i]);
}
for (i=1;i<n;i++)
{
    fact*=nombre[i];
  }
printf("%d!",fact);
return 0;
}
