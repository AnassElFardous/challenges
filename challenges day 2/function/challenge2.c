#include<stdio.h>
int multipliation(int x,int z){
int mlt;
mlt=x*z;
return mlt;
}
int main(){
    int z,x;
    int mlt;
printf("entrer numbre x:");
scanf("%d",&x);
printf("entrer numbre x:");
scanf("%d",&z);
mlt=multipliation(x,z);
printf("mlt=%d",mlt);

return 0;
}

