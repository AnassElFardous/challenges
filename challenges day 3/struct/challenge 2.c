#include<stdio.h>
#include<string.h>

struct mystruct{

char nom[50];
char prenom[50];
int note_de_exame[3];

};
 int main(){
int i;
struct mystruct s1;

printf("entrer nom:");
scanf("%s",s1.nom);

printf("entrer prenom:");
scanf("%s",s1.prenom);

for (i=0;i<3;i++)
{
    printf("entrer note[%d]:",i);
    scanf("%d",&s1.note_de_exame[i]);
}

printf("nom:%s\n",s1.nom);

printf("prenom:%s\n",s1.prenom);

for (int i=0;i<3;i++)
{
    printf("note:%d\t",s1.note_de_exame[i]);
}

return 0;
}

