#include<stdio.h>
#include<string.h>

void inverse(char m[100]){

for (int i=strlen(m)-1;i>=0;i--)
{
    printf("%c",m[i]);
}

}
int main(){

char m[100];

printf("entrer nom :");
gets(m);
    inverse(m);


return 0;
}
