#include <stdio.h>

int main() {
  char A ,a ;
  printf("entrer caractere:", A);
  scanf("%c",&A);
  if ((A>=65 && A<=90)||(A>=97 && A<=122)) {
     printf("le caractere  est un alphabe\n");
  }if (A>=65 && A<=90)  {
     printf("le caract�re  est un  majuscule");


}
  else if (A>=97 && A<=122){
       printf("le caract�re  est un minuscule ");

  }
else{
  printf("le caract�re  est un no alphabe");
  }

  return 0;
}
