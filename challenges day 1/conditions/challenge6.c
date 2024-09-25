#include <stdio.h>

int main() {
  int nom;
  printf("entrer nombre:");
  scanf("%d",&nom);
  if (nom > 0) {
    printf("le nombre est positif");
  } else if (nom < 0) {
    printf("le nombre donne negatif");
  } else {
    printf("la valeur est 0");
  }

  return 0;
}
