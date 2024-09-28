#include<stdio.h>
void Somme(int x , int z){
    int somme;
    somme=x+z;
    printf("some=%d",somme);


}
int main(){
int x;
int z;
printf("donne moi valeur:");
scanf("%d",&x);
printf("donne moi valeur:");
scanf("%d",&z);

Somme(x,z);

return 0;
}
