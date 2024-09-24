#include <stdio.h>
#include<stdlib.h>
int main() {

  int a,b,total_1;

  printf("entrer valeur a:");
  scanf("%d",&a);
  printf("entrer valeur b:");
  scanf("%d",&b);


  if (a==b){
total_1=(a+b)*3;
    printf("(a+b)*3=%d",total_1);

  }else{
total_1=a+b;
  printf("a+b=%d",total_1);
  }

  return 0;
}
