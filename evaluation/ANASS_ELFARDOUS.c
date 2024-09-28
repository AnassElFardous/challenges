//ex 1
#include<stdio.h>
#include<stdlib.h>

int main (){

int base,hauteur;
int aire,permietre;

printf("entrer base:");
scanf("%d",&base);
printf("entrer base:");
scanf("%d",&hauteur);

aire=(base*hauteur) /2;
permietre=3*base;

printf("aire:%d\npermietre:%d",aire,permietre);


return 0;
}
//ex 2

#include<stdio.h>
#include<stdlib.h>

int main(){

    float temperature;

printf("entrer temperature:");
scanf("%f",&temperature);

if (temperature<=37.5){
    printf("votre temperature est normale.");
    }
    else
    {
        printf("vous avez de la fievre.");

    }
    return 0;
}
//ex 3

#include<stdio.h>
#include<stdlib.h>

int main(){

int n,i,x;
printf("entrer n:");
scanf("%d",&n);

while (i<n)
{
    if(x %2==0){
    printf("%d",x);
    i++;
}
    x++;

}

return 0;
}



//ex 4
#include<stdio.h>
#include<stdlib.h>

int main(){

             int haute,base;


int temperature[2]={23,45};

for (int i=0;i<2;i++)
{
    printf("entrer temperature ");
    scanf("%d",&temperature[i]);
}

for(int i=0;i<2;i++){
    haute=temperature[0];
    if(haute<temperature[i]){
    printf("le plus haute temperature:%d\n",temperature[i]);
     haute=temperature[i];}
}

for(int i=0;i<2;i++)
{
     base=temperature[0];
     if(haute>temperature[i]){
    printf("le plus base temperature:%d\n",temperature[i]);
     base=temperature[i];
    }
}
return 0;
}

