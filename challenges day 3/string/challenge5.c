#include<stdio.h>

int main(){

char inverse[]="anss_el_fardous";
int taille;
taille=strlen(inverse);
for(int i=strlen(inverse)-1;i>=0;i--)
{
    printf("%c",inverse[i]);
}

return 0;
}
