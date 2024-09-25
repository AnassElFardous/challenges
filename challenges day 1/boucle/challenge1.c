#include <stdio.h>

int main() {
  int i,x;
  printf("entrer valeur du multiplication:");
  scanf("%d",&i);

  for (x = 10; x >= 0; x--) {
    printf("%d * %d =%d\n", i,x,x*i);
  }

  return 0;
}
