#include<stdio.h>

int main (){

int x=0;
int n;
int i=0;
printf("entrer nombre");
scanf("%d",&n);

while (i<n) {
    if(x%2!=0){
     printf("%d,",x);
     i++;
    }
        x++;
    }

return 0;
}
