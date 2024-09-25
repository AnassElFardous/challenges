#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("entrer un nombre:");
    scanf("%d",&nombre);

  if (nombre % 2 == 0) {
    printf("%d  pair\n", nombre);
  } else {
    printf("%d impair\n", nombre);
  }

return 0;
}
