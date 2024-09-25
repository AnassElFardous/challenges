#include <stdio.h>
#include<stdlib.h>
int main() {
  int anne,mois,jours,heures,Minutes,Secondes,x;

  printf("entrer lanne :");
   scanf("%d",&x);

  jours=anne*365;
  mois=anne*12;
  heures=jours*24;
  Minutes=heures*60;
  Secondes=Minutes*60;


  switch (x) {
    case"jours":
    printf("%d jours\n",jours);
    break;
  case"mois":
    printf("%d mois\n",mois);
    break;
  case "heures":
    printf("%d heures\n",heures);
    break;
  case "Minutes":
    printf("%d Minutes\n",Minutes);
    break;
  case "Secondes":
    printf("%d Secondes\n",Secondes);
    break;




}

  return 0;
}
