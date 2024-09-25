#include <stdio.h>

int main() {
  int n,i;
  int somme=0;
  printf("entre an integer: ");
  scanf("%d",&n);

  for (i=0;i<=n;i++){
    somme+=i;
  }
printf("somme = %d",somme);
  return 0;
}
