#include<stdio.h>
int main (){

int n;
int inv;
printf("entrer le nombre n:");
scanf("%d",&n);
 while (n!=0) {

    inv=inv* 10 + n % 10;
    n /= 10;
  }
  printf("%d",inv);


return 0;
}
