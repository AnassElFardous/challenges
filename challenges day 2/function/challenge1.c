#include<stdio.h>
int somme(int x , int z){
    int som;
    som=x+z;

return som;
}
int main(){
int x;
int z, som;

printf("donne moi valeur:");
scanf("%d",&x);
printf("donne moi valeur:");
scanf("%d",&z);
 som=somme(x,z);
printf("%d+%d=%d",x,z,som);

return 0;
}
