#include <stdio.h>

int main() {
  char A ;
  printf("entrer caractere:", A);
  scanf("%c",&A);
  if (A>=65 && A<=90){
  printf("le caract�re  est un  majuscule");
  }else{
  printf("le caract�re  est un minuscule ");
  }

  return 0;
}
