#include <stdio.h>

int main() {
  char A ;
  printf("entrer caractere:", A);
  scanf("%c",&A);
  if (A>=65 && A<=90){
  printf("le caractère  est un  majuscule");
  }else{
  printf("le caractère  est un minuscule ");
  }

  return 0;
}
