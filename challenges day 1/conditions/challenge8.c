#include <stdio.h>

int main(){
 float x;

printf("entrer la moyenne des eleves:");
scanf("%f",&x);

  if (x<10 ) {
    printf("recale");
    }
  else if (x >= 10 && x<12){
    printf("mention passable.");
    }
  else if (x >= 12 && x<14){
    printf("assez bien.");
    }
     else if (x >= 14 && x<16){
    printf("bien.");
    }
     else if (x >= 16 && x<20){
    printf("tree bien.");
    }
    else
    printf("veuillez entrer entre 0 et20");


  return 0;
}
