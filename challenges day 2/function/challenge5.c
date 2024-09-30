#include<stdio.h>
int factorielle(int x){
int fact=1;
for (int i=1;i<=x;i++ )
{
    fact*=i;
}
return fact;
}
int main(){
    int x;
    int fact;
printf("entrer numbre x:");
scanf("%d",&x);
fact=factorielle(x);
printf("%d!=%d",x,fact);

return 0;
}


