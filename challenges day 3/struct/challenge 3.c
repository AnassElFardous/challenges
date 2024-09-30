#include<stdio.h>
#include<string.h>

struct mystruct{

char nom[50];
char prenom[50];
int note_de_exame[3];

};
 int main(){
int i;
struct mystruct s1[3];



for (i=0;i<3;i++)
{
       printf("entrer nom:");
scanf("%s",s1[i].nom);
  for (i=0;i<3;i++)
{
       printf("entrer note :");
scanf("%s",s1[i].note_de_examej]);


printf("entrer prenom:");
scanf("%s",s1.prenom);

    printf("entrer note[%d]:",i);
    scanf("%d",&s1.note_de_exame[i]);
}



for (int i=0;i<3;i++)
{
    printf("note:%d\t",s1.note_de_exame[i]);

    printf("nom:%s\n",s1.nom[i]);

    printf("prenom:%s\n",s1.prenom[i]);
}

return 0;
}


