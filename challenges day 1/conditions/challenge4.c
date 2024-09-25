#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
int a,b,c,delta,x0,x1,x2;
printf("permet de calculer les solutions possibles d’une équation du deuxième degré.\n");
printf("entrer a");
scanf("%d",&a);
printf("entrer b");
scanf("%d",&b);
printf("entrer c");
scanf("%d",&c);

delta=pow(b,2)-(4*a*c);
printf("%d",delta);

if (delta<0){
        x0=x0=-b/2*a;
printf(" L'equation   ax2+bx+c=0 na pas de solution reelle x0=x0=-b/2*a");
}else if (delta>0){
 printf(" Si delta > 0 : L'equation ax2+bx+c=0 a deux solutions distinctes :x1=(-b-sqrt(delta))/2*a et x2=(-b+sqrt(delta))/2*a ");

    x1=(b-sqrt(delta))/2*a;
    x2=(b+sqrt(delta))/2*a;


}else{
    printf(" Si delta = 0 : L'equation   ax2+bx+c=0 a une unique solution : ");
}









return 0;

}



