#include <stdio.h>
#include <stdlib.h>

int main()
{
    //y=yards
    //k=kilomètres
   float y,k;
    const d=1093.61;

   printf("demande la distance en kilomètres et la transforme en yards\n");
   printf("entrer kilomètres:");
   scanf("%f",&k);
   y=k*d;
   printf("k=%.2f",y);

return 0;
}

