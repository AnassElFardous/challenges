#include <stdio.h>

int main() {
int taille,i,j,taille1,taille2;
printf("entrer la taille de tab :");
scanf("%d",&taille);

  int matrix[taille];
  int matrix1[taille1];
  int matrix2[taille2];

  for (i=0;i<taille;i++){
  printf("entrer les valeur de tab");
  scanf("%d",&matrix[i]);
}

printf("entrer la taille de tab 2:");
scanf("%d",&taille1);

 for (j=0;j<taille1;j++){
  printf("entrer les valeur de tab 2:");
  scanf("%d",&matrix1[j]);
}
taille2=taille+taille1;
matrix2[taille2];

    for (i = 0; i < taille; i++) {
        matrix2[i] = matrix[i];
    }
    for (i = 0; j < taille1; j++) {
        matrix2[taille + j] = matrix1[j];
    }

    printf("Tab : ");
    for (i = 0; i < taille2; i++) {
        printf("%d ", matrix2[i]);
    }
    printf("\n");

  return 0;
}
