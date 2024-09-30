int prite(int a){

    if (a %2==0)
    {
      return 0;
    }

    else
    {
     return 1;
    }

   }
    int main(){
        int a;
        printf("entrer le nombre:"),
        scanf("%d",&a);
        if(prite(a)== 0){
            printf(" paire ");
        }
        else{
            printf(" impair ");
        }
















    return 0;
    }










