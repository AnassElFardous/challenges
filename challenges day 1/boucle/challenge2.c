#include <stdio.h>

int main() {
  int n,i;
  int fact=1;
  printf("entre an integer: ");
  scanf("%d",&n);

  for (i=1;i<=n;i++){
    fact*=i;
    printf("%d*%d=%d\n",n,i,fact);
  }

  return 0;
}
