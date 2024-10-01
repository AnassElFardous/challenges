#include<stdio.h>
int main(){


char first_name[]="anass";
char last_name[]="elfardous";

int taille,taille2;

taille=strlen(first_name);

taille2=strlen(last_name);

printf("%d\n",taille);

printf("%d",taille2);

if(taille==taille2)
    {

    printf("les chaines sont egales.");

    }
else
    {

printf("les chaines sont  differentes. ")

    }




return 0;
}

