#include<stdio.h>

int main (){
    int n,grand;

printf("entrer la taille de tableau:");
scanf("%d",&n);
int nombre[n];

for (int i=0;i<n;i++)
{
    printf("entrer nombre:");
    scanf("%d",&nombre[i]);
}
 grand=nombre[0];
for (int i=0;i<n;i++){
    if (grand>nombre[i]){
            grand=nombre[i];
    }
}
printf("%d",grand);

return 0;
}
