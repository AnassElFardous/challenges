#include <stdio.h>

int main() {
int taille,i,j,taille1,taille2;
printf("entrer la taille de tab :");
scanf("%d",&taille);

  int tab[taille];

  for (i=0;i<taille;i++){
  printf("entrer les valeur de tab");
  scanf("%d",&tab[i]);
}
int tab1[taille1];
printf("entrer la taille de tab 2:");
scanf("%d",&taille1);

 for (j=0;j<taille1;j++){
  printf("entrer les valeur de tab 2:");
  scanf("%d",&tab1[j]);
}
taille2=taille+taille1;
int tab2[taille2];

    for (i = 0; i < taille; i++) {
        tab2[i] = tab[i];
    }
    for (j = 0; j < taille1; j++) {
        tab2[taille + j] = tab1[j];
    }
    for (i = 0; i < taille2; i++) {
        printf("%d,", tab2[i]);
    }

  return 0;
}
