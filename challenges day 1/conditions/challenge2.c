#include <stdio.h>
#include<stdlib.h>

int main() {
  char voyelle;
  printf("entrer caractère :");
  scanf("%c",&voyelle);

  switch (voyelle) {
  case 'a':
      printf(" voyelle");
      break;
  case 'e':
      printf(" voyelle");
      break;
  case 'i':
      printf(" voyelle");
      break;
  case 'o':
      printf(" voyelle");
      break;
  case 'u':
      printf(" voyelle");
      break;
  case 'y':
    printf(" voyelle");
    break;
     default:
    printf("non voyelle");

  }

  return 0;
}

