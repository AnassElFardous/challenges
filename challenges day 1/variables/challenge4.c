#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ms=m�tres par seconde
    //kmh=kilom�tres par heure
   float ms,kmh;
    const v=0.27778;
    printf("demande la vitesse en kilom�tres par heure (km/h) et la transforme en m�tres par seconde (m/s).\n");

   printf("entrer km\\h:");
   scanf("%f",&kmh);
   ms = kmh * 0.27778;
   printf("k=%f",ms);

return 0;
}

