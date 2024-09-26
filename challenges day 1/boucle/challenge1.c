#include <stdio.h>

int main() {
  int i,resultat,x;
  printf("entrer valeur du multiplication:");
  scanf("%d",&x);

  for (i = 0; i <= 10; i++) {
      resultat=x*i;
    printf("%d * %d= %d \n",x,i,resultat);
  }

  return 0;
}
