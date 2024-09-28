#include<stdio.h>
void max(int x,int z){

if (x>z)
{
    printf("le grande nombre est:%d ",x);
}
else
{
    printf("x is not great than z");

}
}
int main(){

int x;
int z;
printf("donne moi valeur:");
scanf("%d",&x);
printf("donne moi valeur:");
scanf("%d",&z);

max(x,z);

return 0;
}
