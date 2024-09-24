#include <stdio.h>
#include <stdlib.h>

int main()
{
    //c=Celsius
    //k=Kelvin
   float c,k;
    const t=273.15;

   printf("entrer celsius");
   scanf("%f",&c);
   k=c+t;
   printf("k=%.2f",k);

return 0;
}

