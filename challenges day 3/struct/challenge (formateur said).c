#include<stdio.h>
#include<string.h>

struct mystruct{

char nom[50];
char prenom[50];
int note_de_exame;

};
 int main(){
int i;
int taille;
printf("entrer la taille de tab:");
    scanf("%d",&taille);
struct mystruct s1[taille];

for (i=0;i<taille;i++)
{
    printf("entrer nom[%d]:",i);
    scanf("%s",s1[i].nom);

    printf("entrer prenom[%d]:",i);
    scanf("%s",s1[i].prenom);

    printf("entrer note[%d]:",i);
    scanf("%d",&s1[i].note_de_exame);
}

for (int i=0;i<taille;i++)
{
    printf(" nom: %s \t prenom: %s \t ",s1[i].nom,s1[i].prenom);

    printf(" note: %d \n \t ",s1[i].note_de_exame);
}

return 0;
}

