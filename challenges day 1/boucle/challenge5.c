#include<stdio.h>

int main (){
int i;
int x;
int z;
int puiss=1;

printf("entrer nombre 1 : ");
scanf("%d",&x);
printf("entrer nombre 2 : ");
scanf("%d",&z);
  for (i = 0; i < z; i++) {
        puiss=x*puiss;
  }
  printf("la puissance : %d",puiss);



return 0;
}
