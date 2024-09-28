#include<stdio.h>
int main (){

int i,n;

printf("entrer la taille de tableau:");
 scanf("%d",&n);

int nombres[n];

for (i=0;i<n;i++)
    {
    printf("entrer les nombres des eleve:");
    scanf("%d",&nombres[i]);
}
for (i=0;i<n;i++)
{
    printf("les nombre des eleve est:%d\n",nombres[i]);
}
return 0;
}
