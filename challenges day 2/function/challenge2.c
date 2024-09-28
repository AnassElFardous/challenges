#include<stdio.h>
int multipliation(int x,int z){
int mlt;
mlt=x*z;
return mlt;
}
int main(){
    int z,x;
    int mltu;
printf("entrer numbre x:");
scanf("%d",&x);
printf("entrer numbre x:");
scanf("%d",&z);
mltu=multipliation(x,z);
printf("mlt=%d",mltu);

return 0;
}

