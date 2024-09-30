#include<stdio.h>
#include<string.h>

struct mystruct{

char nom[50];
char prenom[50];
int age;

};
 int main(){

struct mystruct s1;



printf("entrer nom:");
scanf("%s",s1.nom);

printf("entrer prenom:");
scanf("%s",s1.prenom);

printf("entrer age:");
scanf("%d",&s1.age);

printf("nom:%s\n",s1.nom);

printf("prenom:%s\n",s1.prenom);


printf("age:%d",s1.age);



return 0;
}
