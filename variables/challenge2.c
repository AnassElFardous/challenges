#include <stdio.h>
#include <stdlib.h>

int main()
{
    //c=Celsius
    float c;
    printf("entre celsius:");
    scanf("%f",& c);
    printf("celsius:%.2f ",c);
    if (c<0) {
        printf("Solide");
    }else if (0 <= c && c < 100){
     printf("liquide:");
     }
     else {
        printf("gaz");

     }





return 0;
}

